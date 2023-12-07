/*
	���������� ��map�������в��������Լ�ͳ������
	����ԭ�ͣ�
	find(key);    //����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ������� �������ڣ�����map.end();
	count(key);   //ͳ��key��Ԫ�ظ���

	�ܽ�: ����----find���ص��ǵ�����  ͳ��-----count (����map,���Ϊ0��1��
*/
#include<iostream>
#include<map>
using namespace std; 

void printMap159(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "	value = " << (*it).second << endl; 
	}
	cout << endl; 
}

void test159()
{
	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 30));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 20));
	m.insert(make_pair(4, 50));  //�岻��ȥ��map����������ظ���keyԪ��

	map<int, int>::iterator pos = m.find(3); //����keyֵΪ3��Ԫ�أ������ظ�Ԫ�صĵ����� ��pos����
	if (pos != m.end())
	{
		cout << "�ҵ�keyֵΪ3��Ԫ�أ�" << (*pos).second << endl; 
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl; 
	}
	printMap159(m);
	//ͳ��
	//map����������ظ�keyԪ�أ�countͳ�ƶ��ԣ����Ҫô��0Ҫô��1
	//multimap��countͳ�ƿ��ܴ���1
	int num = m.count(3); //����keyֵΪ3��Ԫ�ظ���
	cout << "num = " << num << endl; 
}

int main159()
{
	test159();
	system("pause");
	return 0;
}