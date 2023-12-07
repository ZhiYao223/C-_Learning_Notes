#include <iostream>
using namespace std;
#include <string>
//**********************************************************************************************************
//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
//��ͨд��/��ͳ�����д��
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")  //oper��ʾ�ַ�
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		else
		{
			return m_Num1 / m_Num2;
		}
		//�������չ�µĹ��ܣ���Ҫ�޸�Դ��
		//����ʵ�����У��ᳫ����ԭ�򣺶���չ���п��������޸Ľ��йر�
	}
	int m_Num1; //������1
	int m_Num2; //������2
};
void test88_1()
{
	//������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
	cout << c.m_Num1 << "/" << c.m_Num2 << "=" << c.getResult("/") << endl;
}
//****************************************************************************************************
//���ö�̬ʵ�ּ�������ʵ�ּ�����������
/*
��̬�ô���
1����֯�ṹ����
2���ɶ���ǿ
3������ǰ�ںͺ�����չ�Լ�ά���Ը�
*/
//ʵ�ּ����������
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1 = 0;
	int m_Num2 = 0;
};


//��Ƽӷ���������
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//��Ƽ�����������
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//��Ƴ˷���������
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
//��Ƴ�����������
class DivCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 / m_Num2;
	}
};
void test88_2()
{
	//��̬ʹ������:����ָ�������ָ���������
	//�ӷ�
	AbstractCalculator* abc = new AddCalculator; //new˵�������ڶ������ֶ������ֶ��ͷ�
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;	//�����ǵ�����
	//����
	abc = new SubCalculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
	//�˷�
	abc = new MulCalculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;	
	//����
	abc = new DivCalculator;
	abc->m_Num1 = 20;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "/" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}


int main88()
{
	//test88_1();
	test88_2(); 
	system("pause");
	return 0;
}