/*
	��������������list����
	 
	����ԭ�ͣ�
	list<T> lst;   //list����ģ����ʵ�֣������Ĭ�Ϲ��캯����ʽ
	list(beg,end);  //���캯����[beg,end�������е�Ԫ�ؿ���������
	list(n, elem); //���캯����n��elem����������
	list(const list &lst);  //�������캯��
	
	listͬ�����������췽ʽ����һ��������ʹ�ü���

*/
#include<iostream>
#include <vector>
#include <list>
using namespace std; 

void printList141(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//for (size_t i = 0; i < L.size(); i++)
	//{
	//	cout << L[i] << " ";
	//}
} 

void test141()
{
	//����list������
	list<int>L1;  //Ĭ�Ϲ���
	//�������
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//��������
	printList141(L1);

	//���䷽ʽ����
	list<int>L2(L1.begin(), L1.end());
	printList141(L2);

	list<int>L3(L2);
	printList141(L3);

	list<int>L4(10, 1000);
	printList141(L4);
}

int main141()
{
	test141();
	system("pause");
	return 0;
}















