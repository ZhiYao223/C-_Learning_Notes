/*
	����������	��list���������ݽ��д�ȡ
	����ԭ�ͣ�
	front();  //���ص�һ��Ԫ��
	back();   //�������һ��Ԫ��
	
*/

#include<list>
#include<iostream>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}
//list���� ���ݴ�ȡ
void test145()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//L[0] ������[]����list�����е�
	//L.at(0����������at��ʽlist�����е�Ԫ��
	//ԭ��list�����������������������Կռ�洢���ݣ�������Ҳ��֧���������
	cout << "��һ��Ԫ�أ�" << L.front() << endl;
	cout << "���һ��Ԫ�أ�" << L.back() << endl; 

	//��֤��������֧���������
	list<int>::iterator it = L.begin();
	it++;    //֧��˫��
	it--;    //
	//it = it + 1; ��֧��������ʣ�ֻ֧��it++ ��--��  
}


int main145()
{
	test145();
	system("pause");
	return 0;
}