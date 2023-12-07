#pragma optimize ("",off))
#include<iostream>
#include<map>
#include<string>
using namespace std;

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	Person(const Person& p)
	{
		this->m_Name = p.m_Name;
		this->m_Age = p.m_Age;
		this->m_Height = p.m_Height;
		cout << p.m_Name << ":����\n";
	}
	//Person(const Person&& p)
	//{
	//	this->m_Name = p.m_Name;
	//	this->m_Age = p.m_Age;
	//	this->m_Height = p.m_Height;
	//	cout << p.m_Name << ":�ƶ�\n";
	//}

	string m_Name;
	int m_Age;
	int m_Height;
};

//�Զ���Ƚ����������
class Mycompare161
{
public:
	bool operator() (const Person& p1, const Person& p2) const 
	{
		return p1.m_Age > p2.m_Age;
	}
};

void printMap161(map<Person, int, Mycompare161>& m)
{
	for (map<Person, int, Mycompare161>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << it->first.m_Name << " : " << "\t����:  " << it->first.m_Age 
			 << "\t��ߣ� " << it->first.m_Height << "\t�÷֣� " << it->second << endl; 
	}
	cout << endl;
}

void test161()
{
	map<Person,int, Mycompare161>m;  //ѧ��   �÷�

	Person p1("ѧ��A", 18, 175); 
	Person p2("ѧ��B", 20, 180);
	Person p3("ѧ��C", 19, 185);
	Person p4("ѧ��D", 21, 175);
	Person p(p3);
	m.emplace(p1, 80);
	m.insert(make_pair(p1, 8));
	m.insert(make_pair(p2, 85));
	m.insert(make_pair(p3, 95));
	m.insert(make_pair(p4, 90));

	printMap161(m);
}

int main161()
{
	test161();
	system("pause");
	return 0;
}