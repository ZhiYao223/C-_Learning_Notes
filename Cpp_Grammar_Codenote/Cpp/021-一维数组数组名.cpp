#include <iostream>
using namespace std; 
int main21()
{
	//1.����ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,19 };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "ÿ��������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0])<< endl;   ///sizeof(arr[0]

	//2.����ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;//���ڵ�ַ���4���ֽ�
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	system("pause");
	return 0;
}