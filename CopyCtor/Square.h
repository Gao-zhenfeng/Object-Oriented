#pragma once
#include <iostream>
//����1����ӿ������캯����������������������Ϣ
class Square
{
public:
	double getSide() { return side; }
	void setSide(double side) { this->side = side; }
	double getArea() { return side * side; }
	static int getNumberOfObjects() { return numberOfObjects; }
	int getNumberOfObjectsNoneStatic() { return numberOfObjects; }
	Square() :Square{ 1.0 } {}
	Square(double side)
	{
		this->side = side;
		numberOfObjects++;
	}
	Square(const Square& s) :Square{ s.side }	//ί�й���
	{
		/*this->side = s.side;
		numberOfObjects++;*/
		std::cout << "Square (const Square&) is invoked" << std::endl;
	}
	~Square()
	{
		numberOfObjects--;
	}
private:
	double side;
	static int numberOfObjects;//static member,���ڼ���static�ؼ��֣����ⲻ��
};
