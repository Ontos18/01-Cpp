//��Ŀ���������a��b�����жϣ������򷵻ر���1���������򷵻ر���2
//����0 = (�����ж� ? ����1 : ����2);
// ��Ŀ���������a��b�����жϣ����������1=100�������������2=100
//(�����ж� ? ����1 : ����2) = 100��
#include <iostream>
using namespace std;
int main02()
{
	int a = 114;
	int b = 514;
	int c = 0;
	c = (a > b ? a : b);
	cout << c << endl;

	(a > b ? a : b)=1919810;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}