//��װ������ʾ���棬��void showMenu()
//��main�����е��÷�װ�õĺ���
//�˳����ܣ� �����û���ͬ��ѡ�񣬽��벻ͬ���ܣ�ѡ����switch��֧�ṹ�����ܣ���ѡ��0ʱ��ִ���Ƴ�
//ʵ�������ϵ�˹��ܣ���ϵ������Ϊ1000�ˣ���ϵ����Ϣ����(�������Ա����䡢��ϵ�绰����ͥסַ��

//�����ϵ�˽ṹ��
//���ͨѶ¼�ṹ��
//main�����д���ͨѶ¼
//��װ�����ϵ�˺���
//���������ϵ�˹���

//������������ɾ��ָ����ϵ��
//��װ�����ϵ���Ƿ����
//��װɾ����ϵ�˺���
//����ɾ����ϵ�˹���
//���˼·��ɾ����ϵ��ǰ��������Ҫ���ж��û��������ϵ���Ƿ���ڣ�������ڣ�ɾ������������ʾ�û�û��Ҫɾ������ϵ�ˣ�
//������ǿ��԰Ѽ����ϵ���Ƿ���ڷ�װ��һ�������У�������ڣ�������ϵ����ͨѶ¼�е�λ�ã������ڷ���-1

#include <iostream>
#include <string>

using namespace std;

#define MAX 1000   //�������

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  7���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}
//��ʾ�˵�����
struct Person
{
	string m_name; 
	string m_sex;
	int m_age;
	string m_Phone;
	string m_Addr;
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person PersonArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_size; //ͨѶ¼�е�ǰ��¼��Ա����
};

//�����ϵ��
void addPerson(Addressbooks * Addrbook)    //abs
{
	//�ж�ͨѶ¼�Ƿ�û���������������
	if (Addrbook->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷����!" << endl;
		return;
	}
	else
	{   //��������
		string name; 
		cout << "������������" << endl;
		cin >> name;
		Addrbook->PersonArray[Addrbook->m_size].m_name = name;
		//�����Ա�
		cout << "�������Ա� " << endl;
		cout << "1----��" << endl;
		cout << "0----Ů" << endl;
		string sex = "0";// �������int�ͣ���������ĸʱ����if��ҲΪ�棬�������ѭ��
		//�ڴ�����ʾǰ������cin.clear(); cin.ignore();���cin�Ļ�����
		while (true)
		{
			//����������1��2���˳�ѭ�������������������������
			cin >> sex;
			if (sex == "0" || sex == "1")
			{
				Addrbook->PersonArray[Addrbook->m_size].m_sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		    //��������
			cout << "���������䣺 " << endl;
			int age = 0;
			cin >> age;
			Addrbook->PersonArray[Addrbook->m_size].m_age = age;
			//������ϵ�绰
			cout << "��������ϵ�绰�� " << endl;
			string phone;
			cin >> phone;
			Addrbook->PersonArray[Addrbook->m_size].m_Phone = phone;   
			//cout << "��ʽ������������ȷ����ϵ�绰" << endl; 
			//�����ͥסַ
			cout << "�������ͥסַ�� " << endl;
			string address;
			cin >> address;
			Addrbook->PersonArray[Addrbook->m_size].m_Addr = address;

			//����ͨѶ¼����
			Addrbook->m_size++;    //����1��ʹ��Ա��Ϣ��˳�����ṹ������PersonArray[]
			cout << "��ӳɹ�" << endl;
			system("pause"); //�밴���������
			system("cls");   //��������
		
	}
}
//2����ʾ������ϵ����Ϣ
void showPerson(Addressbooks* Addrbook)
{
	if (Addrbook->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl; 
	}
	else
	{
		for (int i = 0; i < Addrbook->m_size;i++)
		{
			cout << "������" << Addrbook->PersonArray[i].m_name << "\t";
			cout << "�Ա�" << ((Addrbook->PersonArray[i].m_sex == "1") ? "��" : "Ů") << "\t";
			cout << "���䣺" << Addrbook->PersonArray[i].m_age << "\t";
			cout << "�绰��" << Addrbook->PersonArray[i].m_Phone << "\t";
			cout << "סַ��" << Addrbook->PersonArray[i].m_Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int main()
{
	int select = 0;  //�û�ѡ�����
	Addressbooks Addrbook;    //����ͨѶ¼�ṹ�����Addrbook
	Addrbook.m_size = 0; //��ʼ��ͨѶ¼��Ա����
	while (true)
	{
		showMenu(); // �˵�����
		cin >> select; //���ܱ���
		switch (select)
		{
		case 1:addPerson(&Addrbook);   break;   //1�������ϵ�� 
		case 2:showPerson(&Addrbook);  break;   //2����ʾ��ϵ��
		case 3:break;   //3��ɾ����ϵ��
		case 4:break;   //4��������ϵ��
		case 5:break;   //5���޸���ϵ��
		case 6:break;   //6�������ϵ��
		case 0:cout << "��ӭ�´�ʹ�ã��ټ���" << endl;
			system("pause");
			return 0;//�����˳��������ۺ��滹��ʲô����
			//break;   //7���˳�ͨѶ¼
		default: break;
		}
	}
	system("pause");
	return 0;
}

