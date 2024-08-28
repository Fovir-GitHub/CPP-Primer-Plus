#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

#include<iostream>

class Complex0
{
private:
	double real_part;
	double imaginary_part;

public:
	Complex0();
	Complex0(double real, double imaginary);
	~Complex0();

	Complex0 operator~();
	friend std::ostream & operator<<(std::ostream & os,
		const Complex0 & complex);
	friend std::istream & operator>>(std::istream & is,
		Complex0 & complex);

	friend Complex0 operator+(const Complex0 & first,
		const Complex0 & second);
	friend Complex0 operator-(const Complex0 & first,
		const Complex0 & second);
	friend Complex0 operator*(const Complex0 & first,
		const Complex0 & second);
	friend Complex0 operator*(const int x, const Complex0 & complex);
};

#endif // !_COMPLEX0_H_