/*
*	����������ʵ���߼�����
	 ����ԭ��:
	template<class T> bool logical and<T>//�߼���
	template<class T> bool logical_or<T>//�߼���
	template<class T> bool logicalnot<T>//�߼���

	�㷨transform���԰�һ�������е�����ȫ�����˵���һ��������
	�ܽ᣺�߼��º���ʵ��Ӧ�ý��٣��˽⼴��
*/
#include<iostream>
#include<vector>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;

void printVector168(vector<bool>&v)
{
	for (auto const& it : v)
	{
		cout << it << " ";
	}
	cout << endl; 
}

//�߼��� logical_not
void test168()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	printVector168(v);

	//�����߼��� ������v���˵�����v1�У� ��ִ��ȡ������
	vector<bool>v1;
	v1.resize(v.size()); //Ŀ������������vͬ����С�Ŀռ�
	transform(v.begin(), v.begin(), v1.begin(), logical_not<bool>()); 
	printVector168(v1);


}
int main168()
{
	test168();
	system("pause");
	return 0;
}