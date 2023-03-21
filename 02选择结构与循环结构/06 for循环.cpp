//满足循环条件，执行循环语句
//语法：for (起始表达式;条件表达式;末尾表达式){循环语句}
#include <iostream>
using namespace std;
int main06()
{
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	system("pause");
	return 0;
}

//敲桌子：从1开始数到数字100，如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
int main061()
{

	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 or i % 10 == 7 or i / 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}