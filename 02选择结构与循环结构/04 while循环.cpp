//whileѭ��������Ϊ��ִ�У����������������
//while(0)����ִ�У�while(1)����ѭ��ִ��
/*�﷨��
* while (ѭ������)
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

//������
#include<time.h>
int main041()
{
	srand(time(NULL));
	int a = rand() % 100 + 1; //����һ��0~100�������
	cout << "������һ������" << endl;
	int b = 1;
	while (1)
	{
		int cai;
		cin >> cai;
		if (cai > a)
		{
			cout << "�²����" << endl;
		}
		else if (cai < a)
		{
			cout << "�²��С" << endl;
		}
		else if (cai == a)
		{
			cout << "�¶���" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}