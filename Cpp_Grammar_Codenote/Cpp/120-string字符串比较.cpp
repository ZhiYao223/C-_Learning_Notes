/*
	�ַ����ǰ��ַ���ASCII����бȶԵ�
	= ���� 0
	> ���� 1
	< ���� -1

	int compare(const string &s) const; //���ַ���s�Ƚ�
	int compare(const char *s) const;   //���ַ���s�Ƚ�

*/
#include<iostream>
#include<string>
using namespace std;

//�ַ����Ƚ�
void test120()
{
	string str1 = "hello";
	string str2 = "hello";
	int returnvalue = str1.compare(str2);
	cout << "returnvalue = " << returnvalue << endl;  //��ȣ�����0


	//string str1 = "xello";
	//string str2 = "hello";
	//int returnvalue = str1.compare(str2);
	//cout << "returnvalue = " << returnvalue << endl;  //str1 > str2 ���� 1

	//string str1 = "hello";
	//string str2 = "xello";
	//int returnvalue = str1.compare(str2);
	//cout << "returnvalue = " << returnvalue << endl; //str1 < str2 ���� -1

	if (str1.compare(str2) == 0)
	{
		cout << "str1 ���� str2" << endl; 
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 ����str2" << endl; 
	}
	else
	{
		cout << "str1 С�� str2" << endl; 
	}

}
int main120()
{
	test120();
	system("pause");
	return 0;
}