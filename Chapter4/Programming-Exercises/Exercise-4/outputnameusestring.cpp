// Write a program that asks the user to enter his or
// her first name and then lastname, and that then constructs,
// stores, and displays a third string consisting of
// theuser’s last name followed by a comma, a space,
// and first name.Use stringobjectsand methods from the string headerfile.
// A sample run could look like this.

#include<iostream>
#include<string>

int main(void)
{
	std::string first, last;

	std::cout << "Enter your first name: ";
	std::cin >> first;
	std::cout << "Enter your last name: ";
	std::cin >> last;

	last = last + ", " + first;
	std::cout << "Here's the information in a single string: "
		<< last << '\n';

	return 0;
}