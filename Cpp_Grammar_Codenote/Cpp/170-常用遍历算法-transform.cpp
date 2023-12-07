/*
	���������� ������������һ������

	����ԭ�ͣ�
	transform(iterator beg1, iterator end1, iterator  beg2, _func);
	beg1  ԭ������ʼ������
	end1 Դ��������������
	beg2 Ŀ��������ʼ������
	_func�������ߺ�������
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Transform
{
public:
	//�º�����һ�ֽ�����������ʹ�õĻ��ƣ��������������һ�����е���
	//������һ����Ϊ operator() �ĺ���������һ�� int ���͵Ĳ��� v����������ͬ��ֵ v���º�����������һ�������ã����ĵ��÷�ʽ�����ں�����
	//���÷�ʽ������int value = operator()(10);�����Ὣ���� 10 ���ݸ��º����� operator() ��������������ͬ��ֵ 10 ��
	int operator()(int v)   // ������һ���º������������˺������������ operator()
	{
		return v+10; 
	}
};

class print170
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//���ñ����㷨 transform 
void test170()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << endl;
	//Ŀ������
	vector<int>vTarget;   //û����ǰ����vTarget�������ٿռ䣬�ᱨ��
	vTarget.resize(v.size());//������������ԭ����һ����С�Ŀռ�

	transform(v.begin(), v.end(), vTarget.begin(), Transform());   //����������������

	for_each(vTarget.begin(), vTarget.end(), print170());  //�º������룬���()
}

int main170()
{
	test170();
	system("pause");
	return 0;
}
   

