#include <iostream>
using namespace std;


//ѧ���ṹ�嶨��
struct student
{
	string name;
	int age;
	int score;
};
//��ӡѧ����Ϣ�ĺ���
void printStudent1(struct student s)   //ֵ����
{
	s.age = 100;     //�޸�����
	cout << " �Ӻ����д�ӡ ������" << s.name << "  ����: " << s.age << "  ������" << s.score << endl;
}
//��ַ����
void printStudent2(struct student * p)//��s�ĵ�ַ���ݸ��ṹ��ָ�����p
{
	//ֵ������.name, ָ�봫����p->name
	p->name = 100;
	cout << "�Ӻ���2�� ������ " << p->name << "���䣺 " << p -> age << "������ " << p->score << endl;

}
int main41()
{
	//�ṹ����������������ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 90;

	printStudent1(s);   //ֵ����
	//printStudent2(&s);    //��ַ����
	cout << "main�����д�ӡ ������" << s.name << " ����: " << s.age << " ������" << s.score << endl;

	system("pause");
	return 0;
}

//ֵ���ݲ��ı�ʵ�Σ���ַ���ݸı�ʵ��