#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<fstream>

class Store
{
private:
    std::ofstream & os;

public:
    Store(std::ofstream & out_stream) :os(out_stream) {}

    void operator()(const std::string & s);
};

void ShowStr(const std::string &);
void GetStrs(std::ifstream & fin, std::vector<std::string> & v);

int main(void)
{
    using namespace std;

    vector<string> vostr;
    string temp;
    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);
    // store in a file
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();
    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);
    return 0;
}

void ShowStr(const std::string & s)
{
    std::cout << s << '\n';
}

void GetStrs(std::ifstream & fin, std::vector<std::string> & v)
{
    std::size_t len;
    while (fin.read((char *) &len, sizeof(len)))
    {
        std::string temp;
        temp.resize(len);
        fin.read(&temp[0], len);
        v.push_back(temp);
    }
}

void Store::operator()(const std::string & s)
{
    std::size_t len = s.size();
    os.write((char *) &len, sizeof(len));
    os.write(s.data(), len);
}