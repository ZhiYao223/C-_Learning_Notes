/*
C++����һ����̳ж����
�﷨�� class ���ࣺ�̳з�ʽ ����1�� �̳з�ʽ ����2...
��̳п��ܻ�������������ͬ����Ա�������֣���Ҫ������������
*/

#include <iostream>
using namespace std;

//��̳��﷨
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};

class Base2
{
public:
	Base2()
	{
		m_A = 200;//m_B = 200;
	}
	int m_A;//int m_B;
};

//����  ��Ҫ�̳�Base1��Base2
//�﷨ class ���� ���̳з�ʽ ����1�� �̳з�ʽ ����2......
class Son :public Base1, public Base2   //һ�������϶����
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;

};
void test84_1()
{
	Son s;
	cout << "sizeof Son = " << sizeof(s) << endl;
	//cout << "m_A = " << s.m_A << endl; //������Base1 ��Base2�ж�����ͬ�ĳ�Ա����m_A����s.m_A���ֶ����Դ���
	//�������г���ͬ����Ա����Ҫ������������
	cout << "Base1::m_A = " << s.Base1::m_A << endl;
	cout << "Base2::m_A = " << s.Base2::m_A << endl;



}
int main84()
{
	test84_1();
	system("pause");
	return 0;
}