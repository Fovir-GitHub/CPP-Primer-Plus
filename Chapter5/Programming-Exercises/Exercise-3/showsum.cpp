// Write a program that asks the user to type in numbers.
// After each entry, the pro - gram should report the
// cumulative sum of the entries to date.
// The program shouldterminate when the user enters 0.

#include<iostream>

int main(void)
{
	int sum = 0;
	int number;

	while (std::cin >> number && number != 0)
	{
		sum += number;
		std::cout << "The cumulative sum is " << sum << '\n';
	}

	return 0;
}