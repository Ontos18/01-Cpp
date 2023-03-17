//将对应的ASCⅡ码放到储存单元，占用一个字节
//语法：char 变量名 = ‘字符’
#include <iostream>
using namespace std;

int main08()
{
	char homo = 'Linf';//单引号内只能有一个字符（4个字符）
	cout << homo <<"是一个homo"<< endl;
	char Linf = 'a';
	cout << (int)Linf << endl;//字符串变量对应ASCⅡ码；例如：a→97，A→65
	system("pause");
	return 0;
}