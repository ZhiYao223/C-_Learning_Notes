/*
string& operator+=(const char* str);//����+=������
string& operator+=(const char c);//����+=������
string& operator+=(const string& str);//����+=������
string& append(const char *s);//���ַ���s���ӵ���ǰ�ַ�����β
string& append(const char *s, int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β,һ��������2���ַ�
string& append(const string &s);//ͬoperator+=(const string& str)
string& append(const string &s��int pos��int n); //�ַ�s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

*/
#include<iostream>
#include<string>
using namespace std;

void test118()
{
	string str0 = "�໨�� ����";
	string str1 = "��";
	str1 += "ϲ��";
	//��ϲ��
	cout << "str1 = " << str1 << endl;
	
	//��ϲ����
	str1 += ':';
	cout << "str1 = " << str1 << endl;
	
	string str2 = "�ܽ��� �ĸ�";
	
	str1 += str2; 
	cout << "str1 = " << str1 << endl; 
	
	string str3 = "����";
	str3.append("��");
	cout << "str3 = " << str3 << endl; //���磺

	str3.append("�໨�� ����", 6); //��ȡǰ6���ַ������໨�������֣���6���ַ��ӵ�str3����
	//���磺�໨��
	cout << "str3 = " << str3 << endl; 
	//ֻ��ȡ���㣬�����ӵ��߸��ַ�(�ո�)��һλ��ʼ��ȡ4���ַ�
	str3.append(str0, 7, 4); //�ӵ�6���ַ�(��)��ʼȡ5�������� ���㡱��
	//���磺�໨�� ����
	cout << "str3 = " << str3 << endl; 

	string str4 = "I love ";
	string str5 = "qinghuaci";
	str4.append(str5); //I love qinghuaci
	cout << "str4 = " << str4 << endl;


	
}

int main118()
{
	test118();
	system("pause");
	return 0;
}