//����ָ����Ե��ó�Ա���������ó�Ա�������ܷ��ʳ�Ա����

#include <iostream>
using namespace std;

//��ָ����ó�Ա����
class People
{
public:
	void ShowClassName()
	{
		cout << "this is People class" << endl; 
	}
	void ShowPeopleAge()
	{
		if (this == NULL)   //��ߴ���Ľ�׳�ԣ����⴫���ָ��ʹ���뱼��
		{
			return;
		}
		cout << "age = " << m_age << endl;  //�����ָ��Ϊ�գ�this->m_ageû��ȷ���Ķ����޷���������ĳ�Ա���������
	}
	
	int m_age;
};
void test8()
{
	People* p = NULL;

	p->ShowClassName();
	p->ShowPeopleAge();
}
int main71()
{
	test8();
	system("pause");
	return 0;
}