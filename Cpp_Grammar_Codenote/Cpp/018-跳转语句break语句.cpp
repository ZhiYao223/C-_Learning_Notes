#include <iostream>
using namespace std;
int main18()
{
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.����" << endl;
	int select = 0;   //����ѡ�����ı���
	cin >> select;//�ȴ��û�����
	switch (select)
	{
	case 1: cout << "��ѡ�������ͨ�Ѷ�" << endl; break;
	case 2: cout << "��ѡ������е��Ѷ�" << endl; break;
	case 3: cout << "��ѡ����������Ѷ�" << endl; break;
	default: break;                                      //Ĭ������£������������벻��1,2,3ʱ

	}
	//break���˳�ѭ������continue���ᣬcontinue�ǵ�ǰ��ֹ��ִ����һ��ѭ����
	system("pause");
	return 0;
}