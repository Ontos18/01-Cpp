/*do
* {
*	cout;
* }
* while (�����ж�);
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

//ˮ�ɻ�����һ��ÿλ���ֵ�3����֮�͵��ڸ���������
int main051()
{
	int i = 100;
	do
	{
		int a = 0;//��λ
		int b = 0;//ʮλ
		int c = 0;//��λ
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