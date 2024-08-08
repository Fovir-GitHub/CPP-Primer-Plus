// Write a program that asks the user to enter his or her
// first name and then lastname, and that then constructs,
// stores, and displays a third string,
// consisting of theuser’s last name followed by a comma, a space,
// and first name.
// Use chararrays andfunctions from the cstring header file.
// A sample run could look like this:

#include<iostream>
#include<cstring>

#define LEN 80

int main(void)
{
	char first[LEN];
	char last[LEN];

	std::cout << "Enter your first name: ";
	std::cin >> first;
	std::cout << "Enter your last name: ";
	std::cin >> last;

	std::strcat(first, ", ");
	std::strcat(first, last);

	std::cout << "Here's the informatino in a single string: "
		<< first << '\n';

	return 0;
}