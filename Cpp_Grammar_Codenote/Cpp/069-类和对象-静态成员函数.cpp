//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//��̬��Ա������http://c.biancheng.net/view/2228.html
#if 1
#include <iostream>
using namespace std;

class People
{
public:
	static void func()
	{
		m_C = 100;   //��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;  //����,��̬��Ա���������Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ������m_B����
		cout << "static void func����" << endl;
	}
	static int m_C; //��̬��Ա����
	int m_B;   //�Ǿ�̬��Ա����
};
int People::m_C = 0;   //��̬��Ա���������������������ʼ��
//���ַ��ʷ�ʽ
void test7()
{
	//1.ͨ���������
	People p;
	p.func();

	//2.ͨ����������
	People::func();
}
int main69()
{
	test7();
	system("pause");
	return 0;
}
#endif 
