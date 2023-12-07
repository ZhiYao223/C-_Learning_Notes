/*

int find(const string& str, int pos = 0) const;//����str��һ�γ���λ��,��pos��ʼ����
int find(const char*s, int pos = 0) const;//����s��һ�γ���λ��,��pos��ʼ����
int find(const char* s, int pos, int n) const;//��posλ�ò���s��ǰn���ַ���һ��λ��
int find(const char c, int pos = 0) const;//�����ַ�c��һ�γ���λ��
int rfind(const string& str, int pos = npos) const;//����str���һ��λ��,��pos��ʼ����
int rfind(const char* s, int pos = npos) const;//����s���һ�γ���λ��,��pos��ʼ����
int rfind(const char* s, int pos, int n) const;//��pos����s��ǰn���ַ����һ��λ��
int rfind(const char c, int pos = 0) const;//�����ַ�c���һ�γ���λ��
string& replace(int pos, int n, const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
string& replace(int pos, int n,const char* s);//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s

find�����Ǵ�������rfind��������
find�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���

*/
#include <iostream>
#include <string>
using namespace std;

//�ַ������Һ��滻

//1������
void test119_1()
{
	//�����ַ����г���"df"��λ�ã���0    ���3
	string str1 = "bcabcdefgde";         
	int position = str1.find("def");  //�������Ҳ飬������λ�������һ��de��c���棩��λ��Ϊposition = 3
	
	if (position == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;  
	}
	else
	{
		cout << "�ҵ��ַ�����position = " << position << endl; 
	}

	//rfind����������ң� find�������Ҳ���
	position = str1.rfind("de");  //��������飬����һ������de��g���棩����������λ���������������position = 7
	cout << "position = " << position << endl;  //���������һ��de��λ���±�
}

//2���滻
void test119_2()
{
	string str1 = "abcdefg";   //1~3λ��abc�滻Ϊ1111  ��� a1111efg  ��4��1ȫ���滻��������ֻ��3��1
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl; 
}
//�滻
void test119_3()
{
	string str1 = "abcdef";
	string str2 = "ghijk";
	str1.replace(0, 2, str2);  //�ӵ�0��λ�ÿ�ʼ��2���ַ�ab,�滻Ϊghijkk  ���ghijkcdef
	cout << "str1 = " << str1 << endl;
}

int main119()
{
	test119_1();
	test119_2();
	test119_3();

	system("pause");
	return 0;
}