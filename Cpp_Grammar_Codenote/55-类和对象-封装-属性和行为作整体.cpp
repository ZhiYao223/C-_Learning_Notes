//��Ͷ���
//c++����������������Ϊ����װ���̳С���̬
//c++��Ϊ�������ﶼ��Ϊ���󣬶������������Ժ���Ϊ
//
//��װ�����壺
//�����Ժ���Ϊ��Ϊһ�����壬���������е�����
//�����Ժ���Ϊ����Ȩ�޿���
//
//�﷨�� class ����{����Ȩ�ޣ�����/��Ϊ};


#include <iostream>
using namespace std;
const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ�, 2*PI*�뾶
class Circle
{
	//����
public:
	int m_r;//�뾶

	double calculateZC()
	{
		return 2 * PI * m_r; 
	}

private:

};

int main55()
{
	//ͨ��Բ�࣬���������Բ������
	//ʵ������ͨ��һ���࣬����һ������Ĺ���
	Circle c1;
	//��Բ��������Խ��и�ֵ����
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;

	system("pause");
	return 0;
}

