#include<iostream>
using namespace std;


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
		cout << "\t\t|-------------------------------------------|\n" << endl;
		cout << "\t\t|                                           |\n" << endl;
		cout << "\t\t|              1.ѧ������                   |\n" << endl;
//		cout << "\t\t|                                           " << endl;
		cout << "\t\t|              2.��	 ʦ                 |\n" << endl;
//		cout << "\t\t|                                           *\n" << endl;
		cout << "\t\t|              3.�� �� Ա                   |\n" << endl;
//		cout << "\t\t|                                           *\n" << endl;
		cout << "\t\t|              0.��    ��                   |\n" << endl; 
//		cout << "\t\t|                                           " << endl;
		cout << "\t\t|-------------------------------------------|\n*" << endl;
		cout << "����������ѡ�";
		 
		cin >> select;  //�����û�ѡ��
		switch (select)
		{
		case 1:		break;//ѧ�����
		case 2:		break;//��ʦ���
		case 3:		break;//����Ա���	
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