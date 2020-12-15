#pragma once

class Square
{
public:
	Square();
	Square(double side) :side{ side } {}	//括号内的参数时形参
	~Square();
	double getArea();

private:
	double side;
};
