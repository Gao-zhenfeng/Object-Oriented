// bad_cast.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Student
{
public:
	Student() = default;
	virtual void foo() {};
};

class Undergraduate : public Student
{
};

class Graduate : public Student
{
};

int main()
{
	Undergraduate u;
	Graduate g;
	Student* s1 = &u;
	Student* s2 = &g;
	Graduate* p = dynamic_cast<Graduate*> (s2);//s2指向的是 Graduate类型的对象，该对象必须是type(Graduate*)类型的
	long x = reinterpret_cast<long> (p);	//对象，或是其公有派生类的对象
	cout << x << endl;
	Graduate* p2 = dynamic_cast<Graduate*> (s1);	//s1指向的是Undergraduate类型的对象，其目标转换对象必须是Undergraduate
	if (p2 == nullptr)								//类型的对象，或者是其派生对象，而此处是Graduate类型，转换失败
		cout << "cast s1 to Graduate* failed " << endl;
	else
	{
		cout << "cast s1 to Graduate* succeed " << endl;
	}
	try {
		Graduate& r1 = dynamic_cast<Graduate&> (u);
	}
	catch (std::bad_cast& e)
	{
		cout << "Exception: " << e.what() << endl;
	}
	return 0;
}