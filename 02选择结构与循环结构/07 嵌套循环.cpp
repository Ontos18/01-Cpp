//嵌套循环
#include <iostream>
using namespace std;
int main07()
{
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

//乘法口诀表
int main111()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << "i*j=" << i * j;
		}
	}
	system("pause");
	return 0;
}