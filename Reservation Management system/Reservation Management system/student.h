#pragma once
#include<iostream>
using namespace std;
#include "Identity.h"

//��ݵ�������Student��
class Student :public Identity
{
public:
	//ѧ��
	int m_id;

	//Ĭ�Ϲ��캯��
	Student();

	//�вι���(ѧ�š�����������)
	Student(int id, int name, string pwd);

	//�˵�����,�������д��麯���������б�����д
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOder();

	//�鿴����ԤԼ
	void showAllOrder();

};