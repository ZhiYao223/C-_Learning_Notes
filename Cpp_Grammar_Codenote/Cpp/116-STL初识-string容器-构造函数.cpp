/*
 string��������
`����:
`string��C++�����ַ�������string��������һ����string��char*����:
`char*��һ��ָ��
`string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵��������ص�:
`string���ڲ���װ�˺ܶ��Ա����
`����: ����find������copy��ɾ��delete �滻replace������insert
`string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���


 string���캯��
`���캯��ԭ��:
`string();                    //����һ���յ��ַ��� ����: string str;
`string(const char* s);       //ʹ���ַ���s��ʼ��
`string(const string& str);   //ʹ��һ��string�����ʼ����һ��string����
`string(in n, char c); ```````//ʹ��n���ַ�c��ʼ��


*/
#include<iostream>
using namespace std;
#include <string>

void test116()
{
	string s1; //�������ַ����������޲ι��캯��
	cout << "str1 = " << s1 << endl; 

	const char* str = "hello, world";
	string s2(str);  //��c_stringת����string
	cout << "s2 = " << s2 << endl;

	string s3(s2);  //���ÿ������캯��
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << 4 << endl; 
}

int main116()
{
	test116();
	system("pause");
	return 0;
}