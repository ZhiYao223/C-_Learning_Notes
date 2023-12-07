/*
	ͳ��map������С�Լ�����map����

	����ԭ�ͣ�
	size();   //����������Ԫ�ص���Ŀ
	empty();  //�ж������Ƿ�Ϊ��
	swap();   //����������������

*/
#include<iostream>
#include<map>
using namespace std;

void printMap157(map<int, string>& m)
{
	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "	value = " << it->second << endl;
	}
	cout << endl;
}

void test157()
{
	map<int, string>m1;
	//��ʽһ��
	m1.insert(make_pair(1, "��ɮ"));
	m1.insert(make_pair(3, "�����"));
	m1.insert(make_pair(2, "��˽�"));
	m1.insert(make_pair(5, "ɳ��"));
	m1.insert(make_pair(4, "������"));
	//��ʽ����
	//m1.insert(pair<int, string>(1, "��ɮ"));
	//m1.insert(pair<int, string>(3, "�����"));
	//m1.insert(pair<int, string>(2, "��˽�"));
	//m1.insert(pair<int, string>(5, "ɳ��"));
	//m1.insert(pair<int, string>(4, "������"));

	if (!m1.empty())
	{		
		cout << "������Ϊ��" << endl; 
		cout << "������Ԫ����Ŀ�� " << m1.size() << endl;
	}
	else
	{
		cout << "����Ϊ��" << endl; 
	}

	map<int, string>m2;
	m2.insert(make_pair(7, "�׹Ǿ�"));
	m2.insert(make_pair(6, "���þ�"));
	cout << "����ǰ��" << endl;
	printMap157(m1);
	printMap157(m2);

	cout << "������" << endl;
	swap(m1, m2);
	printMap157(m1);
	printMap157(m2);

}

int main157()
{
	test157();
	system("pause");
	return 0;
}