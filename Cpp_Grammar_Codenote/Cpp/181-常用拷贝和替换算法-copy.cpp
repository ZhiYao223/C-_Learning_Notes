/*
	ѧϰĿ��:
		���ճ��õĳֱ����滻�㷨
		�㷨���:
		copy		// ������ָ����Χ��Ԫ�ؿ�������һ������
		replace		// ��������ָ����Χ��Ԫ���޸�Ϊ��Ԫ��
		replace_if	// ������ָ����Χ����������Ԫ�ؾ���Ϊ��Ԫ��
		Swap		// ��������������Ԫ��

		Copy��������:
		������ָ����Χ��Ԫ�ؿ�������һ������

		����ԭ��:
		copy(iterator beg, iterator end, iterator dest);
		// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
		//����copy�㷨�ڿ���ʱ��Ŀ�������ǵ���ǰ���ٿռ�
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

void myprint(int val)
{
	cout << val << " ";
}
//���ÿ������滻�㷨copy
void test181()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>v2;
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myprint);

}

int main181()
{
	test181();
	system("pause");
	return 0;
}