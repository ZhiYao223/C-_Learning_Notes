/*
	��������������ָ��  Ԫ���Ƿ����

	����ԭ��:
	bool binary_search(iterator beg, iterator end, value);
	// ����ָ����Ԫ�أ��鵽 ����true ����false
	// ע�� �����������в�����
	// beg ��ʼѡ����
	// end ����������
	// value ���ҵ�Ԫ��

	ע�⣺ ���ַ����ң�������������������У���Ϊ����
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���ò����㷨  binary_search
void test174()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << endl; 
	//v.push_back(2); ���������ģ����λ��
	//�����������Ƿ���9Ԫ��
	bool ret = binary_search(v.begin(), v.end(), 9); //ͷβ�������� ����Ԫ��
	if (ret)
	{
		cout << "�ҵ���Ԫ��" << endl;
	}
	else
	{
		cout << "û���ҵ�Ԫ��" << endl; 
	}
}




int main174()
{
	test174();
	system("pause");
	return 0;
}