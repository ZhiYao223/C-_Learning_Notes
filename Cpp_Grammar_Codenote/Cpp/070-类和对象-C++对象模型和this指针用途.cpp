#if 0
��Ա�����ͳ�Ա�����Ƿֿ��洢��
thisָ��ͨ���ṩ����Ķ���ָ�룬thisָ�룬����������⣬thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
this ָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
this ָ�벻��Ҫ���壬ֱ��ʹ�ü���
��;��
1.���βκͳ�Ա����ͬ��ʱ��������thisָ��������
2.����ķǾ�̬��Ա�����з��ض�������ʹ��return *this
thisָ��ѧϰ���ӣ�
http://c.biancheng.net/view/2226.html
https://blog.csdn.net/qq_21989927/article/details/111474451
#endif

#if 0
#include <iostream>
using namespace std;

class People
{
public:
	People(int age) 
	{
		//age = age;  //������age�ϣ���Ӱ��ʾ������age��ͬһ�����������
		this->age = age;//thisָ��ָ�����p1,  ͨ��this�����������������18
	}
	//����ָ�����ڴ棬�������þ͵��ÿ�������������ָ����һ���ڴ棬�������õĻ� \
	//�صľͲ���p2�ˣ����Ǳ��people����(ֻ��age����20)
	//������ֵPeople�Ļ����൱�ڴ�����һ���¶���ͬʱ�����˿������캯��
	People& PeopleAddage(People &p)
	{
		this->age += p.age; 
		return *this;  //����p2�������ı���
		//�ĳ�return this; ������������People* ���������.�ĳ�->Ҳ����
	}
	int age;
};

//1.������Ƴ�ͻ
void test08()
{
	People p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}
//2.���ض�������*this
void test8()
{
	People p1(10);
	People p2(10);
	//p2.PeopleAddage(p1);  //��p1������ӵ�p2����
	p2.PeopleAddage(p1).PeopleAddage(p1).PeopleAddage(p1);//��ʽ���˼��
	cout << "p2������Ϊ��" << p2.age << endl;
}
int main()
{
	test08();
	test8();
	system("pause");
	return 0;
}
#endif

#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	void setname(string name);
	void setage(int age);
	void setscore(float score);
	void show();
private:

	string name = " ";
	int age = 0;
	float score = 0;
};

void Student::setname(string name) {
	this->name = name;
}
void Student::setage(int age) {
	this->age = age;
}
void Student::setscore(float score) {
	this->score = score;
}
void Student::show() {
	cout << this->name << "��������" << this->age << "���ɼ���" << this->score << endl;
}

int main70() {
	Student* pstu = new Student;
	pstu->setname("�");
	pstu->setage(16);
	pstu->setscore(96.5);
	pstu->show();

	return 0;
}




