/*
	����ԭ��:
			push_back(elem);//������β������һ��Ԫ�ء�
			pop_back();//ɾ�����������һ��Ԫ�ء�
			push_front(elem);//��������ͷ����һ��Ԫ�ء�
			pop_front();//��������ͷ�Ƴ���һ��Ԫ��
			insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ��.
			insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
			insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
			clear();//�Ƴ���������������
			erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
			erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
			remove(elem);//ɾ��������������elemֵƥ���Ԫ��			
*/

#include<iostream>
#include<list>
using namespace std;

void printList144(list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl; 
}

void test144()
{
	list<int> L;
	L.push_front(30);
	L.push_front(20);
	L.push_front(10);
	L.push_back(40);
	L.push_back(50);
	L.push_back(60);
	//10 20 30 40 50 60 
	printList144(L);        
	
	L.push_front(0);
	L.push_back(0);
	printList144(L);  //0 10 20 30 40 50 60 0

	L.pop_front();   //ͷɾ
	L.pop_back();    //βɾ
	printList144(L);  //10 20 30 40 50 60 

	L.insert(L.begin(), 100);   //��begin()����Ԫ��  �����������ݵ�λ��
	L.insert(L.end(), 100);     //��end()����Ԫ��    �����������ݵ�λ��
	printList144(L);			//100 10 20 30 40 50 60 100 

	list<int>L1{ 1,2,3 };			//����list��������ʼ��
	L.insert(L.begin()++, 3, 200);	//������L�ĵ�һ��Ԫ�ش�����3��100
	L.insert(L.begin(), L1.begin(), L1.end()); //��L1�д�ͷ��β�����ݲ���L�ĵ�һ��Ԫ��λ��
	printList144(L);				//1 2 3 100 100 100 10 20 30 40 50 60 100

    L.erase(L.begin());   //ɾ����һ��Ԫ��
	L.erase(--L.end());   //ɾ�����һ��Ԫ�أ�L.end()��ʾβ��ָ�룬ָ�����һ��Ԫ�ص���һ��λ�ã����Դ˴�������L.end()��������һ��λ�ò��Ǵ洢���һ��Ԫ��
	printList144(L);       //2 3 100 100 100 10 20 30 40 50 60 
	
	//ɾ��������ĳһ�����Ԫ��   ������������ʹ��ָ���һ��Ԫ��
	list<int>::iterator it = L.begin();
	L.erase(it, next(it, 2));    //ɾ��ǰ����Ԫ�� ����next(it, 2)��ʾ����itָ��ĵ�ַ����ڶ���Ԫ�صĵ�����ָ���ַ  ��2 3
	printList144(L);         //200 200 200 100 10 20 30 40 50 60 

	L.remove(100);    //ɾ�����������е�100
	printList144(L);  //200 200 200 10 20 30 40 50 60 

	//ɾ��10 20 30 
	list<int>::iterator first = next(L.begin(), 3); //ȡ�ڶ���Ԫ�صĵ�����
	list<int>::iterator last = next(L.begin(), 6); //ȡ�����Ԫ�صĵ�����
	L.erase(first, last);    //ɾ�����䷶Χ�ڵ�Ԫ��
	printList144(L);    //200 200 200 40 50 60 

	L.remove(200);
	printList144(L);

	L.clear();
	printList144(L);


}

int main144()
{
	test144();
	system("pause");
	return 0;
}



