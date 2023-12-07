/*

	��deque�����в����ɾ������
		����ԭ��:
		���˲������:
		push back(elem);		//������β�����һ������
		push front(elem);		//������ͷ������һ������
		pop_back();				//ɾ���������һ������
		pop_front();			//ɾ��������һ������  

		ָ��λ�ò���:
		insert(pos,elem);		//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��.
		insert(pos,n,elem);		//��posλ�ò���n��elem���ݣ��޷���ֵ��
		insert(pos,beg,end);	//��posλ�ò���[beg,end)��������ݣ��޷���ֵ
		clear();				//�����������������
		erase( beg ,end):		//ɾ��[begend)��������ݣ�������һ�����ݵ�λ��
		erase( pos);			//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��


		�ܽ᣺
		�����ɾ���ṩ��λ���ǵ�����������
		βɾ��β�塢ͷ�塢ͷɾ��  push_back��pop_back��push_front��pop_front
*/
#include <iostream>
#include <deque>
using namespace std;

void printDeque134(const deque<int>& d)  //����Ԫ�ز����޸�
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " "; //*it�����޸�
	}

	//for (auto const& it : d)//������ʽ֮һ  
	//{
	//	cout << it << " "; 
	//}
	cout << endl; 
}
void test134_1()
{
	deque<int>d1; 
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	//200 100 10 20
	printDeque134(d1);

	//βɾ   200 100 10
	d1.pop_back();
	printDeque134(d1);

	//ͷɾ    100 10
	d1.pop_front();
	printDeque134(d1);
}

void test134_2()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	//200 100 10 20
	printDeque134(d1);

	//insert����  
	d1.insert(d1.begin(), 1000);
	//1000 200 100 20 10
	printDeque134(d1);

	d1.insert(d1.begin(), 2, 10000);
	//10000 10000 1000 200 100 20 10
	printDeque134(d1);


	//insert(d1.begin()+n, n, elem}; ������ʲ���

	//����������в���
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d2.push_back(4);
	d1.insert(d1.begin(), d2.begin(), d2.end()); //��d1��beginλ�ô�������[d2.begin(), d2.end())�����е�Ԫ��
	////1 2 3 4 10000 10000 1000 200 100 20 10
	printDeque134(d1);


}

void test134_3()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	//ɾ�� 
	deque<int>::iterator it = d1.begin(); //������ָ���һ������
	it++;        //ָ��ڶ�������
	d1.erase(it);
	printDeque134(d1);

	//������ɾ��
	d1.erase(d1.begin(), d1.end());
	//���
	d1.clear();
	printDeque134(d1);
}

int main134()
{
	test134_1();
	cout << endl;
	test134_2();
	cout << endl;
	test134_3();
	system("pause");
	return 0;
}