/*
	�����������
	���غ������ò��������࣬����󳣳�Ϊ��������
	��������ʹ�����ص�() ʱ����Ϊ���ƺ������ã�Ҳ�зº���
	���ʣ��������󣨷º�������һ���࣬����һ������

	��������ʹ�ã�
	�ص㣺
	����������ʹ��ʱ����������ͨ������������,�����в����������з���ֵ
	�������󳬳���ͨ�����ĸ����������������Լ���״̬
	�������������Ϊ��������
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2; 
	}

};


//�������󳬳���ͨ�����ĸ�� ��������������Լ���״̬
class MyPrint
{
public:
	MyPrint()    //���캯��
	{
		this->count = 0;
	}
	void operator()(string test)     
	{
		cout << test << endl;
		this->count++;  //ͳ�Ƶ��ô���
	}
	int count;  //��¼�ڲ�״̬
};

//����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test163_1()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

void test163_2()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "myPrint���ô���Ϊ��" << myPrint.count << endl;
}
//�������������Ϊ�����˶�
void doPrint(MyPrint& mp, string test)
{
	mp(test);   //����
}

void test163_3()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}

int main163()
{
	test163_1();
	test163_2();
	test163_3();
	system("pause");
	return 0;
}