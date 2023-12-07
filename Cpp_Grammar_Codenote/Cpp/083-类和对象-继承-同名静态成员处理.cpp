//�ܽ᣺ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʷ�ʽ��ͨ�������ͨ��������
#include <iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����ʽ
class Base
{
public:
	static int m_A;  //��̬��Ա���ԣ� ����׶η����ڴ桢���ж�����ͬһ�����ݡ��������������ʼ��
    static void func() //�����еľ�̬ͬ����Ա����
	{
		cout << "Base-static void func()" << endl;
	}
	static void func(int a)  //�����ľ�̬��Ա����
	{
		cout << "Base-static void func(int a)" << endl; 
	}
};
int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;  //�����µ�ͬ����̬��Ա��ѧ

	static void func()   //�����еľ�̬ͬ����Ա����
	{
		cout << "Son-static void func()" << endl;
	}
};
int Son::m_A = 200;

//ͬ����̬��Ա����
void test83_1()
{
	//1��ͨ���������
	Son s;
	cout << "ͨ��������ʣ�" << endl; 
	cout << "Son�µ�m_A = " << s.m_A << endl;  //���ʵ��������еľ�̬��Ա����200
	cout << "Base�µ�m_A = " << s.Base::m_A << endl; //���������򣬷��ʸ����еľ�̬ͬ����Ա����

	//2��ͨ����������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son �µ�m_A = " << Son::m_A << endl;
	//��һ����������ͨ��������ʽ����    �ڶ�������������ʸ�����������
	cout << "Base�µ�m_A = " <<Son::Base::m_A << endl;

}
//ͬ����̬����
void test83_2()
{
	//1��ͨ���������
	cout << "ͨ���������" << endl;
	Son w;
	w.func(); //���ʸ����е�func()����
	w.Base::func();
	w.Son::Base::func();

	//2��ͨ����������
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base::func();
	//Son::func(100);  //�������������ͬ����Ա�����������е�����ͬ����Ա�����ᱻ���أ��޷����ʣ���Ҫ����Base��������������ʾ��
	Son::Base::func(100);
}

int main83()
{
	test83_1();
	test83_2();
	system("pause");
	return 0;
}