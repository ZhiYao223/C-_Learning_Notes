/*
	//ѧϰĿ�꣺����set��multiset������

	����set�����Բ����ظ����ݣ���multiset����
	set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
	multiset���������ݣ���˿��Բ����ظ�����

	�ܽ᣺ �������������ظ����ݿ�������set 
		  �����Ҫ�����ظ���������multiset 
*/
#include<set>
#include<iostream>
using namespace std;

//set����
void test152()
{
	set<int>s;
	pair<set<int>::iterator, bool> ret = s.insert(10); //�жϲ����Ƿ�ɹ�  ����󷵻�ֵretΪbool����
	if (ret.second)  //ret.second��ʾpair����ĵڶ������ݼ�bool��������
	{
		cout << "��һ�β���ɹ���" << endl;
	}
	else
	{
		cout << "��һ�β��벻�ɹ���" << endl; 
	}


	ret = s.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ���" << endl; 
	}
	else
	{
		cout << "�ڶ��β���ʧ�ܣ�" << endl; 
	}

	//multiset 
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}
int main152()
{
	test152();
	system("pause");
	return 0;
}
