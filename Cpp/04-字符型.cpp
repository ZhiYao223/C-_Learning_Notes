#include <iostream>

using namespace std;

int main4()
{
	char ch = 'a';  //�����ַ��õ�����
	cout << ch << endl;
	cout << "char�ַ��ͱ�����ռ�ڴ�ռ䣺" << sizeof(char) << endl;

	//char ch2 = "abcdef"//��������ֻ�ܷ�һ���ַ�

	cout << (int)ch << endl; //ǿ������ת����ASCII��
	ch = 97;                 //����ֱ����ASCII����ַ��ͱ�����ֵ
	cout << ch << endl;      //���97��Ӧ���ַ�

	system("pause");

	return 0;
}

