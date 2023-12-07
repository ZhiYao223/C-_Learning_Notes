#pragma once   //��ֹͷ�ļ��ظ�����
#include <iostream>  //���������������ͷ�ļ�
using namespace std; //ʹ�ñ�׼�����ռ�
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳��ӿ�
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();
   
	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ��  ��־
	bool m_FileIsEmpty;

	//ͳ���ļ��е�����
	int get_EmpNum();
	
	//��ʼ��ְ��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ���ڣ�������ڷ���ְ�����������е�λ�ã������ڷ���-1
	int IsExist(int id);

	//����ְ��
	void Find_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_file();
	

	


	//��������
	~WorkerManager();
};