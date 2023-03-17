// ! 非符号；!a 如果a为真。则!a为假 （类似于取反的操作）
// && 与符号； a && b 如果a、b为真，则结果为真，否则为假
// || 或符号； a || b 如果a、b为假，则结果为假，否则为真
#include <iostream>
using namespace std;

int main16()
{
	bool a = true;
	bool b = false;
	bool c = a && b;
	bool d = a || b;
	cout << c << endl;
	cout << d << endl;
	system("pause");
	return 0;
}