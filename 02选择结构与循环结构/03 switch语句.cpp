//swithch��䣺ֻ�ܷ��������ַ��ͣ����ܷ�����
//�ؼ��֣�switch; case;  defult; break;
/*�﷨��
* switch (������)
* {
* case ����: <ָ���ı���>
*	cout;
*	break;
* default ����: <����֮��ı���>
*	cout;
*	break;
* }
*/
#include <iostream>
using namespace std;
int main03()
{
	cout << "�������Ӱ�������桷�����֣�" << endl;
	int fenshu = 0;
	cin >> fenshu;
	cout << "�������桷�ķ����ǣ�" << fenshu << endl;

	switch (fenshu)
	{
	case 10:
		cout << "�������桷�Ǵ������䣡" << endl; 
		break;
	case 9:
		cout << "�������桷�Ǿ���ӰƬ��" << endl;
		break;
	case 8:
		cout << "�������桷�ǳ��ã�" << endl;
		break;
	case 7:
		cout << "�������桷���㲻��" << endl;
		break;
	case 6:
		cout << "�������桷�Ƚ�һ�㣡" << endl;
		break;
	default:
		cout << "�������桷�Ǵ���Ƭ��" << endl;
		break;
	}

	system("pause");
	return 0;
}