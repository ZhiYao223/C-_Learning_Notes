#include <iostream>
using namespace std;

//�����ǳ����
class People
{
public:
	People()
	{
		cout << "People��Ĭ�Ϲ��캯������" << endl;
	}
	People(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);  //new���ٵ��Ƕ������Ǹ���ַ����Ҫ��ָ��������
		cout << "People���вι��캯������" << endl; 
	}
	//�Լ�ʵ�ֿ������캯���������������������
	People(const People &p)
	{
		cout << "People�������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//ǳ������������Ĭ��ʵ�־������д���
		
		m_Height = new int(*p.m_Height);//�������
	}
	~People()
	{
		//�������룬�����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "People��������������" << endl; 
	}

	int m_Age;//����
	int *m_Height;
};
//�����ı������Զ��ͷţ�������Ҫ�����������֮������Ȼ��Ӱ�����ܵģ������Ҫ�ֶ��ͷ�
//new���ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷţ��ͷ����ò�����==delete==
void test3()
{
	People p1(18, 160);
	cout << "p1������Ϊ��" << p1.m_Age <<"���Ϊ��"<<*p1.m_Height << endl;
	People p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
}

//ǳ�������������⣺�������ڴ��ظ��ͷ�
//ǳ���������⣬Ҫ����������н��

int main65()
{
	test3();
	system("pause");
	return 0;
}