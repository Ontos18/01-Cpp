//while循环：条件为真执行，条件不成立则结束
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
int main()
{
	int a = rand() % 100 + 1; //生成一个0~100的随机数
	cout << a << endl;
	int b;
	while (b == a)
	{
		

	}
	system("pause");
	return 0;
}