// TestObjectCopy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Square			//类名要用大小写字母混合命名，且开头用大写字母
{
public:
	Square(double side);
	Square() = default;//C++11强制生成的默认构造函数
	~Square();
	double getArea()
	{
		return side * side;
	}

private:
	double side = 1.0;
};

Square::Square(double side)
{
	this->side = side;		//this 只能在成员函数内部使用，用在其他地方没有意义，也是非法的。
}

Square::~Square()
{
}

int main()
{
	Square s1{ 1.3 }, s2{ 4.0 };
	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;

	s1 = s2;

	cout << s1.getArea() << endl;
	cout << s2.getArea() << endl;
}