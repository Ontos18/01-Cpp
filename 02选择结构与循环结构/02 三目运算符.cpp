//三目运算符：将a、b进行判断，成立则返回变量1，不成立则返回变量2
//变量0 = (条件判断 ? 变量1 : 变量2);
// 三目运算符：将a、b进行判断，成立则变量1=100，不成立则变量2=100
//(条件判断 ? 变量1 : 变量2) = 100；
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