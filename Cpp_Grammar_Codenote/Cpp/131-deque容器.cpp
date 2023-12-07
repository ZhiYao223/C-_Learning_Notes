/*

	����:
	˫�����飬���Զ�ͷ�˽��в���ɾ������
	deque��vector����:
	vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ�͡� 
	deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ�Evector�졣
	vector����Ԫ��ʱ���ٶȻ��deque��,��������ڲ�ʵ���й�

	deque�����ĵ�����Ҳ��֧��������ʵ�


	����ԭ��:
		deque<T> degT;//Ĭ�Ϲ�����ʽ
		deque( beg, end);//���캯����[beg,end)�����е�Ԫ�ؿ���������
		deque(n, elem);//���캯����n��elem����������
		deque(const deque &deg);//�������캯��
*/
#include <iostream>
#include <deque>
using namespace std;



void printDeque131(deque<int>& d)
{ 
	for (size_t i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl; 
}

void test131()
{
	deque<int>d1;
	for (size_t i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	cout << "d1 = ";
	printDeque131(d1);

	//��d1����ҿ������丳ֵ��d2
	deque<int>d2(d1.begin(), d1.end());
	cout << "d2 = ";
	printDeque131(d2); 

	deque<int>d3(10, 100);
	cout << "d3 = ";
	printDeque131(d3);

	deque<int>d4(d3);    //��d3��ֵ���Ƹ�d4
	cout << "d4 = ";
	printDeque131(d4);


}


int main131()
{
	test131();
	system("pause");
	return 0;
}


