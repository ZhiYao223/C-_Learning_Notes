#if 0
#include <iostream>
using namespace std;
#include <string>
#include <ctime>
//ѧ���Ľṹ��
struct Student
{
	string sName;
	int score;
};
//��ʦ�Ľṹ�嶨��
struct Teacher
{
	//����
	string tName;
	//ѧ������
	struct Student sArray[5];
	
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand()%61 + 40;   //40-99  0��60֮��������+ 40 ����0-100֮��
			tArray[i].sArray[j].score = random; 
		}
	}
}
//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ�������� " << tArray[i].sArray[j].sName
				<< "���Է����� " << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));

	//1.����3����ʦ������
	struct Teacher tArray[3];  

	//������������������
	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);  
	allocateSpace(tArray, len);
	//3.��ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray, len);
	system("pause");
	return 0;
}
#endif


#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//ѧ���ṹ��  ����������
struct Student
{
	string sName;
	int score;
};
//��ʦ�ṹ�� ���� ѧ����Ϣ
struct Teacher
{
	string tName;
	struct Student StudentArray[5];   //�ṹ��Ƕ�׽ṹ��
};
//����ʦ��ѧ����ֵ�ĺ���
void ImportInfo(struct Teacher TeacherArray[], int len)
{
	string nameSeed = "ABCDEF";  //Ϊ�����ɲ�ͬ��ʦA,B,C....
	for (int i = 0;i < len; i++)
	{
		TeacherArray[i].tName = "Teacher_";  
		TeacherArray[i].tName += nameSeed[i];  //�ַ�����ӣ�����i = 0ʱ��Teacher_+'A'��Teacher_A

		for (int j = 0; j < 5; j++)
		{
			 TeacherArray[i].StudentArray[j].sName = "Student_:";  //������ͬѧ�����
			 TeacherArray[i].StudentArray[j].sName += nameSeed[j]; //���ϴ���ѧ����ŵ��ַ�����Student_A
			 int random = rand() % 61 + 40;    //����0-60����������ټ���40��������40-100�������
			 TeacherArray[i].StudentArray[j].score = random; //��ѧ��������ֵ�����
		}
	}
}
//�����ӡ��ʦѧ����Ϣ
void ExportInfo(struct Teacher TeacherArray[], int len)
{
	for (int i = 0; i < len; i++)     //3����ʦ
	{
		cout << "��ʦ������ " << TeacherArray[i].tName << endl;
		for (int j = 0; j < 5; j++)   //ÿ����ʦ�����ѧ����Ϣ
		{
			cout << "\tѧ�������� " << TeacherArray[i].StudentArray[j].sName
				 << " ѧ�������� " << TeacherArray[i].StudentArray[j].score << endl;
		}
	}
}
int main43()  
{
	//������ʦ�ṹ�����飬ѧ���ṹ������
	//struct Student StudentArray[5];
	struct Teacher TeacherArray[3];   //������ʦ�ṹ������
	srand((unsigned int)time(NULL));  //ϵͳʱ�����ã����������
	//����һ����������������������ʦ��ѧ������Ϣ
	//�ܳ���/����Ԫ�س��� = ����Ԫ�ظ������˴�����len = 3
	int len = sizeof(TeacherArray) / sizeof(TeacherArray[0]); 
	ImportInfo(TeacherArray, len);   //������ʦ����ѧ����Ϣ
	ExportInfo(TeacherArray, len);   //�����ʦ����ѧ����Ϣ
	system("pause");
	return 0;
}
