/*
		ѧϰĿ��:���ճ��õ������㷨
	
		�㷨��� :
		
		sort			//��������Ԫ�ؽ�������
		random_shuffle	//ϴ ָ����Χ�ڵ�Ԫ�ػ���������
		merge			// ����Ԫ�غϲ������洢����һ������
		reverse			// ��תָ��������Ԫ��
		
	
		�������� :��������Ԫ�ؽ�������
		����ԭ�� :
		sort(iterator beg, iterator end, Pred);
		// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
		// beg ��ʼѡ����
		//_Pred ν��
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

void printVector177(vector<int> &v)
{
	for (auto const& it : v)
	{
		cout << it << " ";
	}
	cout << endl; 
}
void myprint177(int val)
{
	cout << val << " ";
}
//���������㷨 sort
void test177()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	cout << "����ǰ��" << endl;
	printVector177(v);

	cout << "�����: " << endl;
	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), myprint177); //��������
	//printVector177(v);
	cout << endl;
	//�ı�Ϊ����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myprint177); //��������

}

int main177()
{
	test177();
	system("pause");
	return 0;
}