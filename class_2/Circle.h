#pragma once
#include <iostream>

class Circle
{
public:
	Circle();
	Circle(double r);
	~Circle();
	double getArea();

private:
	double m_radius;
};
