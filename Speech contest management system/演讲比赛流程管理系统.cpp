#include<iostream>
#include"speechManager.h"
using namespace std;
#include<string>
#include<ctime>
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//�������������
	SpeechManager sm;
	
	//����12��ѡ�ִ���
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << it->first
			<< "\t������" << it->second.m_Name
			<< "\t�ɼ���" << it->second.m_Score[0] << endl; 
	}*/

	int choice = 0 ;  //�����洢�û�ѡ��
	while (true)
	{
		sm.show_Menu();

		cout << "����������ѡ��" << " ";
		cin >> choice;   //�����û�ѡ��
		switch (choice)
		{
		case 1: sm.startSpeech(); break;    //��ʼ����
		case 2:	sm.showRecord();  break;	//�鿴��¼
		case 3:	sm.clearRecord(); break;	//��ռ�¼
		case 4:	sm.exitSystem();  break;	//�˳�ϵͳ
		default: system("cls");   break;	//����
		}
	}

	system("pause");
	return 0;

}