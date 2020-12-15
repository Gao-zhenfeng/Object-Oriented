// AnonymousObject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class Account
{
public:
	Account();
	~Account();
	Account(double balance);
	void deposit(double amount)		//存钱
	{
		m_balance += amount;
	}
	double withdraw(double amount)
	{
		auto temp{ 0.0 };
		if (m_balance < amount)
		{
			temp = m_balance;
			m_balance = 0;
			return temp;
		}
		else
		{
			m_balance -= amount;
			return amount;
		}
	}
private:
	double m_balance;//余额
};

Account::Account()
{
	m_balance = 0.0;
}

Account::Account(double balance)
{
	m_balance = balance;
}
Account::~Account()
{
}
int main()
{
	Account a1;
	a1.deposit(23);
	Account a2 = Account{ 100.0 };//通过匿名对象拷贝的方法赋值

	//Account a3 = {1.0};   这是通过拷贝列表初始化的方法赋值
	cout << a1.withdraw(10.0) << endl;
	cout << a2.withdraw(34.2) << endl;

	cout << Account(100.1).withdraw(122.0) << endl;

	return 0;
}