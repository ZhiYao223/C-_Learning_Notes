#if 0
#include <iostream>
using namespace std;

class Building
{
	//�൱��һ��ȫ�ֺ�����������ͷ����friend��˵��goodGayȫ�ֺ�����Building������,
	//���Է���BUilding�е�˽�г�Ա��������
	friend void goodGay(Building* building); 
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;  //����

};
//ȫ�ֺ���
void goodGay(Building *building)
{
	cout << "�û��ѵ�ȫ�ֺ������ڷ��ʣ�  " << building->m_SittingRoom << endl;
	//m_BedRoom������˽�����ԣ��޷����ʣ����������������������һ�У�ʹfriend������Ȼ��Ϳ��Է���˽�г�Ա����
	cout << "�û��ѵ�ȫ�ֺ������ڷ��ʣ�  " << building->m_BedRoom << endl;
}
void test03()
{
	Building building;
	goodGay(&building);
}
int main73()
{
	test03();
	system("pause");
	return 0;
}
#endif