// Typeid.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//--using dynamic_cast, type_id, type_info

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Grand
{
private:
	int hold;
public:
	Grand(int h = 0) :hold(h) {}
	virtual void Speak() const { cout << "I am a Grand class" << endl; }
	virtual int Value() const { return hold; }
};

class Superb : public Grand
{
public:
	Superb(int h = 0) : Grand{ h } {}
	void Speak() const override { cout << "I am a Superb class" << endl; }
	virtual void Say() const
	{
		cout << "I hold the superb value of " << Value() << endl;
	}
};

class Magnificent : public Superb
{
private:
	char ch;
public:
	Magnificent(int h = 0, char cv = 'A')
		: Superb{ h }, ch{ cv }{}
	void Speak() const override { cout << "I am a magnificent class" << endl; }
	void Say() const {
		cout << "I hold the character "
			<< ch << "and the integer " << Value() << "!" << endl;
	}
};

Grand* GetOne()
{
	Grand* p = nullptr;

	switch (rand() % 3)
	{
	case 0:
		p = new Grand(rand() % 100);
		break;
	case 1:
		p = new Superb(rand() % 100);
		break;
	case 2:
		p = new Magnificent(rand() % 100, 'A' + rand() % 26);
		break;
	}
	return p;
}

int main()
{
	srand(time(0));
	Grand* pg;
	Superb* ps;
	for (int i = 0; i < 9; i++)
	{
		pg = GetOne();
		cout << "Now processing type : " << typeid(*pg).name() << endl;
		pg->Speak();
		if (ps = dynamic_cast<Superb*>(pg))
			ps->Say();
		if (typeid(Magnificent) == typeid(*pg))
			cout << "Yes, you're really magnificent. " << endl;
	}
	delete pg;
	pg = nullptr;
	//delete ps;
	//ps = nullptr;
	return 0;
}