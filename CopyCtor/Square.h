#pragma once
#include <iostream>
//任务1：添加拷贝构造函数、析构函数、添加输出信息
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
	Square(const Square& s) :Square{ s.side }	//委托构造
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
	static int numberOfObjects;//static member,类内加上static关键字，类外不用
};
