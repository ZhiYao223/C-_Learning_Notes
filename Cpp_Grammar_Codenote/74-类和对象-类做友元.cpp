//��Ԫ��⣺http://c.biancheng.net/view/2233.html
#if 0
#include <iostream>
using namespace std;
#include <string>

class Student{ 
public:
	Student(const char *name, int age, float score);
public:
	friend void show(Student* pstu);
private:
	const const char* m_name;
	int m_age;
	float m_score;
};

Student::Student(const char *name, int age, float score) :m_name(name), m_age(age), m_score(score) {}

//�ǳ�Ա����
void show(Student* pstu) {
	cout << pstu->m_name << "��������" << pstu->m_age << ", �ɼ���" << pstu->m_score << endl;
}

int main74()
{
	Student stu("С��", 15, 90.6);
	show(&stu);//������Ԫ����
	Student* pstu = new Student("����", 16, 80.3);
	show(pstu);  //������Ԫ����

	system("pause");
	return 0;
}

#endif

#if 0
#include <iostream>
using namespace std;
#include <string>
class Building
{
	friend class GoodGay; //���߱�������goodgay����Building��ĺ��ѣ����Է��ʵ�Building���е�˽������
public:
	Building();//���캯�� 
public:
	string m_SittingRoom;  //����d
private:
	string m_BedRoom; //����
};

class GoodGay
{
public:
	GoodGay();
	void visit();//�ιۺ��� ����Building�е�����
	
private:
	Building* building;

};

//����д��Ա����
Building::Building()
{
	string m_SittingRoom = "����";
	string m_BedRoom = "����";
}
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}
void GoodGay::visit()
{
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl; 
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;

}
void test74()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test74();
	system("pause");
	return 0;
}
#endif