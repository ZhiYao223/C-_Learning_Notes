#include "manager.h"

Manager::Manager(int id, string name, int dID)//���캯��
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = dID;
}
void Manager::showInfo()//��ʾ������Ϣ      //��д�����еĴ��麯��
{
	cout << "ְ����ţ� " << this->m_ID
		<< "\tְ�������� " << this->m_Name
		<< "\tְ����λ�� " << this->getDeptName()    //�����this->DeptID����int�����ָ�λû�����壬���Ե���getDeptName()��ȡ��λ����
		<< "\t��λְ�� ����ϰ彻�������񣬲��·������Ա��" << endl;
}
string Manager::getDeptName()//��ȡ��λ����
{
	return string("����");
}