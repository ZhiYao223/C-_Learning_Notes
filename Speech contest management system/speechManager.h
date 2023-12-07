#pragma once
#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<map>
#include<deque>
#include<numeric>
#include<fstream>
#include"speaker.h"
using namespace std;

//����ݽ�����������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu()  ;

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ������������
	void initSpeech();

	//ѡ�ֳ�ǩ
	
	//��ʼ���� �����������̿��ƺ���
	void startSpeech();

	//��ʼ��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//��ʾ����÷�
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//��������¼������
	map<int, vector<string>>m_Record;

	//��Ա����
	//�����һ�ֱ���ѡ�ֱ�� ����
	vector<int>v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;

	//��ű���Լ���Ӧ����ѡ����������Ű󶨶�Ӧѡ��
	map<int, Speaker>m_Speaker;  

	//��ű�����������
	int m_Index;
};