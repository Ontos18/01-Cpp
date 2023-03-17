//语法：数据类型  变量名 = 变量初始值；
#include <iostream>
using namespace std;

int main05()
{
	//1、短整型(-32768~32767)
	short a1 = 32767;
	//2、整型
	int a2 = 2147483647;
	//3、长整型
	long a3 = 114;
	//4、长长整型	
	long long a4 = 514;
	cout << a1 << " " << a2 << " " << a3 << " " << a4 << endl;
	system("pause");
	return 0;
}