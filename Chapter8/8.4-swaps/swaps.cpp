#include<iostream>

void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
void output(int a, int b);

int main(void)
{
	using namespace std;

	int wallet1 = 300;
	int wallet2 = 350;

	output(wallet1, wallet2);

	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);
	output(wallet1, wallet2);

	cout << "Using pointers to swap contents again:\n";
	swapp(&wallet1, &wallet2);
	output(wallet1, wallet2);

	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);
	output(wallet1, wallet2);

	return 0;
}

void swapr(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return;
}

void swapp(int * p, int * q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	return;
}

void swapv(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	return;
}

void output(int a, int b)
{
	std::cout << "wallet1 = $" << a
		<< " wallet2 = $" << b << std::endl;
	return;
}
