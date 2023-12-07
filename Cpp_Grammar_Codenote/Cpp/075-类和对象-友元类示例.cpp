//��Ԫ��⣺http://c.biancheng.net/view/2233.html

#include <iostream>
using namespace std;
#include <string>
class Address; //��ǰ����Address��

//����Student��
class Student
{
public:
	Student(const char* name, int age, float score);
public:
	void show(Address *addr);
private:
	const char* m_name;
	int m_age;
	int m_score;
};


class Address
{
	friend void Student::show( Address* addr);
public:
	Address(const char* province, const char* city, const char* district);

private:
	const char* m_province; //ʡ��
	const char* m_city; //����
	const char* m_district;//����
};
//ʵ��Student��
Student::Student(const char* name, int age, float score) :
	m_name(name), m_age(age), m_score(score){}

void Student::show( Address *addr)
{
	cout << m_name << "�������ǣ� " << m_age << "  �ɼ���  " <<m_score;
	cout << "  ��ͥסַ�� " << addr->m_province << "ʡ" << addr->m_city << "��" << addr->m_district << "��" << endl;

}
//ʵ��Address��
Address::Address(const char* province, const char* city, const char* district) :
	m_province(province), m_city(city), m_district(district){}

int main75()
{
	Student stu("����",16,95.5f);
	Address addr("����", "����", "����");
	stu.show(&addr);

	Student* pstu = new Student("����", 16, 80.4);
	Address* paddr = new Address("�㶫", "��ɽ", "˳��");
	pstu->show(paddr);

	system("pause");
	return 0;
}

