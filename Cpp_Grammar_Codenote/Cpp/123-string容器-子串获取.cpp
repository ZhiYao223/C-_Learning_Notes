/*
	���ַ����л�ȡ��Ҫ���Ӵ�
	����ԭ�ͣ�
	string substr(int pos = 0; int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���
*/
#include<iostream>
#include<string>
using namespace std;

//�Ӵ���ȡ
void test123_1()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl; 
}

//ʵ�ò���   //��ȡ����ǰ�������
void test123_2()
{
	string email = "zhiyao@sina.com";
	//���ʼ���ַ�л�ȡ�û�����Ϣ
	int position = email.find("@");
	cout << "position = " << position << endl;   //position = 8
	string userName = email.substr(0, position); //��0��ʼ�����position���ַ�
	cout << "userName = " << userName << endl; 
}


int main123()
{
	test123_1();
	test123_2();
	system("pause");
	return 0;
}