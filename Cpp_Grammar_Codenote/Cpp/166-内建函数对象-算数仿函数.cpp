/*
	STL
	��������:
ʵ����������:
����negate��һԪ���㣬�������Ƕ�Ԫ����º���ԭ��:
template<class T> T plus<T> //�ӷ��º���

template<class T> T minus<T>//�����º���

template<class T> T multiplies<T>//�˷��º���

template<class T> T divides<T>//�����º���

template<class T> T modulus<T>//ȡģ�º���

template<class > T negate<T>//ȡ�� �º���
*/
#include<iostream>
#include<functional>
using namespace std;
//negate
void test166_1()
{
	negate<int> n;
	cout << n(50) << endl; 
}
//plus
void test166_2()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

int main166()
{
	test166_1();
	test166_2();
	system("pause");
	return 0;
}