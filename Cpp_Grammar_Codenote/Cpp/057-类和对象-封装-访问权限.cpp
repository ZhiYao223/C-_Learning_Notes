#include <iostream>
using namespace std;

//����Ȩ��  ���֣�
//����Ȩ�� public		��Ա ���ڿ��Է���	������Է���
//����Ȩ�� protected		��Ա ���ڿ��Է��� ���ⲻ���Է���	���ӿ��Է��ʸ����еı������ݣ�������
//˽��Ȩ�� private		��Ա ���ڿ��Է��� ���ⲻ���Է���	���Ӳ����Է��ʸ����е�˽�����ݣ������п���
//

class Person
{
public:
	//����Ȩ��
	string m_Name;	//����

protected:
	//����Ȩ��
	string m_Car;   //����

private:
	//˽��Ȩ��
	int m_Password;  //���п�����

private:
	void func()
	{
		m_Name = "����";
		m_Car = "����";
		m_Password = 123456;
	}
public:
	void func2()
	{
		;
	}
};

int main57()
{
	//ʵ�����������
	Person p1;
	p1.m_Name = "����";
	//p1.m_Car = "����"; //��������Ȩ�����ݣ���������ʲ���
	//p1.Password = 112233;//����˽��Ȩ�����ݣ���������ʲ���

	//p1.func(); //����������˽�����ݣ������޷����ʵ���
	p1.func2();//�����ڹ������ݣ�������Է��ʵ���
	system("pause");
	return 0;
}