//swithch语句：只能放整数和字符型，不能放区间
//关键字：switch; case;  defult; break;
/*语法：
* switch (变量名)
* {
* case 变量: <指定的变量>
*	cout;
*	break;
* default 变量: <除此之外的变量>
*	cout;
*	break;
* }
*/
#include <iostream>
using namespace std;
int main03()
{
	cout << "请输入电影《番薯传奇》的评分：" << endl;
	int fenshu = 0;
	cin >> fenshu;
	cout << "《番薯传奇》的分数是：" << fenshu << endl;

	switch (fenshu)
	{
	case 10:
		cout << "《番薯传奇》是传世经典！" << endl; 
		break;
	case 9:
		cout << "《番薯传奇》是经典影片！" << endl;
		break;
	case 8:
		cout << "《番薯传奇》非常好！" << endl;
		break;
	case 7:
		cout << "《番薯传奇》还算不错！" << endl;
		break;
	case 6:
		cout << "《番薯传奇》比较一般！" << endl;
		break;
	default:
		cout << "《番薯传奇》是大烂片！" << endl;
		break;
	}

	system("pause");
	return 0;
}