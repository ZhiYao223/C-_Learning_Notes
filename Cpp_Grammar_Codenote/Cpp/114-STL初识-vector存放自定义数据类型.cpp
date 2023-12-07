/*
	
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//vector�����д���Զ�����������
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age; 
	}
	string m_Name;
	int m_Age;
};

void test114_1()
{

	vector<Person> v;  //����һ������v
	//׼��һЩ����
	Person p1("��ɮ", 10);
	Person p2("�����", 20);
	Person p3("��˽�", 30);
	Person p4("ɳ��", 40);
	Person p5("������", 50);
   
	//�������������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//���������е�����
	for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//*it��Person���͵�ָ��
		//cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << endl; 
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl; 
	}
	cout << endl << endl;
}

//����Զ����������� ָ��
void test114_2()
{
	vector<Person*> v;  //����һ������v
	//��������������ݵĵ�ַ
	Person p1("��ɮ", 10);
	Person p2("�����", 20);
	Person p3("��˽�", 30);
	Person p4("ɳ��", 40);
	Person p5("������", 50);

	//������������������ݵĵ�ַ
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//ͨ�����������������е�����
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{	
		//*it���������Person*����������
		Person* p = (*it);
		cout << "������" << (*it)->m_Name << "���䣺" << (*it)->m_Age << endl; 
	}
	cout << endl << endl;
}

void test114_3()
{
	//��Person���͵����ݴ�������w
	vector<Person> w = { {"��ɮ",10},{"�����",20},{"��˽�",30},{"ɳ��",40}, {"������",50} };
	
	// ʹ�õ��������� persons �����е�Ԫ�� auto��ʾ�Զ��Ƶ�����������
	//�������׸�Ԫ�ص�ַ��ֵ��it����������,�����ε�����֪��ָ���������һ��Ԫ�صĺ�һ��λ�ý���
	for (auto it = w.begin(); it != w.end(); ++it) 
	{
		//�����ǽ������� it ָ���Ԫ�ص�ֵ��ֵ����Ϊ w �ĳ������á�
		//���������ǿ���ͨ�� w ֱ�ӷ��ʸ�Ԫ�ص�ֵ�����Ҳ���ͨ�� w �޸ĵ�������ָ���Ԫ�ء�
		const auto& w = *it;    //ͨ��*�����õ�ַ��ȡ��Ԫ�ز���ֵ��w�ĳ�������
		//w = 10;    ���󣬲����޸ĵ�����ָ���Ԫ�� 
		cout << "������" << w.m_Name << "���䣺" << w.m_Age << endl;
	}
	cout << endl << endl;
}

void test114_4()
{
	//��string���͵�������ݴ���name����
	vector<string> name = { "��ɮ", "�����", "��˽�", "ɳ��" };

	//������������е�����  size_t �ǳ������������д�0��ʼ��������������
	for (size_t i = 0; i < name.size(); ++i)
	{
		cout << name[i] << "  ";
	}
	cout << endl << endl;
}

void test114_5()
{
	//�����ݴ�������
	vector<string> name = { "��ɮ", "�����", "��˽�", "ɳ��" };

	//������������е�������� 
	//ʹ�÷�Χ - based for ѭ���������� name �е�ÿ��Ԫ�أ�����ÿ��Ԫ�ص�ֵ������Ϊ it �ĳ������ñ�����
	//���������ǿ���ͨ�� it ֱ�ӷ���������ÿ��Ԫ�ص�ֵ�����Ҳ���ͨ�� it �޸�������Ԫ�ء�
	for (auto const& it : name)    //itΪ����������
	{
		cout << it << "  ";   
	}
	cout << endl << endl;
}

void test114_6()
{
	
}

int main114()
{
	test114_1();
	test114_2();
	test114_3();
	test114_4();
	test114_5();
	system("pause");
	return 0;
}