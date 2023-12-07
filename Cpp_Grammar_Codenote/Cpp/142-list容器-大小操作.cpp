/*
		����ԭ��:
		size();				//����������Ԫ�صĸ���
		empty();			//�ж������Ƿ�Ϊ��
		resize(num);		//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
					//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
		resize(num,elem);	//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
					//���������̣���δβ�����������ȵ�Ԫ�ر�ɾ��.

*/
#include<list>
#include <iostream>
using namespace std;

void printList142(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}

//��С����
void test142()
{ 
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	if (L1.empty())
	{
		cout << "L1Ϊ��!" << endl; 
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
	}

	//����ָ����С
	L1.resize(10);
	printList142(L1);

	L1.resize(15, 100);
	printList142(L1);
	
	L1.resize(2);
	printList142(L1);

}

int main142()
{
	test142();
	system("pause");
	return 0;
}