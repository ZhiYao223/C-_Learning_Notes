/*
	

*/
#include<iostream>
#include<list>
using namespace std;

void printList145(list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}

void test145_1()
{
	//��ת
	list <int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);
	cout << "��תǰ��" << endl; 
	printList145(L1);

	L1.reverse();
	cout << "��ת��" << endl;
	printList145(L1);
}

//sort����
bool  myCompare(int v1, int v2)
{
	//���򣬾��õ�һ�� > �ڶ�����
	return v1 > v2;
}

void test145_2()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);
	//����
	cout << "����ǰ��" << endl;
	printList145(L1);

	//���в�֧��������ʵ����������������������ñ�׼�㷨
	//��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ�㷨
	//sort(L1.begin(), L1.end());  
	 
	L1.sort();    //Ĭ��������򣬴�С��������
	cout << "�����:" << endl;
	printList145(L1);

	L1.sort(myCompare);    //��������
	printList145(L1);

}
int main146()
{
	test145_2();
	system("pause");
	return 0;
}