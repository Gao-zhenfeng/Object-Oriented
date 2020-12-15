#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle() = default;
	Rectangle(double w, double h, Color color_, bool filled_);

	double getWidth()const;
	void setWidth(double w);
	double getHeight()const;//const关键字表明调用该函数时，对象的私有数据成员不会被修改
	void setHeight(double h);

	double getArea()const;
	string toString();

private:
	double width{ 1.0 };
	double height{ 1.0 };
};
