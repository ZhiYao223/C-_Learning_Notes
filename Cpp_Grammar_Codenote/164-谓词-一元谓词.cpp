/*

	����bool���͵ķº�����Ϊν��
	���operator()����һ����������ô������Ԫν�ʡ�
	���operator()����������������ô������Ԫν��

	//�º��� ����ֵ������bool�������� ����Ϊν��
	//һԪν��
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class LargeFive
{
public:    
	bool operator()(int val)  
	{
		return val > 5; 
	}
};
void test164()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);   //��������
	}
	//���������У���û�д���5������   LargeFive()�����ĺ�������
	vector<int>::iterator it;
	it = find_if(v.begin(), v.end(), LargeFive());   //����Ԫ�ص�ַ���ĵ�����
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl; 
	}
	else
	{
		cout << "�ҵ��˴���5������Ϊ��" << *it << endl; 
	}


}