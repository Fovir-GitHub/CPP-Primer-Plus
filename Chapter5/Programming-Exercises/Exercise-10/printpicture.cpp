// Enter number of rows : 5
// ....*
// ...**
// ..***
// .****
// *****

#include<iostream>

int main(void)
{
	using std::cout;

	int rows;

	cout << "Enter number of rows: ";
	std::cin >> rows;

	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < rows - i - 1;j++)
			cout << '.';
		for (int j = 0;j < i + 1;j++)
			cout << '*';
		cout << '\n';
	}

	return 0;
}