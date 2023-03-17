//用于表示一串字符
//语法1：char 变量名[] = "字符串值"
//语法2：string 变量名 = "字符串值"
#include <iostream>
using namespace std;

int main10()
{
	char homo[] = "林峰";
	string Linf = "homo";
	cout << Linf << endl;
	cout << homo << "是" << Linf << endl;
	system("pause");
	return 0;
}