#include <iostream>
#include <string>
using namespace std;
//c++���еĳ�Ա��������һ����Ķ��� ���ǳƸó�ԱΪ�����Ա


//����Ϊ�����Ա
//�ֻ���
class Phone
{
public:
	Phone(string pName)  //���캯��
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName; 
	}
	~Phone()  //��������
	{
		cout << "Phone��������������" << endl;
	}
	//�ֻ�Ʒ������
	string m_PName;
};
//����
class People
{
public:
	//Phone m_Phone = pName; ��ʽת����
	People(string name, string pName):m_Name(name),m_Phone(pName)  //���캯��ʱ��ʼ��
	{
		cout << "People�Ĺ��캯������" << endl;
	}
	~People()  //��������
	{
		cout << "People��������������" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;
};
//�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�����������˳�����෴�����죺�������������ƴ�����壻�������Ȳ����壬���ܲ�����
void test5()
{
	People p("����", "ƻ��max");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}
int main67()
{
	test5();
	system("pause");
	return 0;
}