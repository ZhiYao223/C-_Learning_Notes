#include <iostream>
#include <string>

using namespace std;

class Cube
{
public:
	//���ó����
	void setValue(int length, int wide, int high)
	{
		m_L = length;
		m_W = wide;
		m_H = high;
	}
	//��ȡ�����
	int getValue()
	{
		cout << "��Ϊ��" << m_L << "\t��Ϊ��" << m_W << "\t��Ϊ��" << m_H << endl;
		return 0;
	}
	//��ȡ����������
	int getAera()
	{
		return m_L * m_W * 2 + m_L * m_H * 2 + m_W * m_H * 2;
	}
	//��ȡ���������
	int getVolume()
	{
		return m_L * m_W * m_H;
	}
	//�ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
	int getm_L()
	{
		return m_L;
	}
	int getm_W()
	{
		return m_W;
	}
	int getm_H()
	{
		return m_H;
	}

private:   //����
	int m_H;
	int m_L;
	int m_W;
	//��������
};
void Issame(Cube cube1, Cube cube2)
{
	//if (cube1.getAera() == cube2.getAera() && cube1.getVolume() == cube2.getVolume() )
	if(cube1.getm_L()==cube2.getm_L() && cube1.getm_W()==cube2.getm_W() && cube1.getm_H()==cube2.getm_H() \
	  && cube1.getAera() == cube2.getAera() && cube1.getVolume() == cube2.getVolume())
	{
		cout << endl;
		cout << "������cube1�볤����cube2��ͬ" << endl; 
	}
	else
	{
		cout << endl;
		cout << "������cube1�ͳ�����cube2��ͬ" << endl;
	}
}
int main60()
{
	Cube cube1;
	cube1.setValue(1, 1, 3);
	cube1.getValue();
	cout << "����������Ϊ��" << cube1.getAera() << endl;
	cout << "���������Ϊ��" << cube1.getVolume() << endl; 

	cout << endl;

	Cube cube2;
	cube2.setValue(2, 2, 3);
	cube2.getValue();
	cout << "����������Ϊ��" << cube2.getAera() << endl;
	cout << "���������Ϊ��" << cube2.getVolume() << endl;
	
	//����ȫ�ֺ����ж�
	Issame(cube1,cube2); //�ж������������Ƿ���ͬ

	//���ó�Ա�����ж�
	
	system("pause");
	return 0;
}