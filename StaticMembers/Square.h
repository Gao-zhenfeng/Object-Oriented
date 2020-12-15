#pragma once

class Square
{
public:
	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	static int getNumberOfObjects() { return numberOfObjects; }
	int getNumberOfObjectsNoneStatic() { return numberOfObjects; }
	Square() :Square{ 1.0 } {}
	Square(double side)
	{
		this->side = side;
		numberOfObjects++;
	}
private:
	double side;
	static int numberOfObjects;//static member,���ڼ���static�ؼ��֣����ⲻ��
};
