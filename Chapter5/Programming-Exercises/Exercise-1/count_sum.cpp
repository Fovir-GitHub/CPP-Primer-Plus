// Writea program that requests the user to enter two integers.
// The program shouldthen calculate and report the sum of
// all the integers between and including the two integers.
// At this point, assume that the smaller integer is entered first.
// For example, ifthe user enters 2and9,
// the program should report that the sum
// of all the integersfrom 2 through 9 is 44.

#include<iostream>

int main(void)
{
	int first, second;
	int sum = 0;

	std::puts("Please enter 2 numbers:");
	std::cin >> first >> second;

	if (first > second)
		std::swap(first, second);

	for (int i = first;i <= second;i++)
		sum += i;

	std::cout << "The sum is " << sum << '\n';

	return 0;
}