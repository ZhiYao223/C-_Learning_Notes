/*
	ѧϰĿ�꣺  map����Ĭ���������Ϊ����keyֵ��С��������������θı��������
	��Ҫ����Ҫ�㣺 ���÷º��������Ըı��������

	�ܽ᣺
	���÷º�������ָ��map�������������
	�����Զ����������ͣ� map����Ҫָ��������� ͬset����
*/

#include<map>
#include<algorithm>
#include<iostream>
using namespace std;

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void printmap160(map<int, int,  MyCompare>& m)
{
	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "	value = " << (*it).second << endl;
	}
	cout << endl;
}

void test160()
{
	//Ĭ�ϴ�С�����������÷º���ʵ�ִӴ�С����
	map<int, int, MyCompare>m;  //���Ӵ�С����
	m.insert(make_pair(1, 20));
	m.insert(make_pair(2, 10));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));

	printmap160(m);



}
int main160()
{
	test160();
	system("pause");
	return 0;
}

