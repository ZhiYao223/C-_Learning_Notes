#include <iostream>
#include <string>
using namespace std;
//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��

//�������
class Person
{
public:
	void setName(string name)  //д����
	{
		m_Name = name;
	}
	string getName()//��ȡ����
	{
		return m_Name;
	}

	void setAge(int age)  //�ɶ���д��������޸ģ����䷶ΧΪ������0~150֮�䣩
	{
		if(age<0 || age>150)    //�����������Ч��
		{
			cout << "���������������" << endl;
			return;    //�����˳�
		}
		m_Age = age;
	}
	int getAge()     //д����
	{
		//m_Age = 0;  //��ʼ��Ϊ0��
		return m_Age;
	}
	//��������   ֻд
	void setLover(string lover)
	{
		m_Lover = lover;
	}


private:        //��Ϊ˽��
	//���������䡢����
	string m_Name;    //�ɶ���д
	int m_Age;        //ֻ��
	string m_Lover;    //ֻд
};

int main59()
{
	Person p;
	p.setName("����"); //��������
	cout << "����Ϊ��" << p.getName() << endl;  //��ʾ����
	//p.getAge = 18;  //����Ϊ˽��Ȩ�ޣ������޸�
	p.setAge(100);

	cout << "����Ϊ��" << p.getAge() << endl;

	p.setLover("�仨");  //��������Ϊ�仨
	//cout << "����Ϊ��" << p.getLover() << endl;  //ֻдȨ�ޣ�û��getLover()����
	system("pause");
	return 0;
}