#pragma once		//��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

//��ݳ��������,���������Ϊ����Ա��ѧ������ʦ��  
class Identity
{
public:
	//�����˵�		���麯�������������д���麯��
	virtual void operMenu() = 0;

	string m_Name;		//�û���
	string m_Pwd;		//����
};
