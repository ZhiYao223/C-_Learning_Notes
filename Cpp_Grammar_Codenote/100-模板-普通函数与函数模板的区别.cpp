/*
	��ͨ��������ʱ���Է����ֶ�����ת��(��ʽ����ת����
	����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
	���������ʾ�ƶ����͵ķ�ʽ�����Է�����ʽ����ת��
*/

#include <iostream>

using namespace std;

//����ģ��
template<class T>
T myAdd02(T a, T b)
{
	return a + b; 
}

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b; 
}
void test100_1()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl; //c���Զ�תΪ99 �ټ�10 ���Ϊ109
	
	//�Զ������Ƶ�  ���ᷢ����ʽ����ת��
	//cout << myAdd02(a, b) << endl;  //���Ϊ30
	//cout << myAdd02(a, c) << endl;  //��������ģ�治���Զ����ַ�cת��ΪASCII��
	
	//��ʾ�ƶ�����  �ᷢ����ʽ����ת��
	cout << myAdd02<int>(a, c) << endl; //����int���͵ģ��Զ�ת��int���ͣ�'c'Ϊ99������ת�����ͼ�����
}
 

int main100()
{
	test100_1();
	system("pause");
	return 0;
}