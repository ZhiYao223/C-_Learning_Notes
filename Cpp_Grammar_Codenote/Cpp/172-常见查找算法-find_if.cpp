/*
	��������:
		����������Ԫ��
	����ԭ��:
	find_if(iterator beg,iterator end,_pred);	// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
	// beg ��ʼѡ����
	// end ����������
	//_Pred ��������ν��(����bool���͵ķº���)
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//���õĲ����㷨 find_if ��������
// 
//1.����������������
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test172_1()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << endl; 
	vector<int>::iterator it;
    it = find_if(v.begin(), v.end(), GreaterFive());   //�����ס�β������ ν��
	if (it == v.end())
	{
		cout << "û�ҵ�" << endl; 
	}
	else
	{
		cout << "�ҵ�����5������Ϊ��" << *it << endl; 
	}
}

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age; 
	}

	string m_Name;
	int m_Age;
};
class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}
};
//2.�����Զ�����������
void test172_2()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());//���õ��������շ��صĽ��  
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl; 
	}
	else
	{
		cout << "���ҵ� ������" << (*it).m_Name<<"���䣺"<<(*it).m_Age << endl;
	}

	
}
int main172()
{
	test172_1();
	test172_2();   
	system("pause");
	return 0;
}