#if 0
��������
��Ա�������const�����ǳ��������Ϊ������
�������ڲ������޸ĳ�Ա����
��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�

������
��������ǰ��const�Ƹö���Ϊ������
������ֻ�ܵ��ó�����

����������޸ľ�̬��Ա������������ֻ�ܵ��ó���������Ϊ����������֤�����Բ����޸�
��Ա�������const�����ε���thisָ��
C++ const��Ա�����ͳ�Ա����������Ա��������
http://c.biancheng.net/view/2232.html
http://c.biancheng.net/view/2230.html#:~:text=1%20%E5%87%BD%E6%95%B0%E5%BC%80%E5%A4%B4%E7%9A%84%20const%20%E7%94%A8%E6%9D%A5%E4%BF%AE%E9%A5%B0%E5%87%BD%E6%95%B0%E7%9A%84%E8%BF%94%E5%9B%9E%E5%80%BC%EF%BC%8C%E8%A1%A8%E7%A4%BA%E8%BF%94%E5%9B%9E%E5%80%BC%E6%98%AF%20const%20%E7%B1%BB%E5%9E%8B%EF%BC%8C%E4%B9%9F%E5%B0%B1%E6%98%AF%E4%B8%8D%E8%83%BD%E8%A2%AB%E4%BF%AE%E6%94%B9%EF%BC%8C%E4%BE%8B%E5%A6%82%20const%20char,const%20%E8%A1%A8%E7%A4%BA%E5%B8%B8%E6%88%90%E5%91%98%E5%87%BD%E6%95%B0%EF%BC%8C%E8%BF%99%E7%A7%8D%E5%87%BD%E6%95%B0%E5%8F%AA%E8%83%BD%E8%AF%BB%E5%8F%96%E6%88%90%E5%91%98%E5%8F%98%E9%87%8F%E7%9A%84%E5%80%BC%EF%BC%8C%E8%80%8C%E4%B8%8D%E8%83%BD%E4%BF%AE%E6%94%B9%E6%88%90%E5%91%98%E5%8F%98%E9%87%8F%E7%9A%84%E5%80%BC%EF%BC%8C%E4%BE%8B%E5%A6%82%20char%20%2A%20getname%20%28%29%20const%20%E3%80%82
http://c.biancheng.net/view/2041.html
#endif

#include <iostream>
using namespace std;

//������
class People
{
public:
	//thisָ��ı���  ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//const People* const this;//ָ���ָ���ָ���ֵ�������޸�
	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�����޸�
	void ShowPeople() const  //�������޸�m_Aʱ���ں��������const
	{
		this->m_B = 100;  //��mutable��ñ�����Ϊ���޸�
		//this->m_A = 100;  //������this->m_A = 100;
		//this = NULL;//ָ��һ��ָ��p,�Ͳ�����ָ���ĵط��� thisָ�벻�����޸�ָ���ָ��
	}
	void func()
	{
		m_A = 200; //��ͨ���������޸�m_A����
	}
	int m_A;
	mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,�ӹؼ���mutable
};

void test01()
{
	People p;
	p.ShowPeople();
}
void test02()
{
	const People p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;//��������Ϊconst,����������Ҳ�����޸�
	p.m_B = 100; //m_B���˹ؼ���mutable�� ���������Ա�Ϊ���޸�
	//������ֻ�ܵ��ó�����
	p.ShowPeople();
	//p.func();//����������ֻ�ܵ��ó�������func()���ǳ�������������õ��ڲ����޸���m_A=200

}
int main72()
{
	test01();
	test02();
	system("pause");
	return 0;
}