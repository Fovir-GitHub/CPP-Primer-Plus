#include<iostream>
#include<sstream>
#include<string>

int main(void)
{
    using namespace std;

    ostringstream outstr;
    string hdisk;

    cout << "What's the name of your hard disk? ";
    getline(cin, hdisk);

    int cap;
    cout << "What's its capacty in GB? ";
    cin >> cap;

    outstr << "The hard disk " << hdisk << " has a capacity of "
        << cap << " gigabytes.\n";

    string result = outstr.str();
    cout << result;

    return 0;
}