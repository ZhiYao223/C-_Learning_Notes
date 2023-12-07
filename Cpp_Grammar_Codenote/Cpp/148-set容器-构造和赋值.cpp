/*
	set/multiset����
	��飺����Ԫ�ض����ڲ���ʱ�Զ�������

	���ʣ�set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��

	set��multiset����
	set���������������ظ���Ԫ��
	multiset�������������ظ���Ԫ��

	set����͸�ֵ
	��������������set�����Լ���ֵ

	���죺
	set<T>st;							//Ĭ�Ϲ��캯��
	set(const set &st);					//���صȺŲ�����
	set& operator= (const set &stt);	//���ز������Ų�����
*/

#include<set>
#include<iostream>
#include<string>
using namespace std;

//set��������͸�ֵ
void printSet148(set<int>& st)
{
	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it  << " ";
	}
	cout << endl; 
}

void printMultiset148(multiset<int>& st)
{
	for (multiset<int>::iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}

void test148()
{
	//�������ݣ�ֻ��insert��ʽ
	set<int> s1;     //��������
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	
	//�������� 
	//set�����ص㣬����Ԫ�ز���ʱ�Զ�����
	//set��������������ظ�ֵ
	printSet148(s1);

	//��������
	set<int>s2(s1);
	printSet148(s1);

	multiset<int>s3;
	s3.insert(10);
	s3.insert(40);
	s3.insert(30);
	s3.insert(20);
	s3.insert(30);
	printMultiset148(s3);
}

int main148()
{
	test148();        
	system("pause");
	return 0;
}