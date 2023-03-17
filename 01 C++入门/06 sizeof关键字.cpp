//sizeof关键字可以统计数据类型所占空间大小
//语法：sizeof(数据类型/变量)
#include <iostream>
using namespace std;

int main06()
{
	int homo = 114514;
	long long superhomo = 1145141919810;
	cout << "sizeof占用空间为：" << sizeof(homo) << endl;
	cout << "sizeof占用空间为：" << sizeof(superhomo) << endl;
	system("pause");
	return 0;
}