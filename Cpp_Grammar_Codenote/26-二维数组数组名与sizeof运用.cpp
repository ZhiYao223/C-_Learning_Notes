//�鿴��ά������ռ�ڴ�ռ�
//��ȡ��ά�����׵�ַ
#include <iostream>
using namespace std;
int main26()
{
	//��ά����������;
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	//�鿴һ����ռ�ڴ�ռ�
	cout << "��ά�����һ����ռ�ڴ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;

	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά�����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.���Բ鿴��ά������׵�ַ
	cout << "��ά�����׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַ��" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;

	//arr[0][0]��ʾһ����������Ҫȡ��ַ�����&�ַ�
	cout << "��ά�����һ��Ԫ���׵�ַ��" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַ��" << (int)&arr[0][1] << endl;

	system("pause");
	return 0;
}