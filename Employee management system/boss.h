#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//�ϰ���
class Boss :public Worker
{
public:
	Boss(int id, string name, int dID);//���캯��

	virtual void showInfo();//��ʾ������Ϣ      //��д�����еĴ��麯��

	virtual string getDeptName();//��ȡ��λ����
};