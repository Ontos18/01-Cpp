//�﷨��if ( �ж����� );  �����ж�����ֻ�����ұߣ�
//�����������ִ��if�ڵ����
//ע�⣡���� if �����治Ҫ�ӷֺţ�����
#include <iostream>
using namespace std;

int main00()
{
	int fenshu = 0;
	cout << "�������ַ�ĸ߿�������" << endl;
	cin >> fenshu;
	cout << "�ַ�ķ���Ϊ��" << fenshu << endl;
	
	if (fenshu >= 600)
	{
		if (fenshu >=700)
		{
			cout << "��ϲ�ַ��פ�����" << endl;
		}
		else if (fenshu > 650)
		{
			cout << "��ϲ�ַ忼��˫Ѽɽ��ѧ" << endl;
		}
		else
		{
			cout << "��ϲ�ַ忼�뷬������ѧ" << endl;
		}
	}
	else if (fenshu > 500 )
	{
		cout << "��ϲ�ַ忼�ϻ��ݾ�שѧԺ" << endl;
	}
	else
	{
		cout << "��ϲ�ַ帴��" << endl;
	}
	system("pause");
	return 0;
}

int main01()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "������A�ķ�����" << endl;
	cin >> a;
	cout << "������B�ķ�����" << endl;
	cin >> b;
	cout << "������C�ķ�����" << endl;
	cin >> c;
	cout << "A�ķ���Ϊ" << a << endl; 
	cout << "B�ķ���Ϊ" << b << endl; 
	cout << "C�ķ���Ϊ" << c << endl;
	if (a > b)
	{
		if (a > c)
		{
			cout << "A�ķ������" << endl;
		}
		else if (c > b)
		{
			cout << "C�ķ������" << endl;
		}
	}
	else if (c > b)
	{
		cout << "C�ķ������" << endl;
	}
	else
	{
		cout << "B�ķ������" << endl;
	}


	system("pause");
	return 0;
}