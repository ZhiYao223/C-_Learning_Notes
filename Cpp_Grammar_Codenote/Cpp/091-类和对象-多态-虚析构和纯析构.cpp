/*
�鹹�ʹ����������ԣ�
1�����Խ������ָ���ͷ�֮�����
2������Ҫ�о���ĺ���ʵ��
�������ʹ���������
1������Ǵ����������������ڳ����࣬�޷�ʵ��������
2�����������û�ж������ݣ����Բ�дΪ������������

�鹹�﷨��virtual ~����(){}
���������﷨�� virtual ~����() = 0;  //����
����::~����(){}   //����ʵ��
*/
#include <iostream>
using namespace std;
#include <string>
class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl; 
	}
	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	virtual ~Animal()
//	{
//		cout << "Animal������������" << endl; 
//	}
	//�������� ��Ҫ����Ҳ��Ҫʵ�֣����˴��������������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;      //��������
	virtual void speak() = 0;   //���麯��
};
Animal::~Animal()
{
	cout << "Animal�Ĵ���������������" << endl; 
}


class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯��" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name <<"Сè��˵��" << endl;
	}
	~Cat()
	{
		if (m_Name != NULL)
		{

		}
	}
	string* m_Name; //�����ڶ���

};

void test91()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main91()
{
	test91();
	system("pause");
	return 0;
}