#include <iostream>
using namespace std;

//��ʼ���б�
class People
{
public:


	//��ͳ��ʼ������
	//People(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c; 
	

	//��ʼ���б��ʼ������
	//ʹ�ó�ʼ���б�ĺô������Ա�д������ã�ͬ��ֻ��ʹ�ó�ʼ�����ܸ�ֵ
	//���Ա�д��ڳ�������const int a; ��Ϊ����ֻ�ܳ�ʼ�����ܸ�ֵ
	People(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}
	int m_A;
	int m_B;
	int m_C;
};

void test4()
{
	//People p(10, 20, 30);
	People p(30,20,10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}
int main66()
{
	test4(); 
	system("pause");
	return 0;
}
//��ͳ��ֵ��ʼ���൱��(�������࣬������ֵ����)\
//��ʼ���б��൱��ֱ������һ���г�ʼֵ�����ͣ�ʡ���˸�ֵ�������ڴ�����Ŀ�У�\
//class���г�Ա�������������£���ʼ���б�Ч�ʸ���