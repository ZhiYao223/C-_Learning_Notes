/*
	����ԭ��:
	count(iterator beg, iterator end, value);
	// ͳ��Ԫ�س��ִ���
	// beg ��ʼ������
	// end ����������
	// value ͳ�Ƶ�Ԫ��
*/
#include<iostream>
#include<vector>
using namespace  std;

//1.ͳ��������������
void test175_1()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(50);
	v.push_back(60);
	v.push_back(60);
	v.push_back(70);
	v.push_back(90);
	v.push_back(10);
	
	int elem = 40;
	int num = count(v.begin(), v.end(), 40);
	cout << "Ԫ��" << elem << "�ĸ���Ϊ��" << num << endl; 

}

//2.ͳ���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age; 
	}
	bool operator==(const Person& p)  //����== �õײ�֪����ζԱ�
	{
		if (this->m_Age == p.m_Age)
		{
			return true; 
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test175_2()
{
	vector<Person>v;
	Person p1("����", 40);
	Person p2("�ŷ�", 35);
	Person p3("����", 40);
	Person p4("����", 40);
	Person p5("����", 35);
	Person p6("�����", 35);

	//����Ա����������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);

	int num = count(v.begin(), v.end(), p3);       //����������p3Ԫ��

	cout << "��" << p3.m_Name << "ͬ��������Ա������" << num << endl; 

}
int main175()
{
	test175_1();
	test175_2();
	system("pause");
	return 0;
}