/*
	��������:
	�����������ָ����Ԫ��
	����ԭ��:
	fill(iterator beg, iterator end, value);
	// �����������Ԫ��
	// beg ��ʼ������
	// end ����������
	// value ����ֵ
*/
#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

void myprint186(int val)
{
	cout << val <<" ";
}
//�������������㷨 fill
void test186()
{
	vector<int>v;
	v.resize(10);  //ָ���ռ��С
	//�����������ָ��Ԫ��
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myprint186);
	cout << endl;

}
int main186()
{
	test186();
	system("pause");
	return 0;
}