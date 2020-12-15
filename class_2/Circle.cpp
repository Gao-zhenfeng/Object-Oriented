#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle()
{
	m_radius = 1.0;
}
Circle::Circle(double r)
{
	m_radius = r;
}

Circle::~Circle()
{
}
double Circle::getArea()
{
	return (m_radius * m_radius * 3.14);
}