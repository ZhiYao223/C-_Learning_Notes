/*
	����ԭ��:
set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
// ���������ϵĲ���
// ע��:�������ϱ�������������
// beg1 ����1��ʼѡ����
// end1 ����1����������
// beg2 ����2��ʼ������
// end2����2����������
// dest Ŀ��������ʼ������
	�ܽ�:
	�󲢼����������ϱ�����������С�
	Ŀ���������ٿռ���Ҫ�����������
	set_union����ֵ���ǲ��������һ��Ԫ�ص�λ��
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void myprint188(int val)
{
	cout << val << " ";
}

void test188()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	cout << "�ϲ�ǰ��" << endl; 
	for_each(v1.begin(), v1.end(), myprint188);//0 1 2 3 4 5 6 7 8 9
	cout << endl;
	for_each(v2.begin(), v2.end(), myprint188);//5 6 7 8 9 10 11 12 13 14

	cout << "�ϲ���" << endl; 
	vector<int>vtarget; //Ŀ������
	//�������������������û�н����� ����������������size���
	vtarget.resize(v1.size() + v2.size());
	vector<int>::iterator itEnd;
	itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), vtarget.end(), myprint188);//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 0 0 0 0 0
	//for_each(vtarget.begin(), itEnd, myprint188);//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14

}
int main188()
{
	test188();
	system("pause");
	return 0;
}

