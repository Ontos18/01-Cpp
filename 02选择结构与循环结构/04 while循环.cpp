//while循环：条件为真执行，条件不成立则结束
/*语法：
* while (循环条件)
* {
*	int num = 0;
*	count << num << endl;
*	num++;
* }
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	while (num < 114)
	{
		cout << num << endl;
		num = num + 2;
	}
	system("pause");
	return 0;
}