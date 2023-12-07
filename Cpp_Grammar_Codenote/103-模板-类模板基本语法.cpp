/*
	��ģ������
	����һ��ͨ���࣬���еĳ�Ա���������Ϳ��Բ����嶨�ƣ���һ�����������������

	�﷨��
	template ---��������ģ��
	typename --- �������ķ�����һ���������ͣ�������class����
	T ---ͨ�õ��������ͣ� ���ƿ����滻��ͨ��Ϊ��д��ĸ

	�ܽ᣺��ģ��ͺ���ģ���﷨���ƣ�������ģ��template������࣬�����Ϊ��ģ��
*/
#include <iostream>
#include <string>
using namespace std;

//��ģ��
template<class NameType, class Agetype>
class Person
{
public:
	Person(NameType name, Agetype age)   //�вι��캯��
	{
		this->m_Name = name;
		this->m_Age = age; 
	}
	void showPerson()  
	{
		cout << "name: " << this->m_Name << "\tage: " << this->m_Age << endl;
	}
	NameType m_Name;
	Agetype m_Age;
};

void test103_1()
{
	//���Ͳ�����
	Person<string, int> p1("�����", 999);
	p1.showPerson();
}
int main103()
{
	test103_1();
	system("pause");
	return 0;
}