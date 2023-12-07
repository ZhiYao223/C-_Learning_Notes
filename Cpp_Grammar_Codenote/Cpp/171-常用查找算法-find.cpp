/*
		find				//����Ԫ��
		find_if				//����������Ԫ��
		adjacent_find		//���������ظ�Ԫ��
		binary_search		//���ֲ��ҷ�
		count				//ͳ��Ԫ�ظ���
		count_if			//������ͳ��Ԫ�ظ���

		��������:
��		����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ�ʲ�����Ҳ������ؽ���������end()

		����ԭ��:

		find(iterator beg, iterator end, value);

		// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
		// beg ��ʼ������
		// end ����������
		// value ���ҵ�Ԫ��
		//����find��������������ָ����Ԫ�أ�����ֵ�����ǵ�����
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//���õĲ����㷨  
//���� ������������
void test171_1()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << endl; 
	//�����������Ƿ���5���Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "û���ҵ���" << endl; 
	}
	else
	{
		cout << "�ҵ���" << *it << endl; 
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
	//����== �õײ�find֪����ζԱ�Person��������
	bool operator==(const Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return  true; 
		}
		else
		{
			return false; 
		}
	}
	string m_Name;
	int m_Age;
};

void test171_2()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	//���뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
	if (it == v.end())      //�Զ������ͣ���Ҫ����==������� �õײ�find֪����ζԱ�Person��������
	{
		cout << "û���ҵ�" << endl; 
	}
	else
	{
		cout << "�ҵ�Ԫ�أ�"<<(*it).m_Name<<"\t���䣺"<<(*it).m_Age << endl;

	}

}

int main171()
{
	test171_1();
	test171_2();
	system("pause");
	return 0;
}
