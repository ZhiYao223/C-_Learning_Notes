/*
	//ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
	//ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
	
	//�ܽ᣺����ȫ�ֺ���������ʵ�֣��÷��򵥣����ұ���������ֱ��ʶ��


*/
#if 1

#include <iostream>
using namespace std;
#include <string>

//ȫ�ֺ��������Ԫ������ʵ�֣����������������·���������ģ�嶨�壬��ǰ�ñ�����֪��Person��Ĵ���
template<class T1, class T2>
class Person;
//����ʵ��  ����ģ���ʵ�� ��ǰ���ñ������ȿ���

template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "����ʵ��----������" << p.m_Name << "���䣺" << p.m_Age << endl;
}


template<class T1, class T2>
class Person
{
	 //ȫ�ֺ�������ʵ�֣� ��friendǰ�ǳ�Ա���������Ϻ���ȫ�ֺ���
	friend void printPerson1(Person<T1, T2>p)
	{
		cout << "������ " << p.m_Name << "���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ�������ʵ�� �ӿ�ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2>p);

public: 
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age; 
	}
private:
	T1 m_Name;
	T2 m_Age;
};

//1��ȫ�ֺ���������ʵ��
void test110()
{
	//Person<string, int>("Tom", 12);
	//printPerson1(p);
}

int main110()
{
	test110();
	system("pause");
	return 0;
}

#endif


