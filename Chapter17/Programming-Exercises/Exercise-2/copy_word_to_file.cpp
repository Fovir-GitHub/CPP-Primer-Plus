#include<iostream>
#include<fstream>
#include<cstdlib>

int main(int argc, char * argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " filename";
        std::exit(EXIT_FAILURE);
    }

    std::ofstream fout(argv[1]);
    if (fout.fail())
    {
        std::cerr << "Can't open file: " << argv[1];
        std::exit(EXIT_FAILURE);
    }

    char ch;

    while (std::cin.get(ch) && !std::cin.eof())
        fout << ch;
    fout.close();

    return 0;
}