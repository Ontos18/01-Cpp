// %��ȡ������eg. 15 % 2 = 1������Ϊ�������������ݼ�
// ++a; �ȱ���+1�������� �� a++; �����㣬�����+1����������+1��
// --b; �ȱ���-1�������� �� b--; �����㣬�����-1

#include <iostream>
using namespace std;

int main13()
{
	int a = 10;
	int b = a++ * 10;
	cout << a << " " << b << endl;
	system("pause");
	return 0;
}