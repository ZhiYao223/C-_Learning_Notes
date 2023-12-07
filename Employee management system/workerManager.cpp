#include "workerManager.h"
#include <iostream>

WorkerManager::WorkerManager()  //���캯�������������ⶨ��
{
	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //���ļ�
	if (!ifs.is_open())
	{
		//cout << "�ļ������ڣ�" << endl;
		//��ʼ��ָ��
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;   
		ifs.close();
		return;	//�ļ������ڣ��˳����캯��
	}

	//2���ļ����ڣ�������Ϊ��
	char ch;
	ifs >> ch;   //��ȡ�ַ�
	if (ifs.eof())   //��ȡ�ַ���������EOF�ļ�β��־�����ʾ�ļ�������
	{
		//cout << "�ļ������ڣ�" << endl;
		//��ʼ��ָ��
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;   //�ļ������ڣ��˳����캯��
	}

	//3���ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();  //�õ�ְ������������num
	//cout << "ְ������Ϊ�� " << num << endl;
	this->m_EmpNum = num;  //����m_EmpNum����

	//���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//���ļ��е����ݣ��浽������
	this->init_Emp();

	//for (int i = 0; i < this->m_EmpArray[i]->m_ID; i++)
	//{
	//	cout << "ְ����ţ� " << this->m_EmpArray[i]->m_ID
	//		<< "������ " << this->m_EmpArray[i]->m_Name
	//		<< "���ű�ţ� " << this->m_EmpArray[i]->m_DeptID << endl;
	//}

	//��ʼ������
	//this->m_EmpNum = 0;
	//this->m_EmpArray = 0;
}

//ͳ���ļ��е�����
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in); //���ļ� ��

	int id;
	string name;
	int dID;

	int num = 0; //�ļ��е�����

	while (ifs >> id && ifs >> name && ifs >> dID )  //����������������ո񣬽�����һ��Ķ�ȡ��ֱ���������ÿ����һ�����ݣ�ͳ������
	{
		num++;//ͳ����������
	}
	return num;   //�����ļ���ְ������
};

//��ʼ��ְ��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dID;

	int index = 0;   //ְ����������

	while (ifs >> id && ifs >> name && ifs >> dID)
	{
		Worker* worker = NULL;
		if (dID == 1)      //��ְͨ��
		{
			worker = new Employee(id, name, dID);
		}
		else if (dID == 2) //����
		{
			worker = new Manager(id, name, dID); 
		}
		else if(dID == 3)             //�ϰ�
		{
			worker = new Boss(id, name, dID);
		}
		//else
		//{
		//	cout << "��������" << endl;   break;   //����1��2��3��������ֱ���
		//}
		this->m_EmpArray[index] = worker;
		index++;
	}
	//�ر��ļ�
	ifs.close();
}

//��ʾְ��
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
}

//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)     //���ļ�λ�գ���û����ɾ��
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else   //���ļ���Ϊ�գ���ɾ��ָ����ְ��
	{
		cout << "��������Ҫɾ��ְ���ı�ţ� " << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id); //�жϱ��Ϊid��ְ���Ƿ���ڣ�������index

		if (index != -1) //˵��ְ�����ڣ�����Ҫɾ����indexλ���ϵ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)   //i<���������һ��λ�ã�����m_EmpNum-1
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;  //���������м�¼��Ա����
			this->save();//����ͬ�����µ��ļ���
			cout << "ɾ���ɹ�!" << endl; 
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl; 
		}
	}
	system("pause");   //�����������
	system("cls");
}
//�ж�ְ���Ƿ���ڣ�������ڷ���ְ�����������е�λ�ã������ڷ���-1
int WorkerManager::IsExist(int id)
{
	int index = -1;  //һ��ʼ�϶���������Ա��
	for (int i = 0; i < this->m_EmpNum; i++)  //��������
	{
		if (this->m_EmpArray[i]->m_ID == id)
		{
			index = i;  //�ҵ�ְ�� 
			break;
		}
	}
	return index;
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl; 
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ���ŵ�ְ��
			delete this->m_EmpArray[ret];

			int newID = 0;    //�޸ĺ�������ݳ�ʼ��
			string newName = " ";
			int dSelect = 0;    //����ID

			cout << "�鵽�� " << id << "��ְ������������ְ���ţ�" << endl;
			cin >> newID;

			cout << "�������������� " << endl;
			cin >> newName;

			cout << "�������¸�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;    //���ű���

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:worker = new Employee(newID, newName, dSelect);  break;
			case 2:worker = new Manager(newID, newName, dSelect);   break;
			case 3:worker = new Boss(newID, newName, dSelect);      break;
			default: break;
			}

			//�������ݵ�������
			this->m_EmpArray[ret] = worker;   //���޸ĺ����Ա���뵽������
			cout << "�޸ĳɹ�!" << this->m_EmpArray[ret]->m_DeptID << endl;
			this->save(); //���浽�ļ���
		}
		else
		{
			cout << "�޸�ʧ�ܣ� ���޴��ˣ�" << endl; 
		}
	}
	system("pause"); //�����������
	system("cls");
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��!" << endl; 
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2����ְ����������" << endl;
		int search_Mode = 0;    //���ҷ�ʽ
		while (1)
		{
			cin >> search_Mode;     //������ҷ�ʽ

			if (search_Mode == 1)  //����Ų���
			{
				int id;
				cout << "������Ҫ���ҵ�ְ����ţ�" << endl;
				cin >> id;

				int ret = IsExist(id);   //�жϸñ���Ƿ����
				if (ret != -1)
				{
					cout << "���ҳɹ��� ��ְ����Ϣ���£�" << endl;
					this->m_EmpArray[ret]->showInfo();
				}
				else
				{
					cout << "����ʧ�ܣ����޴��ˣ�" << endl;
					cout << " " << endl; //�ָ�����
				}
			}
			else if (search_Mode == 2)  //�����ֲ���
			{
				string name;
				cout << "������Ҫ���ҵ�������" << endl;
				cin >> name;

				bool name_searchflag = false; //���ҵ����ֵı�־��Ĭ��Ϊfalse
				for (int i = 0; i < m_EmpNum; i++)
				{
					if (m_EmpArray[i]->m_Name == name)
					{
						cout << endl;  //�ָ�����
						cout << "���ҳɹ��� ְ�����Ϊ��" << m_EmpArray[i]->m_ID << "�ŵ���Ϣ���£�" << endl;

						name_searchflag = true;

						this->m_EmpArray[i]->showInfo();  //��ʾ������Ϣ
					}
				}
				if (name_searchflag == false)
				{
					//���޴���
					cout << "����ʧ�ܣ����޴���!" << endl;
				}
			}
			else
			{
				cout << "����ѡ���������������룺" << endl;
			}
			if (search_Mode == 1 || search_Mode == 2)
			{
				break;
			}
		}
	}
	/*system("pause");
	system("cls");*/
}

