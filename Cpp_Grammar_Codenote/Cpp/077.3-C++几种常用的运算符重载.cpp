/*
1.������������>> �� <<
2.���������++
3.��ֵ������ = 
������ ʵ����������غ���>>��<<
*/
/*
��׼����������cin�� ��istream��Ķ������ڴ����׼���루���������룩
��׼���������cout, ��ostream��Ķ����û������׼���������Ļ�����

ֻ�ܲ�����Ԫ��������ʽ��ͨ����ʽ���£�
ostream &operator <<(ostream &, const ��������ã�
istream &operator >>(istream &, ��������ã�

*/


#include <iostream>
using namespace std;

class Complex
{
	friend Complex operator+(const Complex& c1, const Complex& c2);//��Ԫ��������
	friend bool operator==(const Complex& c1, const Complex& c2); //��������
	friend ostream& operator<<(ostream& myout, const Complex& c); //<<�����������������
	friend istream& operator>>(istream& myin, Complex& c);
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
};
/*Ԫ����ʵ�����������Complex c3 = c1 + c2;
��Ԫ����ʵ�֣�c1+c2����Ҫ������������,�ҷ���Complex����*/
#if 0
Complex operator+(const Complex& c1, const Complex& c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.image = c1.image + c2.image;
	return temp;
}
//==��˫Ŀ���������������,�����ȷ���True,�����False
bool operator==(const Complex& c1, const Complex& c2)
{
	if (c1.real == c2.real && c1.image == c2.image)
			return true;
	else
		return false;
}
#endif
//��������Ϊ������������  ��һ����������״̬�ᱻ�ı䲻�ܼ�const��
//�ڶ�������complex��������ò��ܼ�const����ΪҪ�������������޸�
istream& operator>>(istream& myin, Complex& c)   
{
	cin >> c.real >> c.image;
	return myin;
}
ostream& operator<<(ostream& myout, const Complex& c)  //������д�����ݻ�ı�����״̬,�����const
{
	if (c.image > 0)
	{
		if (c.image == 1)
			cout << c.real << "+" << "i" << endl; //�����鲿Ϊ1���������3+i
		else
			cout << c.real << "+" << c.image << "i" << endl;//�����鲿Ϊ���������������3+2i;
	}
	else if (c.image < 0)
	{
		if (c.image == -1)
			cout << c.real << "-" << "i" << endl;//�����鲿Ϊ-1���������3-i
		else
				cout << c.real << c.image << "i" << endl;//�����鲿Ϊ���������������3-2i
		}
	else                 // image = 0 
	{
		cout << c.real << endl;
	}
	return myout;
}

int main77_3()
{
	Complex c1(7, 3), c2(2, 8);
	c1.show();
	c2.show();

	cout<<5<<'t'<<5.76<<endl;
	//cout << c1;
	cout << c1 << c2;  //�������c1��c2


	cout<<"--------------------------------" << endl;
	cin >> c1 >> c2;
	cout << c1 << c2;

	cout.operator<<(3);   //��ʽ���
	cout.operator<<('a');
	system("pause");
	return 0;
}