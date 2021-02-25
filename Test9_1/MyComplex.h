#pragma once
#include <iostream>

using std::istream;
using std::ostream;

class MyComplex
{
public:
	MyComplex();
	MyComplex(double real, double imaginary);
	~MyComplex();
	friend ostream& operator << (ostream& os, const MyComplex& z);
	friend istream& operator >> (istream& is, MyComplex& z);
	MyComplex operator + (const MyComplex& secondComplex);
	MyComplex operator - (const MyComplex& secondComplex);
	MyComplex operator * (const MyComplex& secondComplex);
	MyComplex operator / (const MyComplex& secondComplex);

private:
	double realPart;
	double imaginaryPart;
};
