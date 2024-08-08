#include<iostream>

int main(void)
{
	const int SIZE = 5;

	int arr[SIZE];

	for (int & x : arr)
		std::cin >> x;
	for (int & x : arr)
		x++;
	for (int x : arr)
		std::cout << x << '\n';

	return 0;
}