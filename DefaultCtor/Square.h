#pragma once

class Square
{
public:
	Square();
	Square(double side) :side{ side } {}	//�����ڵĲ���ʱ�β�
	~Square();
	double getArea();

private:
	double side;
};
