//����ѭ��������ִ��ѭ�����
//�﷨��for (��ʼ���ʽ;�������ʽ;ĩβ���ʽ){ѭ�����}
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

//�����ӣ���1��ʼ��������100��������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
int main061()
{

	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 or i % 10 == 7 or i / 10 == 7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}