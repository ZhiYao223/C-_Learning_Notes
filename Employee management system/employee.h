//��ͨԱ���ļ�, ����Worker�������
#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

class Employee :public Worker
{ 
	
public:
	Employee(int id, string name, int dID);  //���ù��캯����ʼ����ͨԱ�����ϵ�����: ְ����š����֡����ű��

	//������д�����еĴ��麯��/�麯��, virtual�������п�ɾ�ɲ�ɾ
	virtual void showInfo(); //��ʾ������Ϣ
	virtual string getDeptName(); //��ȡ��λ����

	
};