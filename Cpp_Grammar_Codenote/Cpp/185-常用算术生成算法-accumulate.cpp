/*
	ѧϰĿ��:
	���ճ��õ����������㷨ע��:
	���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ #inciude <numeric>
	
	�㷨���:
	accumulate		//������Ԫ���ۼ��ܺ�accumulate   
	fill			// �����������Ԫ��
	
	accumulate:
	������������������������Ԫ���ۼ��ܺ�


	����ԭ��:
	accumulate(iterator beg, iterator end, value); // ��������Ԫ���ۼ��ܺ�
	// beg ��ʼѡ����
	// end ����ѡ����
	// value ��ʼֵ
*/
#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

void test185()
{
	vector<int>v1;
	for (int i = 0; i <= 100; i++)
	{
		v1.push_back(i);
	}
	//����3 ��ʼ�ۼ�ֵ
	int total = accumulate(v1.begin(), v1.end(), 0); 
	cout << "total = " << total << endl; 

}
int main185()
{
	test185();
	system("pause");
	return 0;
}
