/*
����ģ�������̳�ʱ����Ҫע�⣺
������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
�����ָ�����������޷�����������ڴ�
��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
�ܽ᣺�����������ģ�壬������Ҫָ����������T����������
*/

#include <iostream>

using namespace std;

template<class T>
class Base       //����
{
	T m;         //�����Ա
};

//class Son: public Base  //����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
class Son :public Base<int> //����ָ��һ������
{

};
void test107_1()
{
	Son c;     //����Son�̳и���Base ��ָ��Ϊint�� ��cΪint��
}


//��ģ��̳���ģ�壬��������T2ָ�������е�T����
template<class T1, class T2>     //�뽫����Son1��ͨ������ģ�棬��Ҫ��ǰ���template
class Son1 :public Base<T2>
{
public:
	Son1()    //���캯��
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;

	}
};
void test107_2()
{
	Son1<int, char> child;   //T1Ϊint  T2Ϊchar   char���ݸ���T2����T2�ִӸ���Base�̳У�����mΪchar����
}

int main107()
{
	test107_1();
	test107_2();
	system("pause");
	return 0;
}