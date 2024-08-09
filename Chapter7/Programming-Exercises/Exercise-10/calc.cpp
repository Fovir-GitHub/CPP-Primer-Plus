#include<iostream>

const int FUNCTION_NUMBER = 4;

void calculate(double x, double y,
	double (*func[FUNCTION_NUMBER])(double, double));
double add(double x, double y);
double sub(double x, double y);
double mult(double x, double y);
double divide(double x, double y);

int main(void)
{
	double x, y;
	double (*functions[FUNCTION_NUMBER])(double, double)
		= { add,sub,mult,divide };

	while (std::cin >> x >> y)
		calculate(x, y, functions);

	return 0;
}

void calculate(double x, double y, double(*func[FUNCTION_NUMBER])(double, double))
{
	for (int i = 0;i < FUNCTION_NUMBER;i++)
		std::cout << x << ' '
		<< (i == 0 ? '+' : (i == 1 ? '-' : (i == 2) ? '*' : '/')) << ' '
		<< y << " = " << (*func[i])(x, y) << '\n';
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double mult(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	return x / y;
}
