// Write a program that opens a text file,
// reads it character - by - character to the end ofthe file,
// and reports the number of characters in the file.

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

int main(void)
{
	std::ifstream fin;
	std::string file_name;
	int count_characters = 0;

	std::cout << "Please input the file name:\n";
	std::cin >> file_name;

	fin.open(file_name);
	if (fin.fail())
	{
		std::cerr << "Can't open file: " << file_name << '\n';
		std::exit(EXIT_FAILURE);
	}

	while (fin.get() && !fin.eof())
		count_characters++;

	std::cout << "The file have "
		<< count_characters << " characters.\n";
	fin.close();

	return 0;
}