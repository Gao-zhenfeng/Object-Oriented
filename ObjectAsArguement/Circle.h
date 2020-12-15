#pragma once
#include <iostream>

class Circle
{
public:
	Circle();
	Circle(double r);
	~Circle();
	double getArea()const;
	double getRadius()const;
	Circle& setRadius(double radius);

private:
	double m_radius;
};
