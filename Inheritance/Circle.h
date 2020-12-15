#pragma once
#include "Shape.h"
//´ÓShape¼Ì³Ð
class Circle : public Shape
{
public:
	Circle();
	Circle(double radius_, Color color_, bool filled_);
	double getArea();
	double getRadius()const;
	void setRadius(double radius);

private:
	double radius;
};
