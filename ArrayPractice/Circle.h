#pragma once
#include <iostream>

class Circle
{
public:
	Circle() = default;
	Circle(double r);
	~Circle();
	double getArea();

private:
	double m_radius{ 1.0 };//�͵س�ʼ����Ĭ��ֵʱ0
};
