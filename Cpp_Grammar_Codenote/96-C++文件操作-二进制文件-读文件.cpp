#include <iostream>
using namespace std;
#include <fstream>

class Person
{
public:
	char m_Name[64];//����
	int m_Age; //����
};
//�������ļ�
void test96()
{
	ifstream ifs;
	ifs.open("D:/Learn Zone/C++ files/Practical_Grammar/Practical_Grammar/Produce_file/person.txt", ios::in | ios::binary);
	//���ļ����ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));      
	cout << "������ " << p.m_Name << "   ����:  " << p.m_Age << endl;
	ifs.close();



}

int main96()
{
	test96();
	system("pause");
	return 0;
}