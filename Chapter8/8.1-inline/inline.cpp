#include<iostream>

inline double square(double x) { return x * x; }

int main(void)
{
	using namespace std;

	double a, b, c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);

	cout << "a = " << a << ", b = " << b << '\n'
		<< "c = " << c << ", c squared = " << square(c++) << '\n';
	cout << "Now c = " << c << '\n';

	return 0;
}