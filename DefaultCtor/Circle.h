#pragma once
class Circle
{
public:
	Circle();
	Circle(double r);
	~Circle();
	double getArea();

private:
	double radius;
};
