/*
	���������� ��list�������и�ֵ���Լ�����list����

	����ԭ�ͣ�
	assign(beg,end);      //��[beg,end]�����е����ݿ�����ֵ������
	assign(n, elem);      //��n��elem������ֵ������
	list& operator = (const list &lst);  //���صȺŲ�����
	swap(lst);                     //��lst�뱾���Ԫ�ػ���

	�ܽ᣺ list�����ĸ�ֵ�ͽ������Ӧ�ü���
*/

#include <iostream>
#include <list>
using namespace std; 

//list������ֵ�ͽ���

void printList143(list<int>& L)  //list������˫����������ʹ��">", "<"�Ƚϴ�С
{
	
	//for (size_t i = 0; i<L.size(); i++)
	//{
	//	cout << L[i] << " ";
	//}
	//cout << endl;
	for (auto const& it : L)
	{
		cout << it << " ";
	}
	cout << endl;
}

//��ֵ
void test143_1()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList143(L1);

	list<int>L2;
	L2 = L1; //operator= ��ֵ
	printList143(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList143(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList143(L4);

}

//����
void test143_2()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);

	cout << "����ǰ:" << endl;
	printList143(L1);
	printList143(L2);

	cout << "������:" << endl; 
	swap(L1, L2);  //��������L1,L2�ڵ�Ԫ��
	printList143(L1);
	printList143(L2);

}
int main143()
{
	test143_1();
	test143_2();
	system("pause");
	return 0;
}
