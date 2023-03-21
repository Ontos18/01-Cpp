//while循环：条件为真执行，条件不成立则结束
//while(0)结束执行；while(1)无限循环执行
/*语法：
* while (循环条件)
* {
*	int num = 0;
*	count << num << endl;
*	num++;
* }
*/
#include <iostream>
using namespace std;

int main04()
{
	int num = 0;
	while (num <= 114)
	{
		cout << num << endl;
		num = num + 1;
	}
	system("pause");
	return 0;
}

//猜数字
#include<time.h>
int main041()
{
	srand(time(NULL));
	int a = rand() % 100 + 1; //生成一个0~100的随机数
	cout << "请输入一个数：" << endl;
	int b = 1;
	while (1)
	{
		int cai;
		cin >> cai;
		if (cai > a)
		{
			cout << "猜测过大" << endl;
		}
		else if (cai < a)
		{
			cout << "猜测过小" << endl;
		}
		else if (cai == a)
		{
			cout << "猜对了" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}