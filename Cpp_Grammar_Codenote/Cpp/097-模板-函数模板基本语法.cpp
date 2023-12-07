/*
	C++�ṩ����ģ����ƣ�����ģ�����ģ��

	����ģ�����ã�
	����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ�����ָ����
	��һ�����������������

	�﷨��
	template<typename T>
	������������

	template -----��������ģ��
	typename -----�������ķ�����һ���������ͣ�������class����
	T -------ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ


*/
#include <iostream>
using namespace std;

//���������������ͺ���
void swapInt(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp; 
}

//�������������ͺ���
void swapfloat(float& a, float& b)
{
	double temp = a;
	a = b;
	b = temp; 
}

//����ģ��
template<typename T> //����һ������ģ�棬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void mySwap(T& a, T& b)    //���Ͳ�����  ��߸�����
{
	T temp = a;
	a = b;
	b = temp; 
}

int main97()
{
	int a = 10;
	int b = 20; 

	float c = 0.1;
	float d = 0.2;

	cout << "a = " << a << "\t b = " << b << endl;
	cout << "c = " << c << "\t d = " << d << endl;
	cout << "��ͳ��������" << endl; 
	swapInt(a, b);
	cout << "a = " << a << "\t b = " << b << endl;
	swapfloat(c, d);
	cout << "c = " << c << "\t d = " << d << endl;

	cout << endl;


	cout << "a = " << a << "\t b = " << b << endl;
	cout << "c = " << c << "\t d = " << d << endl;
	cout << "ʹ�ú���ģ����н���" << endl;
	//���ַ�ʽʹ��ģ�� 
	//1���Զ������Ƶ�   ��Ϊ�����a, b��int�ͣ����Ա������������Ƶ���int
	mySwap(a, b);  
	cout << "a = " << a << "\t b = " << b << endl;
	//2����ʽָ������
	mySwap<float>(c, d);
	cout << "c = " << c << "\t d = " << d << endl;

	system("pause");
	return 0;

}