/*
	��������:ʵ�ֹ�ϵ�Ա�
	�º���ԭ��:
	template<class T> bool equal to<T>		//����
	template<class T> bool not_equal_to<T>	/������
	template<class T> bool greater<T>		//����   ���
	template<class T> bool greater_equal<T>//���ڵ���
	template<class T> bool less<T>			//С��
	template<class T> bool less_equal<T>	//С�ڵ���
	�ڽ��º����Ǹ��������������õģ�ν���Ǹ��Զ������������õ�
*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Mycompare167
{
public:
	bool operator()(int val1, int val2 )
	{
		return val1 > val2;
	}
};
void printVector167(vector<int>& v)
{
	for (auto const& it : v)
	{
		cout << it << " ";
	}
	cout << endl;
}
//�ڽ��������󡪡���ϵ�º���
//����greater
void test167()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	printVector167(v);   //����
	//����
	//  sort(v.begin(), v.end(), Mycompare167());

	sort(v.begin(), v.end(), greater<int>()); //ͨ���ڽ��º��������������� Ч����ͬ����һ��
	printVector167(v);   //����
}

int main167()
{
	test167();
	system("pause");
	return 0;
}