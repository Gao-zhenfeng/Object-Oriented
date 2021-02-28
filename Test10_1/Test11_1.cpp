// Test10_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi;
	int ti;
	while (cin >> ti) {
		vi.push_back(ti);
	}
	sort(vi.begin(), vi.end());
	for (unsigned int i = 0; i < vi.size(); i++)
	{
		cout << vi[i] << endl;
	}
	return 0;
}