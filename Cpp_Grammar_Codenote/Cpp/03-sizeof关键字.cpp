#include <iostream>

using namespace std;

int main3()
{
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;
	
	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;

	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long ռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;

	float f1 = 4.1415926f;//��ĩf��ʾfloat����
	cout << "f1 = " << f1 << endl;

	double d1 = 3.1515926;
	cout << "d1 = " << d1 << endl;

	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(float) << endl;
	
	cout << "doubleռ���ڴ�ռ�Ϊ: " << sizeof(double) << endl;

	float f2 = 3e2f;// 3*10^2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;//3*10^(-2);
	cout << "f3 = " << f3 << endl;

	system("pause");
	
	return 0;
}