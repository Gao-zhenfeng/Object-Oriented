#pragma once
#include "Shape.h"
//´ÓShape¼Ì³Ð
class Circle : public Shape
{
public:
	Circle();
	Circle(double radius_, Color color_, bool filled_);
	double getArea() override;
	double getRadius()const;
	void setRadius(double radius);

	string toString();
private:
	double radius;
};
