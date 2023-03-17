// #define 宏常量：#define 常量名 变量名
//const修饰的变量：const 数据类型 常量名 = 常量值;
#include <iostream>
using namespace std;

#define Week 7
const int Month = 30;

int main03()
{
	cout << "一周有 " << Week << " 天" << endl;
	cout << "一月有 " << Month << " 天" << endl;
	system("pause");
	return 0;
}
