#include <graphics.h>

int main()
{
	initgraph(640, 480);

	//用来接收输入
	char str[101];
	//调用对话框函数
	inputbox_getline("Input Box", "Input a string", str, 100);

	//显示输入的内容
	outtextxy(50, 50, str);
	getch();

	closegraph();
	return 0;
}