/*
	�����������ɶԳ��ֵ����ݣ����ö�����Է�����������

	���ִ�����ʽ��
	pair<type,type> p(value1, value2);
	pair<type,type> p = make_pair(value1, value2);
*/
#include<iostream>
#include<set>
using namespace std;

//����Ĵ���
void test153()
{
	//��һ�ַ�ʽ
	pair<string, int> p("Tom", 20);
	cout << "������" << p.first << "���䣺" << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("Jerry", 20);
	cout << "������" << p2.first << "���䣺" << p2.second << endl; 
}

int main153()
{
	test153();
	system("pause");
	return 0;
}