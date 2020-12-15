#include "Circle.h"

Circle::Circle()
{
	radius = 0;
}
Circle::~Circle()
{
}

double Circle::getArea()
{
	return (3.14 * radius * radius);
}

Circle::Circle(double r)
{
	radius = r;
}