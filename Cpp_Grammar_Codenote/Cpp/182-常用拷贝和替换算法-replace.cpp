/*
	������������������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
	����ԭ��:
	replace(iterator feg, iterator end, oldvalue, newvalue);

	//����������Ԫ��ܰ������Ԫ��
	// beg ��ʼѡ����
	// end ����ѡ����
	// oldvalue ��Ԫ��
	// newvalue ��Ԫ��
*/
#include<iostream>
#include<algorithm>
using namespace std;
#include <vector>
//���ÿ������滻�㷨 replace

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test182()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	cout << "�滻ǰ��";
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
	replace(v.begin(), v.end(), 20, 2000); //��20ȫ���滻��2000

	cout << "�滻��";
	for_each(v.begin(), v.end(), myprint());

}
int main182()
{
	test182();
	system("pause");
	return 0;
}