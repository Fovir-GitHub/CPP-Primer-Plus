// Write a program that reads up to 10 donation values into
// an array of double. (Or, ifyou prefer, use an arraytemplate object.)
// The program should terminate input on non - numeric input.
// It should report the average of the numbers
// and also report how many numbers in the array are larger than
// the average.

#include<iostream>

int main(void)
{
	const int MAX = 10;
	double average = 0;
	int count = 0;
	int count_larger_than_average = 0;
	double values[MAX] = { 0 };

	while (count<MAX && std::cin >> values[count])
		average += values[count++];
	average /= (double) count;

	for (int i = 0;i < count;i++)
		if (values[i] > average)
			count_larger_than_average++;

	std::cout << "Average: " << average << '\n';
	std::cout << "Larger than average: "
		<< count_larger_than_average << '\n';

	return 0;
}