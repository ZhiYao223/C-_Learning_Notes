/*
	�����������ϱ������������С�
	Ŀ���������ٿռ���Ҫ����������ȡ�ϴ�ֵ��
	set_difference����ֵ���ǲ�����һ��Ԫ�ص�λ��

	����ԭ��:
	set_difference(Iterator begl, iterator endl, iterator beg2, iterator end2, iterator dest);
	//���������ϵĲ
	// ע��:�������ϱ�������������
	// beg1 ����1��ʼѡ����
	// end1 ����1����������
	// beg2 ����2��ʼѡ����
	// end2 ����2����������
	// dest Ŀ��������ʼ������
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void myprint189(int val)
{
	cout << val << " ";
}

void test189()
{
	vector<int>v1;
	vector<int>v2;                             
	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	for_each(v1.begin(), v1.end(), myprint189);
	cout << endl; 
	for_each(v2.begin(), v2.end(), myprint189);

	//����Ŀ�������������ٿռ�
	//�������������������û�в�����ȡ���������д��size��ΪĿ�������Ŀ��ٿռ�
	vector<int>vtarget;
	vtarget.resize(max(v1.size(), v2.size()));
	cout << endl; 
	cout << "v1��v2�ĲΪ��" << endl; 
	vector<int>::iterator itEnd;
	itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), itEnd, myprint189);   //ע�� �˴��Ƿ��ص�itEnd������
}

int main189()
{
	test189();
	system("pause");
	return 0;
}
