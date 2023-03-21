/*do
* {
*	cout;
* }
* while (条件判断);
*/
#include<iostream>
using namespace std;

int main05()
{
	int i = 0;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= 100);
	system("pause");
	return 0;
}

//水仙花数：一个每位数字的3次幂之和等于该数的数字
int main051()
{
	int i = 100;
	do
	{
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			cout << i << endl;
		}
		i++;
	} while (i < 1000);
	system("pause");
	return 0;    
}