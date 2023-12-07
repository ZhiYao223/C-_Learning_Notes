/*
	ģ���ͨ���Բ��������ܵ�
	��Щ�ض����������ͣ���Ҫ�þ��廯��ʽ�����⴦��
	����ģ���޷��Ƚ�Person�࣬�����Ҫ��template<>�پ��廯һ��Person�汾�ĺ�������ģ��
	����������ģ�棬�ض�������д���廯�������ض�����
	���þ��廯��ģ�棬���Խ���Զ������͵�ͨ�û�
	ѧϰģ�治��Ϊ��дģ�棬������STL�ܹ�����ϵͳ�ṩ��ģ��
	*/
#include<iostream>
using namespace std;
#include<string>
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	Person(const Person& p)
	{
	this->m_Name = p.m_Name;
	this->m_Age = p.m_Age;
	//this->m_Height = p.m_Height;
	cout << p.m_Name << ":����\n";
	}
	string m_Name;
	int m_Age;
};


//�Ա����������Ƿ����
//�޷��Ƚ�Person���ʵ��������p1,p2
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true; 
	}
	else
	{
		return false;
	}
} 

//���þ��廯��Person�汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return true; 
	}
	else
	{
		return false; 
	}
}

//������ͨ�����Ƚ���������
void test102_1()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{ 
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a == b" << endl;

	}
}

//�������������ṩ�ĸ�ֵ��������������a��b��һ�����飬���޷�ʵ����
//���ú���ģ��ʵ�ֱȽ���������
void test102_2()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);

	bool ret = myCompare(p1, p2);  //���õ��Ǿ��廯�����غ���ģ��
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl; 
	}
}

int main102()
{
	test102_1();
	test102_2();
	system("pause");
	return 0;
}
 