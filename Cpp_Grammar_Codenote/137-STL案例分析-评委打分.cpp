/*
		����������

		��5��ѡ��: ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ����

		ʵ�ֲ���
		1.��������ѡ�֣��ŵ�vector��
		2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
		3.sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
		4.deque��������һ�飬�ۼ��ܷ�
		5.��ȡƽ����
*/
#if 1
#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

//ѡ����
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;

};

void creatPerson(vector<Person>& v)
{
	string nameSeed[] = { "A", "B", "C","D","E" };
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";  //string ƴ��
		name += nameSeed[i];
		cout << name << endl;

		int score = 0; //��ʼ������
		//��������Person�������������
		Person p(name, score);
		v.push_back(p);
	}
	cout << endl;
}
//���
void setScore(vector<Person>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		//����ί�ķ��������뵽deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //0~100
			d.push_back(score);
		}

		cout << "ѡ�֣�" << v[i].m_Name << "��֣�";
		for (auto const& it : d)
		{
			cout << it << " ";
		}
		cout << endl;

		//����
		sort(d.begin(), d.end());
		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (auto const& it : d)
		{
			sum += it; //�ۼ�ÿ����ί�ķ���
		}
		int avg = sum / d.size();  //ƽ����
		//��ƽ���� ��ֵ��ѡ������
		v[i].m_Score = avg;
	}
	cout << endl; 

}

void showScore(vector<Person>& v)
{
	for (auto const& it : v)
	{
		cout << "������" << it.m_Name << "ƽ����: " << it.m_Score << endl;
	}
	cout << endl; 
}


int main137()
{
	//���������
	srand((unsigned int)time(NULL));

	//����5��ѡ��
	vector<Person>v;  //���ѡ�ֵ�����     
	creatPerson(v);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << (*it).m_Name << "������" << (*it).m_Score << endl;

	}
	cout << endl;


	//��5��ѡ�ִ��
	setScore(v);


	//��ʾ���÷�
	showScore(v);


	system("pause");
	return 0;
}
#endif

#if 0
#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<vector>
#include<ctime>

using namespace std;

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score; 
	}
	string m_Name;
	int m_Score;
};

void creatPerson(vector<Person>& v )
{
	string nameSeed[] = { "����", "����", "����", "����", "����" };
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name = name + nameSeed[i];
		cout << name << endl;
		int score = 0;    //����Ĭ��Ϊ0
		Person p(name, score);  //����ѡ�ֶ���p

		v.push_back(p);  //�����������������p���ٽ�p��������v
	}
}

//��ί���
void setScore(vector<Person>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		//����ί�ķ���������deque������
		deque<Person> d1;
		for (int i = 0; i < 10; i++)
		{
			v[i].m_Score = rand() % 41 + 60;
			cout << v[i].m_Score << " ";
		}

		sort(d1.begin(), d1.end());
		d1.pop_back();
		d1.pop_front();

		int num = 0;
		for (size_t i = 0; i < d1.size(); i++)
		{
			int num = num + d1[i].m_Score;
		}
		//ƽ��ֵ
		int average = num % d1.size();
		cout << endl;

		for (int i = 0; i < d1.size(); i++)
		{
			cout << d1[i].m_Name << "ƽ����Ϊ�� " << d1[i].m_Score << endl;
		}
		cout << endl;
	}

}


int main()
{
	//���������
	srand((unsigned int)time(NULL));
	
	//��������ѡ�֣��ŵ�vector��
	vector<Person> player;
	creatPerson(player);
	
	//10����ί���ֱ��ÿ��ѡ�ִ��
	//setScore(player);

	//��ƽ��ֵ
	//averageScore(player);
	
	system("pause");
	return 0;
	
	
}
#endif