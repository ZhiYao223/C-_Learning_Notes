/*
	��ģ����ļ���д
	ѧϰĿ�꣺������ģ���Ա�������ļ���д�����������Լ������ʽ

	����:
	��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
	�����
	�����ʽ1��ֱ�Ӱ���.cpp�ļ�
	�����ʽ2����������ʵ��д��ͬһ���ļ�

	��ģ���еĳ�Ա��������ʱ�����ڵ��ý׶Σ�һ��ʼ������������Ҫôֱ�Ӱ�����ģ��ʵ�ֵ�Դ�ļ�
	Ҫô��.h��.cpp�ļ�����ģ��������ʵ��д��ͬһ��.hpp�ļ��С�
*/
#pragma once
#include <iostream>
using namespace std;
#include <string>

#include "109-��ģ����ļ���дPerson.cpp"
//��ģ����ļ���д���⼰���
//template <class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template <class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template <class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
//}

void test109()
{
	//���ϵ�16��.cppԴ�ļ���Ϊ���ñ���������.cppԴ�ļ��е���ģ��ʵ��
	//����������ģ�崴��ʱ�����⣬�������лᱨ��
	Person<string, int> p("Jerry", 18);    
	p.showPerson();
}

int main109()
{
	test109();
	system("pause");
	return 0;
}














