/*
	������������������Ԫ�ؽ��з�ת
	����ԭ�ͣ�
	reverse(iterator beg, iterator end);
	//��תָ����Χ��Ԫ��
	//beg��ʼ������
	//end����������

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test180()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	cout << endl; 
	random_shuffle(v.begin(), v.end());  //��������
	cout << "��תǰ��";
	for_each(v.begin(), v.end(), myprint());
	cout << endl; 


	cout << "��ת��";
	reverse(v.begin(), v.end());           //��������ߵ�
	for_each(v.begin(), v.end(), myprint());   
	cout << endl;
}
int main180()
{
	test180();
	system("pause");
	return 0;
}

