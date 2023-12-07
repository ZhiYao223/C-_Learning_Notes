#include <iostream>
using namespace std;

//��̬����2 ������Ʒ
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;     //���麯��
	//����
	virtual void Brew() = 0;
	//���뱭
	virtual void PournCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
	void MakeDrink()
	{
		Boil();
		Brew();
		PournCup();
		PutSomething();

	}
};

/**********************************************************************************
 ��������
**********************************************************************************e*/
class Coffe :public AbstractDrinking
{
	//���������д�����еĴ��麯��
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//���뱭
	virtual void PournCup()
	{
		cout << "���뱭��" << endl; 
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl; 
	}
};

/**********************************************************************************
 ������
**********************************************************************************e*/
class Tea :public AbstractDrinking
{
	//�տ�ˮ
	virtual void Boil()
	{
		cout << "�տ�ˮ" << endl;
	}
	//����
	virtual void Brew()
	{
		cout << "����" << endl;
	}
	//���뱭
	virtual void PournCup()
	{
		cout << "���뱭��" << endl;
	}
	//���븨��
	virtual void PutSomething()
	{
		cout << "�������" << endl;
	}
};
//�����ʵ��
void dowork(AbstractDrinking* abs) //AbstractDrinking * abs =new Coffe
{
	abs->MakeDrink();
	delete abs;  //�ͷ�

}
void test90()
{
	//��������
	dowork(new Coffe); 
	cout << "-----------------------------" << endl;
	//������Ҷ
	dowork(new Tea);
}

int main90()
{
	test90();
	system("pause");
	return 0;
}