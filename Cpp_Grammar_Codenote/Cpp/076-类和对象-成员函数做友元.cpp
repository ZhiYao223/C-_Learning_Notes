#include <iostream>
using namespace std;
#include <string>

class Building;

class GoodGay
{
public:
	GoodGay();
	void visit1();   //��visit()�������Է���Building��˽�г�Ա
	void visit2();   //��visit()���������Է���Building��˽�г�Ա
private:
	Building *building;

};
//������Ԫ��Ա�������࣬Ҫ���ڸ���Ԫ�����ʵ����ǰ��
//��ΪGoodGay����Ҫ����Building�����������Building�������GoodGay֮ǰ������
//��ΪBuilding�Ķ�������Ҫ��GoodGay�ĳ�Ա������������Ԫ��Ա����������Building�������GoodGay֮���壻
//��ΪGoodGay�еĹ��캯����Ҫ����Building�Ĺ��캯��������GoodGay���еĹ��캯����ʵ�ֱ�����Building��Ķ���֮��
class Building
{
	//���߱�������Goodgay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
	friend void GoodGay::visit1();
	friend void GoodGay::visit2();
public:
	Building();
public:
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout << "visit�������ڷ���: " << building->m_SittingRoom << endl;
	cout << "visit�������ڷ��ʣ�" << building->m_BedRoom << endl; 
}
void GoodGay::visit2()
{
	cout << "visit2�������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit2�������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void test76()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}
int main76()
{
	test76();

	system("pause");
	return 0;
}