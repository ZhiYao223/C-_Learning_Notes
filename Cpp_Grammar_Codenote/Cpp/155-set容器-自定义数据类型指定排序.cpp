/*
	ѧϰĿ�꣺set����Ĭ���������Ϊ��С����������θı��������

	�����Զ����������ͣ�  set����ָ���������ſ��Բ�������
*/
//ʾ��2 set����Զ�����������

#include<iostream>
#include<set>
using namespace std;

#if 0
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age; 
	}
public:
	string m_Name;
	int m_Age;
};

class ComparePerson
{
public:
	bool operator() (const Person &p1,const Person &p2) const
	{
		//������������
		return p1.m_Age > p2.m_Age;   
	}
};
void test155()
{
	//�Զ����������ͣ� ����ָ���������
	set<Person, ComparePerson> s;
	
	//�������ݷ�ʽһ
	//Person p1("����", 45);
	//Person p2("�ŷ�", 43);
	//Person p3("����", 40);
	//Person p4("����", 35);
	//s.insert(p1);
	//s.insert(p2);
	//s.insert(p3);
	//s.insert(p4);
	
	//�������ݷ�ʽ��
	s.insert({ "����", 45 });
	s.insert({ "�ŷ�", 43 });
	s.insert({ "����", 40 });
	s.insert({ "����", 35 });

	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "����: " << it->m_Name << "����: " << it->m_Age << endl; 
	}
}

int main155()
{
	test155();
	system("pause");
	return 0;
}
#endif




