/*
	ѧϰĿ�꣺
	��ģ��ʵ�������Ķ����������εķ�ʽ

	һ�������ִ��뷽ʽ:
	1��ָ����������� ---ֱ����ʾ�������������
	2������ģ�廯 ---�������еĲ�����Ϊģ����д���
	3��������ģ�廯 ---�������������ģ�廯���д���
	
	�ܽ᣺
	ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���
	ʹ�ñȽϹ���ǵ�һ�֣�ָ�����������
	*/

#include <iostream>
#include <string>
using namespace std; 
//��ģ��
template<class NameType, class AgeType = int>
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
		cout << "name:" << this->m_Name << "age: " << this->m_Age << endl;
	}
public:
	NameType m_Name;
	AgeType m_Age;
};


//1.ָ�����������
void printPerson1(Person<string, int> &P)
{
	P.showPerson();
}
void test105_1()
{
	Person<string, int> p("�����", 100);
	printPerson1(p);
}

//2.����ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1,T2> &p)
{
	p.showPerson();
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}

void test105_2()
{
	Person <string, int > p("��˽�", 90);
	printPerson2(p);
}

//3��������ģ�廯
template<class T>
void printPerson3(T &p)
{
	cout << "T������Ϊ��" << typeid(T).name() << endl;
	p.showPerson(); 
}
void test105_3()
{
	Person<string, int> p("��ɮ", 25);
	printPerson3(p);
}
int main106()
{
	test105_1();
	test105_2();
	test105_3(); 
	system("pause");
	return 0;
}