/*
	����������set�������в������ݺ�ɾ������

	����ԭ�ͣ�
			insert(elem);	//�������в���Ԫ��
			clear();		//�������Ԫ��
			erase(pos);		//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����.
			erase(beg,end);	//ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
			erase(elem);	//ɾ��������ֵΪelem��Ԫ��

*/
#include<iostream>
#include<set>
using namespace std;

void printSet150(set<int>& s)
{
	for (auto const& it : s)
	{
		cout << it << " ";
	}
	cout << endl;
	
	//for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	//cout << endl;
}

void test150()
{
	set<int>s1;
	//����
	s1.insert(30);
	s1.insert(10);
	s1.insert(20);	
	s1.insert(40);   //������Զ�����
	
	//����
	printSet150(s1);   //10 20 30 40

	//ɾ��
	s1.erase(s1.begin());
	printSet150(s1);  //20 30 40 

	//ɾ�����ذ汾
	s1.erase(30);
	printSet150(s1);
	
	//���
	//s1.erase(s1.begin(); s1.end());
	s1.clear();
	printSet150(s1);
	
}

int main150()
{
	test150();
	system("pause");
	return 0;
}