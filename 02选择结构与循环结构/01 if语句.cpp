//语法：if ( 判断条件 );  （？判断条件只能在右边）
//如果成立，则执行if内的语句
//注意！！！ if 语句后面不要加分号！！！
#include <iostream>
using namespace std;

int main00()
{
	int fenshu = 0;
	cout << "请输入林峰的高考分数：" << endl;
	cin >> fenshu;
	cout << "林峰的分数为：" << fenshu << endl;
	
	if (fenshu >= 600)
	{
		if (fenshu >=700)
		{
			cout << "恭喜林峰进驻五道口" << endl;
		}
		else if (fenshu > 650)
		{
			cout << "恭喜林峰考上双鸭山大学" << endl;
		}
		else
		{
			cout << "恭喜林峰考入番薯理工大学" << endl;
		}
	}
	else if (fenshu > 500 )
	{
		cout << "恭喜林峰考上惠州巨砖学院" << endl;
	}
	else
	{
		cout << "恭喜林峰复读" << endl;
	}
	system("pause");
	return 0;
}

int main01()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入A的分数：" << endl;
	cin >> a;
	cout << "请输入B的分数：" << endl;
	cin >> b;
	cout << "请输入C的分数：" << endl;
	cin >> c;
	cout << "A的分数为" << a << endl; 
	cout << "B的分数为" << b << endl; 
	cout << "C的分数为" << c << endl;
	if (a > b)
	{
		if (a > c)
		{
			cout << "A的分数最高" << endl;
		}
		else if (c > b)
		{
			cout << "C的分数最高" << endl;
		}
	}
	else if (c > b)
	{
		cout << "C的分数最高" << endl;
	}
	else
	{
		cout << "B的分数最高" << endl;
	}


	system("pause");
	return 0;
}