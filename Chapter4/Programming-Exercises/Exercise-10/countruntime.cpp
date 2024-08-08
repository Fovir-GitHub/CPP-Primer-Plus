// Write a program that requests the user to enter three times
// for the 40 - yd dash(or40 - meter, if you prefer)
// and then displays the times and the average.
// Use an arrayobject to hold the data.
// (Use a built - in array if arrayis not available.)

#include<iostream>
#include<array>

int main(void)
{
	const int ARRAY_SIZE = 3;

	std::array<double, ARRAY_SIZE> run_time;
	double sum = (double) 0;

	std::cout << "Please enter three times for your 40-meter run:\n";
	for (int i = 0;i < ARRAY_SIZE;i++)
	{
		std::cin >> run_time[i];
		sum += run_time[i];

		if (i != ARRAY_SIZE - 1)
			std::cout << "Enter the next time:\n";
	}

	std::cout << "Your run time:\n";
	for (int i = 0;i < ARRAY_SIZE;i++)
		std::cout << i + 1 << ":  " << run_time[i] << '\n';

	std::cout << "Your average time: "
		<< (double) sum / ARRAY_SIZE << '\n';

	return 0;
}