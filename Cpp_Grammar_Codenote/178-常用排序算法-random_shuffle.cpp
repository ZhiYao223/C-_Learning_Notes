/*
	��������:
	ϴ�� ָ����԰�ڵ�Ԫ�������������
	����ԭ��:
	random_shuffle(iterator be8, iterator end);
	// ָ����Χ�ڵ�Ԫ�ػ���������
	// beg ��ʼ������
	// end ����������
	�ܽ᣺ random_shuffle ϴ���㷨�Ƚ�ʵ�ã�ʹ��ʱ�ǵü����������
*/
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;


void myprint178(int val)
{
	cout << val << " ";
}

void test178()
{
	vector<int>v;
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), myprint178);  //
	cout << endl; 

	//����˳��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myprint178);
	cout << endl; 
}
int main178()
{
	//���������
	//����ǰʱ����Ϊ��������ʼ�����������������ȷ��ÿ�γ�������ʱ���ɵ���������ж��ǲ�ͬ�ġ�
	srand((unsigned int)time(NULL));  //
	test178(); 
	system("pause");
	return 0;
}




