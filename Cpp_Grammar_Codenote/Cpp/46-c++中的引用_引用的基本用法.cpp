//�﷨���������� &���� = ԭ��
//���ã������������
//int &b = a;  b = 20; cout << a <<endl;    a,b����20���޸ĵ���ͬһ���ڴ�

#include <iostream>
using namespace std;
int main46()
{
	//���ñ����ʼ���� int &b;  �����
	//����һ����ʼ���󣬾Ͳ����Ը�����

	int a = 10;
	int &b = a;    //���ñ����ʼ�� b=a=10
	cout << "a = " << a << endl;
	cout << "b = " << b << endl << endl;

	int  c = 20;   //����һ����ʼ���󣬾Ͳ��ɸ���
	//int &b = c;    //b�Ѿ���a�ı����������ٸĳ�c�ı���

	int d = 20;    //�����ڳ�ʼ���󣬲����Ըı� 
	b = d;         //���Ǹ�ֵ���������Ǹ�������   a=b=20=d

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	system("pause");
	return 0;
}