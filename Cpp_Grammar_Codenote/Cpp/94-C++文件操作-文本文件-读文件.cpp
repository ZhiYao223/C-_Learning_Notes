/*
���ļ��������£�
1������ͷ�ļ��� #include <fstream>
2������������ ifstream ifs;
3�����ļ��в��ж��ļ��Ƿ�򿪳ɹ� ifs.open("�ļ�·��",�򿪷�ʽ);
4�������� ���ַ�ʽ��ȡ
5���ر��ļ� ifs.close();

���ļ���������ifstream,����fstream��
����is_open���������ж��ļ��Ƿ�򿪳ɹ�
close�ر��ļ�
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//�ı��ļ� ���ļ�
void test94()
{
	//����ͷ�ļ�

	//����������
	ifstream ifs; 
	//���ļ����ж��Ƿ�򿪳ɹ�
	ifs.open("Produce_file/test93.txt", ios::in);  //in�� out д
		if (!ifs.is_open())
		{
			cout << "�ļ���ʧ��" << endl;
			return;
		}
	//������	

	//��һ�ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs >> buf) //��������� ��ȡ����   �����ո���
	//{
	//	cout << buf << endl;  //��������е�����
	//}
	
	//�ڶ��ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))  //��ȡ������
	//{
	//	cout << buf << endl;  //��������е�����
	//}
	
	//�����ַ�ʽ
	string buf;
	while ( getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//�����ַ���
	//char c;
	//while ((c = ifs.get()) != EOF)   //EOF end of file   һ�����ַ���ȡ���浽c�У�ֱ�������ļ�β
	//{
	//	cout << c;
	//}
	
	//�ر��ļ�
	ifs.close();
}

int main94()
{
	test94();
	system("pause");
	return 0;
}