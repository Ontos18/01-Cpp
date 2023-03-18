//整数部分也算有效数字
//float（7位有效数字）
//double（15~16位有效数字）

#include <iostream>
using namespace std;
int main07()
{
	float homo = 114.514f;
	double superhomo = 114.1919810;
	cout << homo << endl;
	cout << superhomo << endl; //C++中一般只表示6位有效数字
	system("pause");
	return 0;
}