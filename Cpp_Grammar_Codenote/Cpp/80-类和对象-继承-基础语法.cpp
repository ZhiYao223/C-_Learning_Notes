/*
���ÿ�����Ա������ʾ���߲鿴����ģ��
��ת�̷� F :
��ת�ļ�·��cd������·����
�鿴���� c1 / d1 reportSingleClassLayout����
*/
//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//������˽�г�Ա���ԣ��Ǳ��������������ˣ�����Ƿ��ʲ�������ȷʵ���̳���ȥ��

#include <iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10; //�����еĹ���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ��
		m_B = 10; //�����еİ���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		//m_C = 10; //�����е�˽��Ȩ�޳�Ա��������ʲ���
	}
};

void test79_1()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100; //��Son1��m_B�Ǳ���Ȩ�ޣ�������ʲ���
}
//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100; //�����й�����Ա���������б�Ϊ����Ȩ��
		m_B = 100; //�����б�����Ա���������б�Ϊ����Ȩ��
		//m_C = 100; //������˽�г�Ա��������ʲ���
	};
};

void test79_2()
{
	Son2 s1;
	//s1.m_A = 100; //��Son2�У�m_A��Ϊ����Ȩ�ޣ����������ʲ���
	//s1.m_B = 100; //��Son2�У�m_B��Ϊ����Ȩ�ޣ������Է���
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//���м̳�
class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;   //�����й�����Ա���������б�Ϊ ˽�г�Ա
		m_B = 100;   //�����б�����Ա���������б�Ϊ ˽�г�Ա
	   //m_C = 100;   //������˽�г�Ա��������ʲ���
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 1000; //����Son3�У�m_A��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
		//m_B = 1000; //����Son3�У�m_A��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 1000;  //��Son3�У���Ϊ˽�г�Ա��������ʲ���
	//s1.m_B = 1000;   //��Son3�У���Ϊ˽�г�Ա��������ʲ���
}

int main80()
{

	system("pause");
	return 0;
}
