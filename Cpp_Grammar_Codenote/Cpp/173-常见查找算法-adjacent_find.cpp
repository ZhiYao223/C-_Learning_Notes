/*
 adjacent_find
��������:
���������ظ�Ԫ��

����ԭ��:

adjacent_find(iterator beg,iterator end);  

// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õ�ѡ����
// beg ��ʼ������
// end ����������
����������г��ֲ��������ظ�Ԫ�أ��ǵ���STL�е�adjacent_find�㷨
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


void test173_1()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);  //���ڵ��ظ�Ԫ��
	v.push_back(3);
	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���" << *pos << endl;  
	}
	cout << endl; 
}
int main173()
{
	test173_1();
	system("pause");
	return 0;
}