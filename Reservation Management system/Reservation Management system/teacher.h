#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "Identity.h"

//��ݵ�������Teacher��
class Teacher :public Identity
{
public:
	int m_EmpId;	//��ʦ���
	//Ĭ�Ϲ��캯��
	Teacher();

	//�вι��캯�� (ְ����š�����������)
	Teacher(int empId, string name, string pwd);

	//��ʦ�����Ĳ˵�����
	virtual void operMenu();

	//���ԤԼ
	void validOrder();

	//�鿴����ԤԼ
	void showAllOrder();
						
};