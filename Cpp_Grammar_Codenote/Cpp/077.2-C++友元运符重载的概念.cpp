/*
���������µ������
���ܸı�������������(����)�ĸ���
���ܸı������������ȼ���ͽ����
Ӧ�÷���ʵ����Ҫ�����صĹ���Ӧ���������ԭ�еĹ������ƣ�����û��Ŀ�ĵ�ʹ�����������
*/
/*
����Ӧ����������Ϊ�������Ԫ����������һ����ʽΪ:
	friend �������� operator @(������);
	�������ľ��嶨�����£�
	�������� operator @(������)
	{
		//������
	��
*/
//������ ���帴����Complex�� ������Ԫ����ʵ�����������+��==


#include <iostream>
using namespace std;

class Complex77
{
	friend Complex77 operator+(const Complex77& c1, const Complex77& c2);//��Ԫ��������
	friend bool operator==(const Complex77& c1, const Complex77& c2); //��������
	double real, image;
public:
	Complex77(double r = 0, double i = 0)
	{
		real = r;
		image = i;
	}
	void show()
	{
		if (image > 0)
		{
			if (image == 1)
				cout << real << "+" << "i" << endl; //�����鲿Ϊ1���������3+i
			else
				cout << real << "+" << image << "i" << endl;//�����鲿Ϊ���������������3+2i;
		}
		else if (image < 0)
		{
			if (image == -1)
				cout << real << "-" << "i" << endl;//�����鲿Ϊ-1���������3-i
			else
				cout << real << image << "i" << endl;//�����鲿Ϊ���������������3-2i
		}
		else                 // image = 0 
		{
			cout << real << endl;
		}
	}
	/*  ��Ա����ʵ�����������
	Complex Add(const Complex& c)   //��Ա������������أ���һ�����������������this
	{
		Complex temp;
		temp.real = this->real + c.real;
		temp.image = this->image + c.image;
		return temp;
	}
	*/

};
/*��Ԫ����ʵ�����������Complex c3 = c1 + c2;
��Ԫ����ʵ�֣�c1+c2����Ҫ������������,�ҷ���Complex����*/
Complex77 operator+(const Complex77& c1, const Complex77& c2)
{
	Complex77 temp;
	temp.real = c1.real + c2.real;
	temp.image = c1.image + c2.image;
	return temp;
}
bool operator==(const Complex77& c1, const Complex77& c2)//==��˫Ŀ���������������,�����ȷ���True,�����False
{
	if (c1.real == c2.real && c1.image == c2.image)
		return true;
	else
		return false;
}
int main77_2()
{
	Complex77 c1(1, 1), c2(2, -3);  //������������ 
	c1.show();
	c2.show();

	Complex77 c3 = operator+(c1, c2);  //��ʾ�ĵ���

	c3.show();
	if (c1 == c2)
		cout << "�����������" << endl;
	else
		cout << "�������������" << endl;
	//Complex c3 = c1 + c2; //��ʽ�ĵ���

	//cout << c1; //����
	cout.operator<<(3);
	cout.operator<< ('a');


	return 0;
}