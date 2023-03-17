//转义字符：用于表达不能显示出来的ASCⅡ字符

#include <iostream>
using namespace std;

int main09()
{
	// \n换行符
	cout << "hello homo" << endl;
	cout << "hello homo\n";

	// 反斜杠（要输入两个）
	cout << "\\\n";

	// 水平制表符
	cout << "FCB\t2:0\tPSG\n";
	cout << "ARM\t5:5\tX86\n";
	cout << "CHA\t8:2\tJAP\n";

	system("pause");
	return 0;
}