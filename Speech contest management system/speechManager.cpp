#include"speechManager.h"
#include"speaker.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();
	
	//���������¼
	this->loadRecord();
}


void SpeechManager::show_Menu()
{
	cout << "****************************************************************" << endl;
	cout << "**************************��ӭ�μ��ݽ�����**********************" << endl;
	cout << "**************************1.��ʼ�ݽ�����************************" << endl;
	cout << "**************************2.�鿴�����¼************************" << endl;
	cout << "**************************3.��ձ�����¼************************" << endl;
	cout << "**************************4.�˳���������************************" << endl;
	cout << "****************************************************************" << endl;

	cout << endl;
}

void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear(); 

	//��ʼ����������
	this->m_Index = 1;
	//��ʼ�� ��¼����
	this->m_Record.clear();
}

//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		//���������ѡ��
		Speaker sp;
		sp.m_Name = name;
		for (int j = 0; j < 2;j++)   //�ڼ��ַ���
		{
			sp.m_Score[j] = 0;		 //��ʼ��ѡ�ַ���
		}
		//����ѡ�ֱ�Ų�����v1����
		this->v1.push_back(i + 10001);

		//ѡ�ֱ���Լ���Ӧѡ�� ���뵽map������
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "�� <<" << m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "-----------------------------" << endl;
	cout << "��ǩ���ݽ�˳������:" << endl;
	if (this->m_Index == 1) //��һ�ֳ�ǩ
	{
		random_shuffle(v1.begin(), v1.end()); //����ѡ�ֱ��
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else       //�ڶ��ֳ�ǩ
	{
		//���ҵ�һ�ֽ���������ڶ��ֵ�6��ѡ��˳��
		random_shuffle(v2.begin(), v2.end());  
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl; 
	}
	cout << "-------------------------------" << endl;
	system("pause");  //�����������
	cout << endl; 
}


void SpeechManager::startSpeech()
{
	//��һ�ֱ���
	//1.��ǩ
	this->speechDraw();
	//2.����
	this->speechContest();
	//3����ʾ�������
	this->showScore();
	//�ڶ��ֱ���
	this->m_Index++;
	//1����ǩ
	this->speechDraw();
	//2������
	this->speechContest();
	//3����ʵ���ս��
	this->showScore();
	//4������������ļ���
	this->saveRecord();

	//���ñ��� ��ʼ������
	this->initSpeech();

	//����ѡ��
	this->createSpeaker();

	//��ȡ�����¼
	this->loadRecord();

	cout << "���������ϣ�" << endl;
	system("pause");
	system("cls");
}
//����
void SpeechManager::speechContest()
{
	cout << "---------------------��<<" << this->m_Index << ">>�ֱ�����ʽ��ʼ------------" << endl;

	//׼����ʱ�������С��ɼ������������ͬԪ�أ� ��������������
	//�÷�key ���int mapĬ�ϰ�key(�÷�)����
	multimap<double, int, greater<double>> groupScore; //��������� ����  �ڽ���������

	int num = 0; //��¼��Ա���� 6��һ�� 

	vector<int>v_Src;  //����ѡ������
	if (this->m_Index == 1) //��һ�ֱ���ѡ��
	{
		v_Src = v1;   //����һ�ֲ�����ѡ�ִ�������
	}
	else
	{
		v_Src = v2;   //���ڶ��ֲ�����ѡ�ִ�������
	}
	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;  //��Ա����
		//��ί���
		deque<double>d; //�����洢�÷ֵ�����
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f; //600~1000
			//cout << score << "  ";
			d.push_back(score);  //���÷ֲ�������
		}
		
		sort(d.begin(), d.end(), greater<double>());  //�����÷��ɸߵ��ͽ�������
		d.pop_front();    //ȥ����߷�
		d.pop_back();    //ȥ����ͷ�
		double sum = accumulate(d.begin(), d.end(), 0); //�ۼ�����Ԫ��
		double avg = sum / (double)d.size(); //����ƽ����

		//��ӡƽ����
		//cout << "��ţ� " << *it << "������ " << this->m_Speaker[*it].m_Name << "��ȡƽ���֣� " << avg << endl; 
		
		//��ƽ���ַ��뵽map������  ͨ��map[key]�����õ�valueֵ����ͨ��m_Speaker[*it]�õ�Speaker,
		//��ͨ��Speaker�õ���ѡ�ֵĵ÷֣�m_Index-1 = 0 ��ʾ��avgƽ���ָ�ֵ��0��λ����
		//m_Speaker[*it] �е� *it ��һ�������� it ��ָ���Ԫ��, Ϊvector<int>�͵�ѡ�ֱ�ţ�
		//��ͨ��map<key, value>m; m[key] = value;  ��m_Speaker[*it] Ϊmap������Ӧ��valueֵ����Speaker����
		//Ȼ����ͨ��Speaker.m_Score[]��ƽ��ֵ�����Speaker�ķ����С�
		this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg; //*itΪѡ�ֱ�ţ�ͨ��keyֵ��ȡvalue�е�Speaker���ͣ��ٻ�ȡ����m_Score

		 
		//��������ݷ��뵽6�� ��ʱС��������  map����Ĭ�ϰ���keyֵ������˽�avg�ŵ�һ��������
		groupScore.insert(make_pair(avg, *it)); //key�ǵ÷֣�value�Ǿ���ѡ�ֱ�ţ�//��ѡ�ֱ�źͷ����󶨷�������
		//ÿ6��ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С��������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��ţ� " << it->second << "������ " << this->m_Speaker[it->second].m_Name
					<< "�ɼ��� " << this->m_Speaker[it->second].m_Score[this->m_Index -1] << endl;

			}
			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; count++, it++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second); //����һ��ǰ������Ŵ���v2����
				}
				else
				{
					vVictory.push_back((*it).second); //���ڶ��ֱ�����ǰ������Ŵ���vVictory����
				}
			}
			groupScore.clear();
			cout << endl;
		}
	}
	cout << "----------------------��" << this->m_Index << "�ֱ�����ϣ�-----------------------" << endl;
	system("pause");
	cout << endl;
}
//��ʾ�÷�
void SpeechManager::showScore()
{
	cout << "-----------------��" << this->m_Index << "�ֽ���ѡ����Ϣ���£� -----------------------" << endl;
	vector<int>v;     //������Ա ����
	if (this->m_Index == 1)  //��һ��  ������ѡ�ֶ���v2������
	{
		v = v2; 
	}
	else                   //�ڶ��ֽ���ѡ�֣�����vVictory������
	{
		v = vVictory;
	}
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ��:  " << *it << "������ " << this->m_Speaker[*it].m_Name << "�÷֣�  " <<
			this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
	}
	cout << endl;
	system("pause");
	//system("cls");   //����
	this->show_Menu();
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	//���´���Ϊ ��speech.csv�� ���ļ�������д���׷�ӵ�ģʽ���ļ���
	//��׼�����ļ���д�����ݻ���ĩβ׷�����ݡ�
	ofs.open("speech.csv", ios::out | ios::app);  //��׷�ӵķ�ʽд�ļ�

	//��ÿ��ѡ�����ݣ�д�뵽�ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		//�� *it ��ֵ��this->m_Speaker[*it].m_Score[1] ��ֵ
		// �Լ����� , ���β��뵽�ļ��У��γ�һ����¼��һ�����ݡ�
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}  
	ofs << endl;    //���ı��ļ����������

	ofs.close();	// 
	cout << "��¼�ѱ���" << endl;

	//�м�¼�ˣ��ļ���Ϊ��
	this->fileIsEmpty = false;
}

