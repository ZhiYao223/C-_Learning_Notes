#include <iostream>
using namespace std;
#include <string>
//1.�ṹ�嶨��
struct Student
{
	//��Ա�б�
	//����
	string name;
	//����
	int age;
	//����
	int score;
};


int main38()
{
	//struct �ṹ���� ������[Ԫ�ظ���] = { {}, {}, {}, {}}
	//2.�����ṹ������
	struct Student stuArray[3] = {
		{"����",18 ,100},
		{"����",20 ,99},
		{"����",23, 88}
	};
	//3.���ṹ�������е�Ԫ�ظ�ֵ(�޸�����Ԫ��)
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������ " << stuArray[i].name
			 << "���䣺 " << stuArray[i].age 
			 << "����:  " << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}