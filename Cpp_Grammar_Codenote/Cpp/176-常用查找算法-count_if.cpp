/*
	��������:
	������ͳ��Ԫ�ظ���
	����ԭ��:
	count_if(iterator beg, iterator end, _Pred);
	// ������ͳ��Ԫ�س��ִ���
	//beg ��ʼѡ����
	//end ����ѡ����
	//_Predν��
I
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator()(const Person& p)
	{
		return  p.m_Age > 20;
	}
	string m_Name;
	int m_Age;
};
class AgeGreater40
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 40; 
	}
};

class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
//��������

void test176_1()
{
	vector<int>v;
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);

	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "����20��Ԫ�ظ�����" << num << endl;
}
//�Զ�����������
void test176_2()
{
	vector<Person>v;
	Person p1("����", 45);
	Person p2("�ŷ�", 35);
	Person p3("����", 40);
	Person p4("����", 45);
	Person p5("����", 35);
	Person p6("�����", 50);

	//����Ա����������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);
	//ͳ�ƴ���20����Ա����
	int num = count_if(v.begin(), v.end(), AgeGreater40());  //����ν�ʣ� ���ز�������
	cout << "�������40��Ԫ�ظ�����" << num << endl;
}


int main176()
{
	test176_1();
	test176_2();
	system("pause");
	return 0;
}