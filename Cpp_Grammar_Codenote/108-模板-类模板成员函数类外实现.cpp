/*
	ѧϰĿ�꣺�ܹ�������ģ���еĳ�Ա��������ʵ��
	���������ֻ�������������������ڶ����.cpp�ļ���д
	ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�	
*/

#include<string>
#include<iostream>

using namespace std;

//��ģ���г�Ա��������ʵ��
template<class T1, class T2>
class Person
{
public:
	T1 m_Name;
	T2 m_Age;

	//���캯������Ա������������
	Person(T1 name, T2 age);
	void showPerson();

};

//���캯��������ʵ��
//Ϊ�˸��߱���������һ����ģ��ĺ�������ʵ�֣������������template ��Person<T1,T2>������
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age; 
}


//��Ա����������ʵ��
//����showPerson����ģ���еĳ�Ա������Ϊ���ñ�����֪����ҲҪ��template...., �Լ�Person<T1,T2>
template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "����:" << this->m_Name << "����:" << this->m_Age << endl; 
}

void test108()
{
	Person<string, int> P("Tom", 20);
	P.showPerson();
}
int main108()
{
	test108();
	system("pause");
	return 0;
}