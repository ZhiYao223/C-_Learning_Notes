/*
	������������������������Ԫ��
	����ԭ�ͣ�swap(container c1, container c2);
	//��������������Ԫ��
	//ע����� swap��������ʱ��ע�⽻��������Ҫͬ������
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test184()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
	}
	cout <<"����ǰ��"<< endl;
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl; 
	for_each(v2.begin(), v2.end(), myprint());
	cout << endl;
	swap(v1, v2);
	cout << "������"<<endl;
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myprint());
}

int main184()
{
	test184();
	system("pause");
	return 0;
}