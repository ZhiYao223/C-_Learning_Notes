/*
	��������:
	�����㷨ʵ�ֶ�deque������������

	�㷨��
	sort(iterator beg, iterator end) //��beg��end������Ԫ�ؽ�������
*/  
	
#include<iostream>
#include<deque>
#include<algorithm> //��׼�㷨ͷ�ļ�
using namespace std;

void printDeque136(const deque<int>& d)
{
	for (size_t i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl; 
	//��������֮һ
	//for (auto const& it : d)
	//{
	//	cout << it << " ";
	//}
}

void test136()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//300 200 100 30 20 10
	printDeque136(d);

	//����  sort()Ĭ�Ϲ��򣬴�С����
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vector����Ҳ��������sort()�������� 
	sort(d.begin(), d.end());
	cout << "����� " << endl;
	printDeque136(d);

}

int main136()
{
	test136();
	system("pause");
	return 0;
}