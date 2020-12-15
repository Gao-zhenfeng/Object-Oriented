//类与对象练习
#include <iostream>
using namespace std;

class Student
{
private:
	string m_name{ "Alice" };//private成员不能通过对象访问，只能在类内访问
	int m_age{ 0 };
	float m_score{ 0.0 };

public:					//public members can be accessed within the class
	void setname(const string name);
	void setage(int age);
	void setscore(float score);
	void show();
	Student() :Student{ "Alice",20,100.0 } {}
	Student(string name, int age, float score) :m_name(name), m_age(age), m_score(score) {}
	~Student() {}
};

void Student::setname(const string name)	//因为前面有Student 限定，说明在该类内，可以访问private members
{
	m_name.assign(name);
}

void Student::setage(int age)
{
	m_age = age;
}

void Student::setscore(float score)
{
	m_score = score;
}

void Student::show()
{
	cout << m_name << "的年龄是" << m_age << ",成绩是" << m_score << endl;
}

int main()
{
	Student stu;
	stu.setname("Microsoft");
	stu.setage(39);
	stu.setscore(349.5f);
	stu.show();

	Student* pStu = new Student;
	pStu->setname("JOJO");
	pStu->setage(100);
	pStu->setscore(12.2f);
	pStu->show();

	delete pStu;

	return 0;
}