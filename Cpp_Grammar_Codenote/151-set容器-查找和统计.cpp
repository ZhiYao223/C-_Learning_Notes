/*
	��set�������в������ݼ�ͳ������

	����ԭ�ͣ�
	find(key);  //����key�Ƿ���ڣ������ڷ��ظü���Ԫ�صĵ����������򣬷���set.end();
	count(key);  //ͳ��key��Ԫ�ظ���   ͳ�ƽ���޷���0��1 ��Ϊset�Ͳ��ܲ����ظ�Ԫ��

	
*/
//���Һ�ͳ��
#include <iostream>
#include<set>
using namespace std; 

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl; 
}
void test151_1()
{
	//����
	set<int> s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	int elem = 30;
	set<int>::iterator pos = s1.find(elem); 
	if (pos != s1.end())  //�����ص�λ�ò�ָ��end(),˵���ҵ���Ԫ��
	{
		cout << "�ҵ�Ԫ��:" << *pos << endl;    //������ص�ַ�����Ԫ������
	}
	else
	{
		cout << "δ�ҵ�Ԫ�أ�" << endl; 
	}

}
void test151_2()
{
	//����
	set<int> s1;
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	//ͳ��30�ĸ���
	int num = s1.count(30);
	cout << "num = " << num << endl;   // ��Ȼ��3��30����set���ܲ�����ͬԪ�أ�����������num����1
}

int main151()
{
	test151_1();
	test151_2();
	system("pause");
	return 0;
}