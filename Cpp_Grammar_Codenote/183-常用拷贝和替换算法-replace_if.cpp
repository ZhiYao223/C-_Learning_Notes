/*
	��������:
	������������������Ԫ�أ��滻��ָ��Ԫ��
	����ԭ��:
	replace_if(iterator beg, iterator end, _pred, newvalue);
	// �������滻Ԫ�أ������������滻��ָ��Ԫ��
	// beg ��ʼ������
	// end ����������
	// _pred ν��
	// newvalue �»�����Ԫ��
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;


class Myprint183     //�º���
{
public:
	void operator()(int val)  
	{
		cout << val <<" ";
	}
};
class Greater30    
{
public:
	bool operator()(int val)  
	{
		return val >= 30;
	}
};
void test183()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(60);
	v.push_back(50);
	v.push_back(20);
	v.push_back(10);
	v.push_back(30);
	cout << "�滻ǰ��";
	for_each(v.begin(), v.end(), Myprint183());
	cout << endl;
	//�����ڵ���30��Ԫ���滻Ϊ0
	cout << "�滻��";
	replace_if(v.begin(), v.end(), Greater30(), 0);
	for_each(v.begin(), v.end(), Myprint183());
}

int main183()
{
	test183();
	system("pause");
	return 0;
}