#pragma once
#include <iostream>
using namespace std;
#include <string>

//ְ��������
class Worker    //����
{
public:
	virtual void showInfo() = 0;//��ʾ������Ϣ   ���麯��

	virtual string getDeptName() = 0;//��ȡ��λ����   ���麯��

	int m_ID;//ְ�����

	string m_Name;//ְ������

	int m_DeptID;//���ű��
};