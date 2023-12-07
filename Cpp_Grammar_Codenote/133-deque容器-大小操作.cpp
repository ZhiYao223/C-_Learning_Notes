/*
��������:
����deque�����Ĵ�С���в���
����ԭ��:
deque.empty();				//�ж������Ƿ�Ϊ��
deque.size();				//����������Ԫ�صĸ���
deque.resize(num);			//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��
							//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
deque.resize(num, elem);	//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ��
							//���������̣���δβ�����������ȵ�Ԫ�ر�ɾ����
*/
#include <iostream>
#include <deque>
using namespace std;

//deque������С����

void printDeque133(deque<int>& d)
{
	for (size_t i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl; 
}

void test133()
{
	deque<int>d1;
	for (size_t i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque133(d1);

	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl; 
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl; 
		//dequeû�������ĸ���capacity
	}

	//����ָ��deque��С
	d1.resize(15, 1);  //�����Ĳ�����1�����
	printDeque133(d1);

	d1.resize(5);
	printDeque133(d1);
}

int main133()
{
	test133();
	system("pause");
	return 0;
}