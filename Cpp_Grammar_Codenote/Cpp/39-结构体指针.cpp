#include <iostream>
using namespace std;
#include <string>
//�ṹ��ָ��
struct student
{
	string name; 
	int age;
	int score;
};

int main39()
{
	//1.����ѧ���ṹ�����
	struct student s = { "����", 18, 100 };

	//2.ͨ��ָ��ָ��ṹ�����
	//int* p = &s;      //error
	student *  p = &s;  //pΪ�ṹ������ָ�����
	//3.ͨ��ָ����ʽṹ������е����� s.name   p->  �루*p)�ȼ�
	//ͨ���ṹ��ָ�룬���ʽṹ���е����ԣ���Ҫ����'->'
	cout << "������" << p->name << "  ���� " << p -> age << "  ������" << p->score << endl;

	system("pause");
	return 0;
}