#include<iostream>

const int LIM = 8;

template <typename T>
void Swap(T & a, T & b);

template <typename T>
void Swap(T * a, T * b, int n);

void Show(int a[]);

int main(void)
{
	using namespace std;

	int i = 10, j = 20;

	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";

	double x = 24.5, y = 81.7;

	int d1[LIM] = { 0,7,0,4,1,7,7,6 };
	int d2[LIM] = { 0,7,2,0,1,9,6,9 };

	cout << "Original arrays:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, LIM);

	cout << "Swaaped arrays:\n";
	Show(d1);
	Show(d2);

	return 0;
}

template<typename T>
void Swap(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;

	return;
}

template<typename T>
void Swap(T * a, T * b, int n)
{
	T temp;

	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

	return;
}

void Show(int a[])
{
	using std::cout;

	cout << a[0] << a[1] << "/"
		<< a[2] << a[3] << "/";

	for (int i = 4; i < LIM; i++)
		cout << a[i];
	cout << '\n';

	return;
}