//����ְ��
void WorkerManager:: Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ���Ϊ�գ�" << endl; 
		system("pause");
		system("cls");     
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1����ְ���Ž�������" << endl;
		cout << "2����ְ���Ž��н���" << endl; 

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minormax = i;  //������Сֵ �� ���ֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)   //����
				{
					if (this->m_EmpArray[minormax]->m_ID > this->m_EmpArray[j]->m_ID)
					{
						minormax = j;  //������Сֵ�±�
					}
				}
				else  //����
				{
					if (this->m_EmpArray[minormax]->m_ID < this->m_EmpArray[j]->m_ID)
					{
						minormax = j;  //�������ֵ�±�
					}
				}
			}
			//�ж�һ��ʼ�϶� ��Сֵ�����ֵ���ǲ��Ǽ������С�����ֵ��������ǣ��򽻻�����
			if (i != minormax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minormax];
				this->m_EmpArray[minormax] = temp;
			}
		}
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();  //����������浽�ļ���
		this->Show_Emp(); //չʾ����ְ��
	}
}

//����ļ�
void WorkerManager::Clean_file()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//��ģʽ�� ios::trunc ������ڣ�ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_FileIsEmpty != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)  //ɾ��������ְ������
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			//ɾ����������ָ��
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true; 
		}
		cout << "��ճɹ���" << endl; 
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager()   //�������ݣ��ֶ����٣��ֶ��ͷ�
{
	if (this->m_EmpArray != NULL)
	{
		//delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//չʾ�˵�,�������������ⶨ��
void WorkerManager::Show_Menu()
{
	cout << "*************************************************************" << endl;
	cout << "*******************����ʹ��ְ������ϵͳ��**********************" << endl;
	cout << "******************  0.�˳��������  **************************" << endl;
	cout << "******************  1.����ְ����Ϣ  **************************" << endl;
	cout << "******************  2.��ʾְ����Ϣ  **************************" << endl;
	cout << "******************  3.ɾ����ְְ��  **************************" << endl;
	cout << "******************  4.�޸�ְ����Ϣ  **************************" << endl;
	cout << "******************  5.����ְ����Ϣ  **************************" << endl;
	cout << "******************  6.���ձ������  **************************" << endl;
	cout << "******************  7.��������ĵ�  **************************" << endl;
	cout << "*************************************************************" << endl;
	cout << endl;
}

//�˳��ӿڣ�����ʵ�ּ�������
void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);  //�˳�����
}

//���ְ��
void WorkerManager::Add_Emp()
{
	cout << "���������ְ��������" << endl;

	int addNum = 0; //�����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum; //�¿ռ����� = ԭ����¼���� + ��������

		
		Worker **newSpace = new Worker* [newSize];//�����¿ռ�
		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;//ְ�����
			string name; //ְ������
			int dSelect; //����ѡ��
			cout << "�������" << i + 1 << "����ְ����ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ��������" << endl;
			cin >> name;
			
			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:	worker = new Employee(id, name, 1); break; 
			case 2: worker = new Manager(id, name, 2); break; 
			case 3: worker = new Boss(id, name, 3); break;
			default: break;
			}
			//������ְ��ָ�룬���浽������
			newSpace[this->m_EmpNum + i] = worker;

		}
		delete[] this->m_EmpArray;//�ͷ�ԭ�пռ�

		this->m_EmpArray = newSpace; //�����¿ռ��ָ��

		this->m_EmpNum = newSize; //�����µ�Ա������

		this->m_FileIsEmpty = false; //����ְ����Ϊ�ձ�־

		cout << "�ɹ����" << addNum << "����ְ��" << endl; //��ʾ��ӳɹ�

		this->save();//�ɹ���Ӻ󣬱������ݵ��ļ���

	}
	else
	{
		cout << "������������" << endl; 
	}
	//����������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}
 


//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out); //������ķ�ʽ���ļ�  ----д�ļ�

	//��ÿ��������д�뵽�ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_ID << " "  //���ÿո�ָ�����
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptID << endl;
	}
	//�ر��ļ�
	ofs.close();
}