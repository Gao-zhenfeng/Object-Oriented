#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
	m_radius = 0.0;
}
Circle::Circle(double r)
{
	m_radius = r;
}

Circle::~Circle()
{
}
double Circle::getArea() const
{
	return (m_radius * m_radius * 3.14);
}

double Circle::getRadius()const
{
	return m_radius;
}

Circle& Circle::setRadius(double radius)
{
	//m_radius = radius;
	this->m_radius = radius;
	//return (Circle{ radius });//return anonymous object
	return (*this);	//this指针,返回对象本身
}