// Write a function that takes a reference to a string object as
// its parameter and thatconverts the contents of the string
// to uppercase.
// Use the toupper() function described in Table 6.4 of Chapter 6.
// Write a program that uses a loop
// which allows you to test the function with different input.

#include<iostream>
#include<string>
#include<cctype>

std::string String2Uppercase(std::string & str);

int main(void)
{
	std::string user_input;

	std::cout << "Enter a string (q to quit): ";
	while (std::getline(std::cin, user_input) && user_input != "q")
		std::cout << String2Uppercase(user_input) << '\n'
		<< "Next string (q to quit): ";

	std::cout << "Bye." << '\n';

	return 0;
}

std::string String2Uppercase(std::string & str)
{
	for (char & ch : str)
		ch = std::toupper(ch);

	return str;
}
