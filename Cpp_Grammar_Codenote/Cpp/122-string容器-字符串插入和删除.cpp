/*
	����������
	��string�ַ������в����ɾ���ַ�������
	
	����ԭ��
	string& insert(int pos, const char* s);  //�����ַ���
	string& insert(int pos, const string& str); //�����ַ���
	string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
	string& erase(int pos, int n = npos); //ɾ����pos��ʼ��n���ַ�

	//�����ɾ������ʼ�±궼�Ǵ�0��ʼ
*/
#include<iostream>
#include<string>
using namespace std;

//�ַ��� �����ɾ��

void test122()
{
	//����
	string str = "hello";
	str.insert(1, "111");
	//h111ello
	cout << "str = " << str << endl; 
	
	//ɾ��
	str.erase(1, 3);
	cout << "str = " << str << endl;  //ɾ���ӵ�1��λ����3���ַ�����ɾ��111 ���hello
}
int main122()
{
	test122();
	system("pause");
	return 0;
}
