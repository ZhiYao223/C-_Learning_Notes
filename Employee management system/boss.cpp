#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int dID)  //���ù��캯����ʼ���ϰ����ϵ�����
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = dID;
}

void Boss::showInfo()//��ʾ������Ϣ      //��д�����еĴ��麯��
{
	cout << "ְ����ţ� " << this->m_ID
		 << "\tְ�������� " << this->m_Name
		 << "\tְ����λ�� " << this->getDeptName()    //�����this->DeptID����int�����ָ�λû�����壬���Ե���getDeptName()��ȡ��λ����
		 << "\t��λְ�� ����˾��������" << endl;
		
}

string	Boss::getDeptName()//��ȡ��λ����
{
	return string("�ܲ�");
}