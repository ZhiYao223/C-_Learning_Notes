#include <iostream>
#include <string>      //vs2019��ɲ�д��������������
using namespace std;
int main8()
{
#if 0
	//����
	int a = 0;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	//cout << "���ͱ���a = " << a << endl;

	//������
	float f = 3.14f;
	cout << "��������ͱ�����ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���f =" << f << endl;

	//�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ���ch��ֵ��" << endl;
	cin >> ch;
	cout << "�ַ��ͱ���ch =" << ch << endl;

	//�ַ�����
	string str = "hello world";
	cout << "����ַ���str��ֵ��" << endl;
	cin >> str;
	cout << "�ַ���str= " << str << endl;
#endif
	//��������
	bool flag = false;
	cout << "����������͵�flag��ֵ��" << endl;
	cin >> flag;
	cout << char(flag) << endl;     
	cout << "��������flag = " << flag << endl;

	system("pause");
	return 0;
}