//�鿴���������¼
void SpeechManager::loadRecord()
{
	ifstream  ifs("speech.csv", ios::in); //���ļ�
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();  //�ر��ļ�
		return;       
	}
	//�ļ�������
	char ch;
	ifs >> ch;  //����һ���ַ�
	if (ifs.eof())  //����ļ�ָ���Ƿ��Ѿ������ļ�ĩβ,�ж��Ƿ��Ѿ���ȡ���ļ������һ��
	{
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close(); 
		return;
	}
	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	//���Ѷ�ȡ���ַ��Ż�������ͨ����Ϊ�˾�������
	//���˵�֮ǰ��״̬����֧�ֶ�ģ�� / �ຯ���Ķ�ȡ������
	ifs.putback(ch);	//������ļ�������һλ��Ϊ�˶���ȫ�����ݣ��轫�����ȡ�ĵ����ַ����Ż���
 	string data;
	//����ȡ������� >> ������������������ȡ���ݣ��������ݴ洢������ data
	//ͨ������ѭ����ȡ�������е����ݣ�ֱ���޷��ٶ�ȡ����Ϊֹ��
	int index = 0;  //�ڼ��죬һ��Ҫ�ŵ�whileѭ�����棬����ȡ��1������
	while (ifs >> data)  //�����ݶ���data��
	{
		//cout << data << endl;
		//10002,86.675,10009,81.3,10007,78.55,
		vector<string>vname;   //���6��string�ַ���
		int pos = -1; //�鵽","λ�õı���
		int start = 0;
		
		while (true)
		{
			//���ַ��� data �д�ָ������ʼλ�� start ��ʼ��
			//���ҵ�һ�����ֵ��Ӵ� "," ��λ�ã���������洢�ڱ��� pos �С�
			pos = data.find(",", start);
			if (pos == -1)  
			{
				break; //û���ҵ����
			}
			//���ַ��� data �д�ָ������ʼλ�� start ��ʼ��
			//��ȡһ������Ϊ pos - start ���Ӵ���������ȡ���Ӵ���ֵ������ temp��
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			vname.push_back(temp);  //�����ļ�����ȡ��ѡ�ֱ�š��÷����ݲ�������
			start = pos + 1;
		}
		//��һ���� index �� vname ���ɵļ�ֵ�Բ��뵽��Ա���� m_Record �С�
		this->m_Record.insert(make_pair(index, vname));
		index++;
	}
	ifs.close();
	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	{
		cout << it->first << "�ھ���ţ�" << it->second[0] << "������ " << it->second[1] << endl;


	}*/
};

//��ʾ�����¼
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڣ����¼Ϊ�գ�" << endl;
	}
	else
	{
		for (size_t i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "��"
				<< "�ھ���ţ�" << this->m_Record[i][0] << " �÷�: " << this->m_Record[i][1] << "  "
				<< "�Ǿ���ţ�" << this->m_Record[i][2] << " �÷֣�" << this->m_Record[i][3] << "  "
				<< "������ţ�" << this->m_Record[i][4] << " �÷֣�" << this->m_Record[i][5] << endl;
		}
	}
	system("pause");
	system("cls");
}


//��ռ�¼
void SpeechManager::clearRecord()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;    

	if (select == 1)
	{
		//��ģʽ ios::trunc ����ļ����ڣ�ɾ���ļ������´�����������д������
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ������
		this->initSpeech();

		//����ѡ��
		this->createSpeaker();

		//��ȡ�����¼
		this->loadRecord();

		cout << "��ճɹ���" << endl;

	}
	system("pause");
	system("cls");
}

//��������
SpeechManager::~SpeechManager()
{

}







