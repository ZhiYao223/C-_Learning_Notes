////��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա

//��̬��Ա������
//���ж�����ͬһ������
//�ڱ���׶ξͷ����ڴ�
//���������������ʼ��

//People::member ��ʾ��People�еĳ�Աmember
#include <iostream>
using namespace std;

//��̬��Ա����
class People
{
public:

	static int m_A; //��������, ��̬���������ڹ��������ʼ��
	static int count;//������̬��Ա����
	
private://��̬��Ա����Ҳ���з���Ȩ�޵�
	static int m_B;

public:
	People() {
		count++; //ÿ�δ�������ʱ������count
	}
};

//�����ʼ����ȥ��static������::��ʾpeople���µı���
int People::m_A = 100; 
int People::m_B = 200;
int People::count = 0; 
void test6()
{
	People p;
	cout << p.m_A << endl;  //100

	cout << "Initial count : " << People::count << endl;//0

	People p2;
	p2.m_A = 200;
	cout << p.m_A << endl;//200

	People p3;
	cout << "Final count: " << People::count << endl;//3
}

void test06()
{
	//ͨ��������з���
	//People p;
	//cout << p.m_A << endl;
	
	//ͨ���������з���
	cout << People::m_A << endl;
	//cout << People::m_B << endl; //����������ʲ���˽�о�̬��Ա����
}
/*
ÿ�δ�������ʱ��count �������ӡ����� count �Ǿ�̬��Ա��
��������������е� MyClass ������������������������ʾ�������
����
*/
int main68()
{
	test6();
	//test06();
	system("pause");
	return 0;
}