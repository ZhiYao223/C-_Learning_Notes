#include <iostream>
using namespace std;
#include <string>
//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct teacher
{
	int id;     //��ʦ���
	string name;//��ʦ����
	int age;     //��ʦ����
	struct student stu;   //������ѧ��
};

int main40()
{
	//�ṹ��Ƕ�׽ṹ
	//������ʦ
	//
	teacher t;      //������ʦ�ṹ�����
	t.id = 10000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";//��ʦ��ѧ������
	t.stu.age = 20;     //��ʦѧ������ 
	t.stu.score = 80;   //��ʦѧ������
	
	cout << "��ʦ������ " << t.name << "  ��ʦְ����ţ� " << t.id << "  ��ʦ���䣺 " << t.age
		<< "  ��ʦ������ѧ�������� " << t.stu.name << "  ѧ������ " << t.stu.age
		<< "  ѧ�����Է�����" << t.stu.score << endl;

	system("pause");
	return 0;
}
//�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������