#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
//���캯��
public:
	//��ȫ�ֺ�����ʽ����+ - * /  
	friend Complex operator+(const Complex& c1, const Complex& c2);
	friend Complex operator-(const Complex& c1, const Complex& c2);
	friend Complex operator*(const Complex& c1, const Complex& c2);
	friend Complex operator/(const Complex& c1, const Complex& c2);
	friend bool operator==(const Complex& c1, const Complex& c2);
	friend bool operator!=(const Complex& c1, const Complex& c2);

public:  
	
	Complex(double real = 0.0, double image = 0.0) : m_real(real), m_image(image) {}

	//�Գ�Ա������ʽ��������� ֻ��Ҫһ������,��һ����this��������
	Complex& operator+=(const Complex& c);
	Complex& operator-=(const Complex& c);
	Complex& operator*=(const Complex& c);
	Complex& operator/=(const Complex& c);

	//������ʾ����
	void complexshow()
	{
		if (m_image > 0)
		{
			if (m_image == 1)
			{
				cout << m_real << "+" << "i" << endl;
			}
			else
			{
				cout << m_real << "+" << m_image << "i" << endl; 
			}
		}
		else if(m_image < 0)
		{
			if (m_image == -1)
			{
				cout << m_real << "-" << "i" << endl; 
			}
			else
			{
				cout << m_real << "-" << m_image << "i" << endl; 
			}
		}
		else
		{
			cout << endl;
		}
	}
public:
	//�ú���û���޸Ķ����״̬������ں���������ĩβʹ���� const �ؼ�����ȷ������Գ�Ա��������޸ġ�
	double getreal() const { return m_real; }    
	double getimage() const { return m_image; } 

private:
	double m_real;  //ʵ��
	double m_image; //�鲿
};

/************************************************************************************
	������ȫ�ֺ�����ʽ������������أ���Ҫ���������������и�ֵ���ȽϵȲ�����
	�����ڳ�Ա��������ֻ��Ҫһ����������һ������ͨ��thisָ���������
************************************************************************************/
//�ӷ�+���������   
Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.m_real = c1.m_real + c2.m_real;
	temp.m_image = c1.m_image + c2.m_image;
	return temp;
}
//����-���������
Complex operator-(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.m_real = c1.m_real - c2.m_real;
	temp.m_image = c1.m_image - c2.m_image;
	return temp; 
}
//�˷�*���������
Complex operator*(const Complex& c1, const Complex& c2) 
{
	Complex temp;
	temp.m_real = (c1.m_real * c2.m_real) - (c1.m_image * c2.m_image);
	temp.m_image = (c1.m_real * c2.m_image) + (c1.m_image * c2.m_real);
	return temp; 
}
//����/���������
Complex operator/(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.m_real = (c1.m_real * c2.m_real + c1.m_image * c2.m_image) / (pow(c2.m_real, 2) + pow(c2.m_real, 2));
	temp.m_image = (c1.m_image * c2.m_real - c1.m_real * c2.m_image) / (pow(c2.m_real, 2) + pow(c2.m_real, 2));
	return temp; 
}
//���� == �����
bool operator==(const Complex& c1, const Complex& c2)  // ��Ҫ��������Ԫ����
{
	if (c1.getreal() == c2.getreal() && c1.getimage() == c2.getimage())
	{
		return true; 
	}
	else
	{
		return false;
	}
}
//���� != �����
bool operator!=(const Complex& c1, const Complex& c2)
{
	//����������ֻҪʵ�����鲿�κ�һ������ȣ���Ϊ����
	if (c1.m_real != c2.m_real || c1.m_image != c2.m_image)
	{
		return true; 
	}
	else
	{
		return false;
	}
}
//����+=�����

/*
������
��ʾ���У����Ǽ��� Complex �����������˽�г�Ա���� m_real �� m_imag���ֱ��ʾʵ�����鲿��
�� operator+= �����У����ǽ������ c �����ʵ�����鲿�ֱ�ӵ���ǰ�����ʵ�����鲿�ϣ�
������������ڵ�ǰ�����С�������Ƿ��� *this������ǰ��������ã���֧����ʽ��ֵ������
��� operator+= ���ص��Ƕ�����������ã���ô����ֻ�ܶ������������һ���ۼӲ�����
���޷���ͬһ���϶Զ����������������ۼӲ�����
*/
//���� += �����
Complex& Complex::operator+=(const Complex& c)
{
	this->m_real += c.m_real;
	this->m_image += c.m_image;
	return *this; 
}

//���� -= �����
Complex& Complex::operator-=(const Complex& c)
{
	this->m_real -= c.m_real;
	this->m_image -= c.m_image;
	return *this; 
}
//����*= �����
Complex& Complex::operator*=(const Complex& c)
{
	this->m_real = this->m_real * c.m_real - this->m_image * c.m_image;
	this->m_image = this->m_real * c.m_image + this->m_image * c.m_real;
	return *this; 
}

//����/=�����
Complex& Complex::operator/=(const Complex& c)
{
	this->m_real = (this->m_real * c.m_real + this->m_image * c.m_image) / (pow(c.m_real, 2) + pow(c.m_image, 2));
	this->m_image = (this->m_image * c.m_real - this->m_real * c.m_image) / (pow(c.m_real, 2) + pow(c.m_image, 2));
	return *this;
}




void test77_4()
{
	Complex c1(1, 2);
	Complex c2(2, 3);
	Complex c3(3, 4);
	Complex c4(4, 5);
	Complex c5(5, 6);
	c1.complexshow();
	c2.complexshow();
	c3.complexshow();
	c4.complexshow();
	cout << endl;

	//���ԼӼ��˳�
	Complex c6 = c1 + c2;
	Complex c7 = c2 - c3;
	Complex c8 = c3 * c4;
	Complex c9 = c4 / c5;
	c6.complexshow();
	c7.complexshow();
	c8.complexshow();
	c9.complexshow();
	cout << endl;

	c3 += c1;
	c4 -= c2;
	c5 *= c2;
	c6 /= c2;
	c3.complexshow();
	c4.complexshow();
	c5.complexshow();
	c6.complexshow();
	cout << endl;   

	if (c1 != c2)
	{
		cout << "true" << endl; 
	}
	else
	{
		cout << "false" << endl;
	}
	if (c3 == c4)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false"<< endl;
	}

}

int main77_4()
{
	test77_4();
	system("pause");
	return 0;
}