/*
	����������
	��deque�е����ݵĴ�ȡ����
	����ԭ��:
			at(int idx);//��������idx��ָ������
			operator[];//��������idx��ָ������
			front();//���������е�һ������Ԫ��
			back();//�������������һ������Ԫ��

*/
#include<iostream>
#include<deque>
using namespace std;

//deque���ݴ�ȡ����
void test135_1()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	//ͨ��[]�ķ�ʽ����Ԫ��
	//300 200 100 10 20 30
	for (size_t i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl; 

	//ͨ��at��ʽ����Ԫ��
	for (size_t i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl; 
	
	cout << "��һ��Ԫ��Ϊ�� " << d.front() << endl;
	cout << "���һ��Ԫ��Ϊ��"<< d.back() << endl; 
}
int main135()
{
	test135_1();
	system("pause");
	return 0;
}