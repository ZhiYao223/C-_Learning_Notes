/*
���������Ϊ��Ա������
	���������˫Ŀ���������ֻҪ����һ��������Ϊ�Ҳ�����������������������Ǹö�����
	��������ص�Ŀ��������Ͳ����������ò�����������Ĳ��������Ƕ�����

������������һ�������࣬Ϊ��ʵ�ָ����ļӷ������Զ���һ����Ա
����Add,����������ʵ����������������ӣ�������һ���µĸ�������
*/
#if 0
#include <iostream>
#include<string>
using namespace std;

class Complex
{
	double real, image;
public:
	Complex(double r = 0, double i = 0)
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
	Complex Add(const Complex& c)   //��Ա������������أ���һ�����������������this
	{
		Complex temp;
		temp.real = this->real + c.real;
		temp.image = this->image + c.image;
		return temp;
	}
	bool operator==(const Complex& c2)//==��˫Ŀ���������������,�����ȷ���True,�����False
	{
		if (this->real == c2.real && this->image == c2.image)
			return true;
		else
			return false;
	}
};

int main77_1()
{
	Complex c1(1, 1), c2(8, -3);
	c1.show();
	c2.show();
	Complex c3 = c1.Add(c2);  //��Ա�������أ�����
	if (c1 == c2)               //�ж����������Ƿ����
		cout << "�����������" << endl;
	else
		cout << "�������������" << endl;
	//Complex c3 = c1 + c2; ����
	c3.show();
	return 0;
}

#endif
