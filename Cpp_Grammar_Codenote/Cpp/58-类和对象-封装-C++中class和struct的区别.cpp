#include <iostream>
using namespace std;
//struct��class������
//structĬ��Ȩ��Ϊ����	classĬ��Ȩ��Ϊ˽��

class c1
{
	int m_A;   //Ĭ��Ȩ��  ��˽��
};

struct c2
{
	int m_A;   //Ĭ��Ȩ��  �ǹ���
};


int main58()
{
	//c1 a;   //c1.m_A = 100;
	//a.m_A = 100;      //classĬ��˽�У�������ⲻ���Է���

	c2 b;   //
	b.m_A = 100;       //��structĬ�ϵ�Ȩ��Ϊ��������˿��Է���

	system("pause");
	return 0;
}