/*
��̬��c++���������������֮һ
��̬��Ϊ����
	��̬��̬���������غ�������������ھ�̬��̬�� ���ú�����
	��̬��̬����������麯��ʵ������ʱ��̬
��̬��̬�Ͷ�̬��̬����
	��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
	��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ

��̬��̬����������
1�����м̳й�ϵ�縸�ӹ�ϵ��������è�Ĺ�ϵ
2��������д������麯��

//��̬��̬ʹ��
1������ָ������ã�ָ���������

���أ���������ͬ
��д����������ֵ���͡��������������б���ȫ��ͬ
*/
#include <iostream>
using namespace std;
//��̬

//������
class Animal
{
public:
	//�麯��
	virtual void speak1()  //����virtual"������˵��",����virtual"Сè��˵��"
	{
		cout << "������˵��" << endl;

	}
};
//è��
class Cat :public Animal
{
public:
	void speak1()
	{
		cout << "Сè��˵��" << endl;
	}

};
//����
class Dog :public Animal
{
public:
	void speak1()
	{
		cout << "С����˵��" << endl;
	}
};
//ִ��˵���ĺ���
//��ַ��󶨣��ڱ���׶ξ�ȷ��������ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
void doSpeak1(Animal &animal)  //Animal &animal = cat;
{
	animal.speak1();
}

void test86()
{
	Cat cat;
	doSpeak1(cat);

	Dog dog;
	doSpeak1(dog);
}

int main86()
{
	test86();
	system("pause");
	return 0;
}