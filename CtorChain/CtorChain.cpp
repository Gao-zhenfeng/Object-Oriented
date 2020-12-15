#include <iostream>
using std::cout;
using std::endl;

//����1��������ṹ��Computer ->PC ->Desktop/Laptop�Լ���Ӧ��ctor/dtor
// main�д���Desktop/Laptop���󣬹۲�ctor/dtor���ô���

//����2��������Camera��ΪLaptop����Ƕ����c������
// main�д���Laptop���󣬹۲����ڶ���c�Ĺ�������๹�����

class Computer
{
public:
	Computer() { cout << "Computer()" << endl; }
	~Computer() { cout << "~Computer()" << endl; }

private:
};

class PC : public Computer
{
public:
	PC() { cout << "PC()" << endl; }
	~PC() { cout << "~PC()" << endl; }
private:
};

class Desktop : public PC
{
public:
	Desktop() { cout << "Desktop()" << endl; }
	~Desktop() { cout << "~Desktop()" << endl; }

private:
};

class Camera
{
public:
	Camera() { cout << "Embedded Camera()" << endl; }
	~Camera() { cout << "Embedded~Camera()" << endl; }

private:
};

class Laptop : public PC
{
public:
	Laptop() { cout << "Laptop()" << endl; }
	~Laptop() { cout << "~Laptop()" << endl; }

private:
	Camera c{};
};

int main()
{
	Desktop d{};
	Laptop l{};
	return 0;
}