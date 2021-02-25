// out_of_range.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
using std::endl;
using std::cout;
using std::vector;

int main()
{
	vector<char> v{ 'a', 'b','c', 'd', 'e' };
	try {
		for (int i = 0; i <= 5; i++)
		{
			cout << v[i];
			cout << v.at(i) << endl;
		}
	}
	catch (std::out_of_range& e) {
		cout << "Exception: " << e.what() << endl;
	}
	return 0;
}