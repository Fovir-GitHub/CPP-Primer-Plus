#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

int main(void)
{
    const char * output_file = "target.txt";

    std::string first_file_name, second_file_name;
    std::ifstream input1, input2;
    std::ofstream fout;
    std::string temp1, temp2;

    std::cout << "Please enter the first file name:\n";
    std::cin >> first_file_name;
    input1.open(first_file_name);
    if (input1.fail())
    {
        std::cerr << "Can't open " << first_file_name;
        std::exit(EXIT_FAILURE);
    }

    std::cout << "Please enter the second file name:\n";
    std::cin >> second_file_name;
    input2.open(second_file_name);
    if (input2.fail())
    {
        std::cerr << "Can't open " << second_file_name;
        std::exit(EXIT_FAILURE);
    }

    fout.open(output_file);
    if (fout.fail())
    {
        std::cerr << "Can't open " << output_file;
        std::exit(EXIT_FAILURE);
    }

    while (std::getline(input1, temp1) &&
        std::getline(input2, temp2))
        fout << temp1 << ' ' << temp2 << '\n';

    while (std::getline(input1, temp1))
        fout << temp1 << '\n';
    while (std::getline(input2, temp2))
        fout << temp2 << '\n';

    input1.close();
    input2.close();
    fout.close();

    return 0;
}