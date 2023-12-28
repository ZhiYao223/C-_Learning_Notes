#include<iostream>
using namespace std;
#include "Identity.h"
#include<fstream>
#include<string>
#include"globalFile.h"
#include"student.h"
//��½���� �����ֱ�Ϊ�������ļ����ơ������������
void LoginIn(string fileName, int type)
{
	//����ָ�룬����ָ���������
	Identity* person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);
	
	//�ж��ļ��Ƿ����
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	//׼�������û�����Ϣ
	int id = 0;
	string name;
	string pwd;

	switch (type)
	{
	case 1:
		cout << "���������ѧ�ţ�";
		cin >> id;
		break; 
	case 2:	
		cout << "����������ְ���ţ�";
		cin >> id; 
		break;
	case 3:
		break; 
	default:
		break;
	}
	cout << "�������û�����";
	cin >> name;
	cout << "���������룺";
	cin >> pwd;

	if (type == 1) {
		//ѧ�������֤
		int fId;			//���ļ��ж�ȡ��id��
		string fName;		//���ļ��ж�ȡ������
		string fPwd;		//���ļ��ж�ȡ������
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			cout << fId << " " << fName << " " << fPwd << endl;

			if (id == fId && name == fName && pwd == fPwd) {
				cout << "ѧ����֤��½�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//����ѧ����ݵ��Ӳ˵�
				//ifs.close();
				return;
			}				
		}
	}
	else if (type == 2) {
		//��ʦ�����֤
		int fId;
		string fName;
		string fPwd;
		while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "��ʦ��֤��½�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				return;
			}
		}
	}
	else if (type == 3) {
		//����Ա�����֤
	}
	cout << "��֤��½ʧ�ܣ�" << endl;
	system("pause");
	system("cls");
	return;
}



//�˳�ϵͳ
bool OutSystem()
{
	cout << "��ӭ��һ��ʹ�ã�" << endl;
	system("pause");
	return true;
}




int main()
{
	int select = 0;		//���ڽ����û���ѡ��

	while (true)
	{
		cout<<"=====================��ӭ����HUD��������ϵͳ========================"<<endl;
		cout << "������������ݣ�" << endl;
		cout << "\t\t------------------------------------------\n" << endl;
		cout << "\t\t|                                        |\n" << endl;
		cout << "\t\t|              1.ѧ������                |\n" << endl;
//		cout << "\t\t|                                            << endl;
		cout << "\t\t|              2.��	ʦ               |\n" << endl;
//		cout << "\t\t|                                           *\n" << endl;
		cout << "\t\t|              3.�� �� Ա                |\n" << endl;
//		cout << "\t\t|                                           *\n" << endl;
		cout << "\t\t|              0.��    ��                |\n" << endl; 
//		cout << "\t\t|                                           " << endl;
		cout << "\t\t------------------------------------------\n" << endl;
		cout << "����������ѡ�";
		 
		cin >> select;  //�����û�ѡ��
		switch (select)
		{
		case 1:	LoginIn(STUDENT_FILE, 1);	break;//ѧ�����
		case 2:	LoginIn(TEACHER_FILE, 2);	break;//��ʦ���
		case 3:	LoginIn(ADMIN_FILE,   3);	break;//����Ա���	
		case 0:	OutSystem();	break;//�˳�ϵͳ
		default:
			cout << "��������������ѡ��" << endl; 
			system("pause");
			system("cls");
			break;
		}


	}
	system("pause");
	return 0;
}