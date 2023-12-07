/*
	���������� ͳ��set������С�Լ�����set����

	����ԭ�ͣ�
	size();  //����������Ԫ�ص���Ŀ
	empty(); //�ж������Ƿ�Ϊ��
	swap(st); //����������������
*/

#include<set>
#include<iostream>
using namespace std;

void printSet149(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}

//��С
void test149_1()
{
	set<int> s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	//��ӡ����
	printSet149(s1);
	//�ж��Ƿ�Ϊ��
	if (s1.empty())
	{
		cout << "s1Ϊ�գ�" << endl; 
	}
	else
	{
		cout << "s1��Ϊ��" << endl; 
		cout << "s1�Ĵ�СΪ�� " << s1.size() << endl;
	}

}

//����
void test149_2()
{
	set<int> s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;
	//��������
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "����ǰ��" << endl;
	printSet149(s1);
	printSet149(s2);

	cout << endl << "������" << endl; 
	s1.swap(s2);
	printSet149(s1);
	printSet149(s2); 

}

int main149()
{
	test149_1();
	test149_2();
	system("pause");
	return 0;
}