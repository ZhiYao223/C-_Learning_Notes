/*
* ��Ҫ���������㣺
	1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ, ֻ��ʹ����ʾָ�����ͷ�ʽ
	2����ģ����ģ������б��п�����Ĭ�ϲ���
*/
#include <iostream>
#include <string>
using namespace std;

//��ģ���뺯��ģ������
template<class NameType, class AgeType = int>//Ĭ�ϲ���int
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age; 
	}
	void showPerson()
	{
		cout << "name = "<< this->m_Name <<"age = "<< this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
void test104_1()
{
	//Person p("�����", 1000); //�����޷����Զ������Ƶ�
	Person<string, int> p("�����", 1000); //��ȷ��ֻ������ʾָ������
	p.showPerson();
}

//2����ģ����ģ������б��п�����Ĭ�ϲ���
void test104_2()
{
	Person<string, int> p1("��˽�", 999);
	p1.showPerson();
	//�����11�д�������ģ���Ϊ, �ڶ�������Ĭ��Ϊint�������ʱ<>�п��Բ�д�ڶ�������
	//template<class NameType, class AgeType = int>d
	//���������Ҳ�������ڶ�������Ĭ��Ϊint��ʡ��
	Person<string> p2("��˽�", 999);
	p2.showPerson();
}



int main104()
{
	test104_1();
	test104_2();
	system("pause");
	return 0;
}