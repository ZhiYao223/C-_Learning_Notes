#include <iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl; 
	}

};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl; 
	}
};

template<class T>
class MyClass
{
	T obj;
	//��ģ���еĳ�Ա������������һ��ʼ�ʹ����ģ�������ģ�����ʱ������
	void func1() { obj.showPerson1(); }
	void func2() { obj.showPerson2(); }
};

void test104()
{
	MyClass<Person1> m;
    //m.func1();
	//m.func2();
   
	//m.func2() ��������˵���������òŻ�ȥ������Ա����
}
int main105()
{
	test104();
	system("pause");
	return 0;
}