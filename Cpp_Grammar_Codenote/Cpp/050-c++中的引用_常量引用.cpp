#include <iostream>

using namespace std;

//����ʹ�õĳ�����ͨ�����������β�
void Showvalue(const int& b)
{
	//b += 10;    //error: �����βμ���const, b�Ͳ��ܱ��޸ģ����򱨴�. �������Ա���main�е�ʵ��
	cout << b << endl; 
}
int main50()
{
	//int& ref = 10; ���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬���д���
	//����const�Ϳ����ˣ����������Ż����룺 int temp = 10; const in& ref = temp;
	const int& ref = 10;

	//ref = 100;//����const�󲻿����޸ı���
	cout << ref << endl; 

	//���������ó������÷�ֹ������޸�ʵ��
	int a = 10;
	Showvalue(a);
	//����
	system("pause");
	return 0;
}