//���ã�������������ͬ����߸�����
//����������������
//1.ͬһ���������£� main���main�ڣ�ȫ�ֻ�ֲ�
//2.��������ͬ
//3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//ע�⣺�����ķ���ֵ��������Ϊ�������ص�����

#include <iostream>
using namespace std;

void func()                                          //����һ
{
	cout << "func�ĵ���!" << endl;
}
void func(int a)             //�������Ͳ�ͬ          //  ������
{
	cout << "func(int a)�ĵ��ã�" << endl; 
}
void func(double a)                                //������
{
	cout << "func(double a)�ĵ��ã�" << endl;
}
void func(int a, double b)       //����������ͬ        //������
{
	cout << "func(int a, double b)�ĵ��ã�" << endl;
}
void func(double a, int b)      //����˳��ͬ        //������
{
	cout << "func(double a, int b)�ĵ��ã�" << endl;
}
//int func(double a, int b)  //�����ķ���ֵ��������Ϊ�������ص�������void��int����    //������
//{
//	cout << "func(double a, int b)";
//}
int main53()
{
	func();      //���õ�һ������
	func(10);  //���õڶ�������
	func(3.14);//���õ���������
	func(10, 3.14); //���õ��ĸ�����
	func(3.14, 10); //���õ��������
	system("pause");
	return 0;
}