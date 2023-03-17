// %：取余数（eg. 15 % 2 = 1；必须为整数、）递增递减
// ++a; 先变量+1，后运算 ； a++; 先运算，后变量+1（？运算完+1）
// --b; 先变量-1，后运算 ； b--; 先运算，后变量-1

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