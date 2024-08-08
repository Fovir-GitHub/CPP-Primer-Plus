// Yo u   s e l l   t h e   b o o k  C++ for Fools.
// Write a program that has you enter a year’s worth of monthly sales
// (in terms of number of books, not of money).
// The program shoulduse a loop to prompt you by month,
// using an array of char * (or an array ofstringobjects, if you prefer)
// initialized to the month strings and
// storing the inputdata in an array of int.
// Then, the program should find the sum of the array contents and
// report the total sales for the year.

#include<iostream>
#include<string>

int main(void)
{
	const int MONTHS = 12;
	const std::string months[MONTHS] =
	{
		"January","Feburary","March","April",
		"May","June","July","August",
		"September","October","November","December"
	};

	int sales[MONTHS] = { 0 };
	int sum = 0;

	for (int i = 0;i < MONTHS;i++)
	{
		std::cout << "Please enter " << months[i] << "'s sale: ";
		std::cin >> sales[i];
		sum += sales[i];
	}

	std::cout << "The year's sales is " << sum << " books." << '\n';

	return 0;
}