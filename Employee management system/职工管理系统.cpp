#include <iostream>
using namespace std;
#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
#if 0//���Դ���
	
	Worker* worker = NULL;   //Ԥ��Ұָ��
	worker = new Employee(1, "����", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "����", 3);
	worker->showInfo();
	delete worker;
	//������ͬ���󶼵���showInfo();����������ǲ�һ���ģ�����Ƕ�̬��һ���ӿ��ж�����̬
#endif 

	WorkerManager wm;//ʵ���������߶���
	
	int choice = 0; //�����洢�û���ѡ��
	
	while (true)
	{
		wm.Show_Menu();//����չʾ�˵���Ա����
		cout << "����������ѡ��  " << endl;
		cin >> choice; //�����û���ѡ����
		switch (choice)
		{
		case 0:	wm.ExitSystem();	    break;		//�˳�ϵͳ
				
		case 1: wm.Add_Emp();			break;//����ְ��
				
		case 2: wm.Show_Emp();			break;//��ʾְ��
				
		case 3:	wm.Del_Emp();           break;//case�д�����������Ҫ��{}��������װһ��
				
		case 4:	wm.Mod_Emp();			break;//�޸�ְ��
				
		case 5:	wm.Find_Emp();			break;  //���ձ������
				
		case 6:	wm.Sort_Emp();		    break;	//����ְ����Ϣ
				
		case 7:	wm.Clean_file();		break;   //��������ĵ�
		
		default: system("cls");		    break; //����
		}
	}
	system("pause");
	return 0;
}