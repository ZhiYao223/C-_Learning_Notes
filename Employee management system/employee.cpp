#include "employee.h"

Employee::Employee(int id, string name, int dID)  //���ù��캯����ʼ����ͨԱ�����ϵ�����
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = dID;
}

//������д�����еĴ��麯��/�麯��, virtual�������п�ɾ�ɲ�ɾ
void Employee::showInfo() //��ʾ������Ϣ
{
	cout << "ְ����ţ� " << this->m_ID
		<< "\tְ�������� " << this->m_Name
		<< "\tְ����λ�� " << this->getDeptName()    //�����this->DeptID����int�����ָ�λû�����壬���Ե���getDeptName()��ȡ��λ����
		<< "\t��λְ�� ��ɾ�����������" << endl; 
}
string Employee::getDeptName() //��ȡ��λ����
{
	return string("Ա��");

}