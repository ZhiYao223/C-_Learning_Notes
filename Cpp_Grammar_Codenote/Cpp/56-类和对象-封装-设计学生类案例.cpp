#if 0
#include <iostream>
#include <string>
using namespace std;
//��ĳ�Աһ���m_ǰ׺(member),���������ر�ʾ����һ����ĳ�Ա
class Student
{
public:   //����Ȩ�ޣ����е����Ժ���Ϊ��ͳһ��Ϊ��Ա
	//���ԣ� ������ѧ��
	//���ԣ���Ա���ԣ���Ա����
	//��Ϊ����Ա��������Ա����
	string m_name;
	int m_ID;
	//��Ϊ����ʾ������ѧ��
	void ShowStudent()
	{
		cout << "������" << m_name << "\tѧ�ţ�" << m_ID << endl;
	}

	//��������ֵ
	void setname(string name)
	{
		m_name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setID(int ID)
	{
		m_ID = ID;
	}
private:
};


int main56()
{
	//����һ�������ѧ��
	Student s1;
	//��s1���󣬽������Ը�ֵ����
	s1.m_name = "����";   //������ֵ
	s1.m_ID = 1;          //ID��ֵ
	s1.ShowStudent();     //��ʾѧ����Ϣ

	Student s2;
	s2.m_name = "����";    //������ֵ
	s2.m_ID = 2;          //ID��ֵ
	s2.ShowStudent();     //��ʾѧ����Ϣ

	Student s3;
	s3.setname("����");   //������ֵ
	s3.setID(3);          //ID��ֵ
	s3.ShowStudent();     //��ʾѧ����Ϣ
	system("pause");
	return 0;
}

#endif