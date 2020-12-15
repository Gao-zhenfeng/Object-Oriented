// Test6_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal" << endl;
		numOfObjects++;
	}
	~Animal() { numOfObjects--; }
	virtual void speak() = 0;
	static int	getNumOfObjects() { return numOfObjects; }
private:

	static int numOfObjects;
};

class Dog : public Animal
{
private:

public:
	Dog() : Animal{} { cout << "Dog" << endl; }
	void speak() override { cout << "wang" << endl; }
	~Dog() {}
};

class Cat : public Animal
{
public:
	Cat() : Animal{} { cout << "Cat" << endl; }
	void speak() override { cout << "miao" << endl; }
private:
};

int Animal::numOfObjects = 0;

int main()
{
	int N = 0;
	cin >> N;

	vector<Animal*> v;

	for (int i = 0; i < N; i++)
	{
		Dog* g = new Dog{};
		v.push_back(g);
		Cat* a = new Cat{};
		v.push_back(a);
		//cout << Animal::getNumOfObjects() << endl;
	}

	for (auto i : v)
	{
		i->speak();
		delete i;
	}

	return 0;
}