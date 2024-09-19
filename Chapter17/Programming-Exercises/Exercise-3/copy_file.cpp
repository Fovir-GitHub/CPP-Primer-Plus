#include<iostream>
#include<cstdlib>
#include<fstream>
#include<iomanip>

int main(int argc, char * argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " source_file target_file";
        std::exit(EXIT_FAILURE);
    }

    std::ifstream fin(argv[1], std::ios_base::binary | std::ios_base::in);
    std::ofstream fout(argv[2], std::ios_base::binary | std::ios_base::out);
    char ch;

    if (fin.fail())
    {
        std::cerr << "Can't read " << argv[1];
        std::exit(EXIT_FAILURE);
    }

    if (fout.fail())
    {
        std::cerr << "Can't open " << argv[2];
        std::exit(EXIT_FAILURE);
    }

    while (fin.get(ch))
        fout << ch;

    std::cout << "Copy success!\n";

    return 0;
}