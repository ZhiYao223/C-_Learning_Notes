//vbptr �����ָ�� ָ��vbtable������    v-virtual  b-base ptr-pointer
#include <iostream>
using namespace std;

//������
class Animal
{
public:
	int m_Age;
};

//������̳У�������μ̳е�����
//�̳�֮ǰ�����Ϲؼ���virtual��Ϊ��̳У� Animal��Ϊ�����
//����
class Sheep :virtual public Animal {};

//����
class Tuo :virtual public Animal {};

//������
class SheepTuo :public Sheep, public Tuo{};


void test85()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ��������������
	cout << "st.Sheep::m_Age =" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age =" << st.Tuo::m_Age << endl;
	//�����������֪����ֻ��һ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
	cout << "st.m_Age = " << st.m_Age << endl; //������ʣ�������û�м�virtual�����ó��ֶ������޷����ʡ�

}


int main85()
{
	test85();
	system("pause");
	return 0;
}
