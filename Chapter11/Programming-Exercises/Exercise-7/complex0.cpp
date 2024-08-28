#include"complex0.h"

Complex0::Complex0()
{
	real_part = imaginary_part = 0;
}

Complex0::Complex0(double real, double imaginary)
{
	real_part = real;
	imaginary_part = imaginary;
}

Complex0::~Complex0()
{
}

Complex0 Complex0::operator~()
{
	return Complex0(real_part, -imaginary_part);
}

std::ostream & operator<<(std::ostream & os, const Complex0 & complex)
{
	os << '(' << complex.real_part << ", " << complex.imaginary_part
		<< "i)";

	return os;
}

std::istream & operator>>(std::istream & is, Complex0 & complex)
{
	std::cout << "real: ";
	if (is >> complex.real_part)
	{
		std::cout << "imaginary: ";
		is >> complex.imaginary_part;
	}

	return is;
}

Complex0 operator+(const Complex0 & first, const Complex0 & second)
{
	return Complex0(first.real_part + second.real_part,
		first.imaginary_part + second.imaginary_part);
}

Complex0 operator-(const Complex0 & first, const Complex0 & second)
{
	return Complex0(first.real_part - second.real_part,
		first.imaginary_part - second.imaginary_part);
}

Complex0 operator*(const Complex0 & first, const Complex0 & second)
{
	return Complex0(
		(first.real_part * second.real_part) -
		(first.imaginary_part * second.imaginary_part),
		(first.real_part * second.imaginary_part) +
		(first.imaginary_part * second.real_part)
	);
}

Complex0 operator*(const int x, const Complex0 & complex)
{
	return Complex0(x * complex.real_part,
		x * complex.imaginary_part);
}
