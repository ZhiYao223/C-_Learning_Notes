/*
	�ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������

	��˿��Խ��麯����Ϊ���麯��

	���麯���﷨��virtual ����ֵ���� �������������б� = 0;
	���������˴��麯���������Ҳ�г�����
	�������ص㣺�޷�ʵ�������� �����������д�������еĴ��麯��������Ҳ���ڳ�����
*/
#include <iostream>
using namespace std;

class Base 
{
public:
	virtual void func() = 0;  //���麯��������д "= 0"

};
class Son :public Base
{
public:
	virtual void func() //��д����Ĵ��麯��
	{
		cout << "func��������" << endl; 
	};

};

void test89_1()
{
	//Base b;   //�����ǳ����࣬�������޷�ʵ��������  ջ
	//new Base; //�������޷�ʵ��������               ����

	Son s; //���������д�����еĴ��麯���������޷�ʵ��������
	Base* base = new Son;  //
	base->func();
}
int main89()
{
	test89_1();
	system("pause");
	return 0;
}