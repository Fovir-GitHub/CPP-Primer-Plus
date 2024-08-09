// Define a recursive function that takes an integer argument
// and returns the factorialof that argument.
// Recall that 3 factorial, written 3!, equals 3 ×2!, and so on,
// with 0!defined as 1.In general,
// if n is greater than zero, n != n * (n - 1)!.
// Test your functionin a program that uses a loop to
// allow the user to enter various values for which the
// program reports the factorial.

#include<iostream>

unsigned long long factorial(int number);

int main(void)
{
	int number = 0;

	while (std::cin >> number)
		std::cout << "The factorial is " << factorial(number)
		<< '\n';

	return 0;
}

unsigned long long factorial(int number)
{
	if (number == 1)
		return number;
	else
		return number * factorial(number - 1);
}
