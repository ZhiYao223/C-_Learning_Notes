/*
	ѧϰĿ�꣺���ճ��ü����㷨

	�㷨��飺
	set_nitersection  //�����������Ľ���
	set_union //�����������Ĳ���
	set_difference//�����������Ĳ

	�󽻼����������ϱ�������������

	�󽻼����������ϱ������������
	Ŀ���������ٿռ���Ҫ������������ȡСֵ��
	setintersection����ֵ���ǽ������Ǻ�һ��Ԫ�׵�λ��
*/
#include<iostream>
#include<vector>
#include<algorithm>
//#include<functional>
using namespace std;

void myprint187(int val)
{
	cout << val << " ";
}

void test187()
{
	vector<int>v1;
	vector<int>v2;				
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	for_each(v1.begin(), v1.end(), myprint187);//0 1 2 3 4 5 6 7 8 9
	cout << endl; 
	for_each(v2.begin(), v2.end(), myprint187);//5 6 7 8 9 10 11 12 13 14
	cout << endl; 

	vector<int>vtarget;
	//Ŀ��������Ҫ��ǰ���ٿռ�
	//���������������������С������ ���ٿռ�ȡ��С������size����
	vtarget.resize(min(v1.size(), v2.size()));
	cout << endl;
	//��ȡ����
	vector<int>::iterator itEnd;
	itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), vtarget.end(), myprint187);//5 6 7 8 9 0 0 0 0 0
	cout << endl;
	//�����vtarget.end()����������������Ŀռ�ᱻ���㡣 ������itEnd������
	for_each(vtarget.begin(), itEnd, myprint187);  //5 6 7 8 9


}
int main187()
{
	test187();
	system("pause");
	return 0;
}