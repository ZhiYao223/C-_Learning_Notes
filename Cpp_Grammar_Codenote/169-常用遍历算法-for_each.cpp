/*
	�㷨��Ҫ����ͷ�ļ�<algorithm> <functiona1> <numeric>���
	<algorithm��������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
	<nuneric>�����С��ֻ��������������������м���ѧ�����ģ�庯��
	<functiona1>������һЩģ��������������������
	
	ѧϰĿ�꣺ for_eachʵ�ʿ�������õı����㷨����������
	for_each //��������
	transform //������������һ��������
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//��ͨ����
void print169_1(int val)
{
	cout << val << " ";
}

//�º���
class print169_2
{
public:
	void  operator()(int val)
	{
		cout << val << " ";
	}
};

void test169()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print169_1);  //��ͨ���������뺯����
	
	cout << endl;
	
	for_each(v.begin(), v.end(), print169_2());  //�º��������������������� 
	  
}


int main169()
{
	test169();
	system("pause");
	return 0;
}
