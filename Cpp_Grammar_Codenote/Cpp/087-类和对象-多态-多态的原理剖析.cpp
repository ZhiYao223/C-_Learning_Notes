/*
����ʲô���͵�ָ�붼ռ4���ֽڿռ䣬virtual 
����Ĵ�С��1��sizeof Animal = 1  ����virtual��sizeof Animal = 4 
ֻ�зǾ�̬��Ա�������������Ĵ洢�ռ����Ա��������
��Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա������������Ķ����ϡ�
�Ǿ�̬��Ա��������̬��Ա��������̬��Ա����ռ�õ��ڴ����ռ����Ķ���ռ䣬������ĳһ��Ķ���
*/

#include <iostream>
using namespace std;
//��̬

//������
class Animal
{
public:
	//�麯��
	//����virtual�󣬱���ĸ��ֽڣ�û��virtual�ǿ��࣬ռ1���ֽ�
	virtual void speak()  //����virtual"������˵��",����virtual"Сè��˵��"   �Ǿ�̬��Ա������������Ķ���
	{
		cout << "������˵��" << endl;

	}
};
//è��
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}

};
//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};
//ִ��˵���ĺ���
//��ַ��󶨣��ڱ���׶ξ�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
void doSpeak(Animal& animal)  //Animal &animal = cat;
{
	animal.speak();
}

void test87()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

int main87()
{
	test87();
	system("pause");
	return 0;
}

