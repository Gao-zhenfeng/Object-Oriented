#include "MyComplex.h"
#include <stdlib.h>
#include <exception>
#include <stdexcept>

MyComplex::MyComplex()
{
	this->imaginaryPart = 0.0;
	this->realPart = 0.0;
}

MyComplex::MyComplex(double real, double imaginary) : imaginaryPart{ imaginary }, realPart{ real }
{
}

MyComplex::~MyComplex()
{
}

ostream& operator << (ostream& os, const MyComplex& z)
{
	os.unsetf(std::ios::showpos);
	os << "(" << z.realPart;
	os.setf(std::ios::showpos);
	os << z.imaginaryPart << "i)";
	return os;
}
istream& operator >> (istream& is, MyComplex& z)
{
	is >> z.realPart >> z.imaginaryPart;
	return is;
}

MyComplex MyComplex::operator + (const MyComplex& secondComplex)
{
	return MyComplex(this->realPart + secondComplex.realPart, this->imaginaryPart + secondComplex.imaginaryPart);
}

MyComplex MyComplex::operator - (const MyComplex& secondComplex)
{
	return MyComplex(this->realPart - secondComplex.realPart, this->imaginaryPart - secondComplex.imaginaryPart);
}

MyComplex MyComplex::operator * (const MyComplex& secondComplex)
{
	double r = realPart * secondComplex.realPart - imaginaryPart * secondComplex.imaginaryPart;
	double i = imaginaryPart * secondComplex.realPart + realPart * secondComplex.imaginaryPart;
	return MyComplex(r, i);
}

// 除法法则：(a+bi)÷(c+di)=[(ac+bd)/(c²+d²)]+[(bc-ad)/(c²+d²)]i.
MyComplex MyComplex::operator / (const MyComplex& secondComplex)
{
	if (secondComplex.imaginaryPart == 0 && secondComplex.realPart == 0)
	{
		throw std::runtime_error("Divisor is 0");
	}
	else
	{
		double r = (realPart * secondComplex.realPart + imaginaryPart * secondComplex.imaginaryPart)
			/ (secondComplex.realPart * secondComplex.realPart +
				secondComplex.imaginaryPart + secondComplex.imaginaryPart);
		double i = (imaginaryPart * secondComplex.realPart + realPart * secondComplex.imaginaryPart)
			/ (secondComplex.realPart * secondComplex.realPart +
				secondComplex.imaginaryPart + secondComplex.imaginaryPart);
		return MyComplex(r, i);
	}
}