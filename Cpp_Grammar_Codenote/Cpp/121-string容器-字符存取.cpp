/*
	string�е����ַ���ȡ��ʽ������
	char& operator[](int n); //ͨ��[]��ʽȡ�ַ�
	char& at(int n);         //ͨ��at��ʽ��ȡ�ַ�

*/

#include<iostream>
#include<string>
using namespace std;


//string�ַ���ȡ
void test121()
{
	string str = "hello";
	//1.ͨ��[]���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl; 

	//2.ͨ��at��ʽ���ʵ����ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " " ; 
	}
	cout << endl;

	//�޸ĵ����ַ�
	str[0] = 'x'; //xello
	cout << "str = " << str << endl;

	str.at(1) = 'x'; //xxllo
	cout << "str = " << str << endl; 
}

int main121()
{
	test121();
	system("pause");
	return 0;    
}