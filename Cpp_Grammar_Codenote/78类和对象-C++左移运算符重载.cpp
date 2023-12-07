#if 0
#include <iostream>
using namespace std;

//�������������
class People
{
	friend ostream& operator<<(ostream& out, People& p);
public:
	//���ó�Ա��������  ���������
	void operator<<(People& p)
	{
		 
	}
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<<(ostream &cout, People& p) //���� operator<<(cout, p) ��cout<<
{
	cout << "m_A = " << p.m_A << "m_B = " << p.m_B;
	return cout;
}
void test78()
{
	People p;
	p.m_A = 10;
	p.m_B = 10;
	cout << p;
}

int main78()
{
	test78(); 
	system("pause");
	return 0;
}
#endif
//������ķ���ֵ����ȡ���ڸ��غ�����������ʲô��
//����a+b�������ǵõ�һ����������ô����ֵ����a+b��ֵ
//a+=b����������a��ֵ�ı䣬��Ȼ���ò���a��ֵ�ı䣬��ô�����践��ֵ
//���о������������Ҫ�����֧�ֶ�β�����ôҲ��Ҫ����ֵ�����������������<<.
//���ǿ�����Ҫ���ж�β��룬��cout<<a<<b<<c��֮�����Ҫ������ostream�������֮������幤����
//����չʾ������������ط�ʽ��
//�Ӻţ�˫Ŀ):
#include <iostream>
using namespace std;

class Time
{
	int _hour;
	int _min;
	int _sec;
public:
	Time(int hour = 0, int min = 0, int sec = 0)
	{
		_hour = hour;
		_min = min;
		_sec = sec;
	}
	void Print()
	{
		cout << _hour << ":" << _min << ":" << _sec << endl;
	}

	Time operator+(int min)//�ӷ���
	{
		Time t(*this);//��Ϊ��+�ţ��涨���ܸı����Ҳ�����ֵ������ʹ��t��ȡ�����Է���
		t._min += min;
		if (t._min > 59)//���ʱ����ȷ��
		{
			t._hour += (t._min / 60);
			if (t._hour > 23)
				t._hour /= 24;
			t._min %= 60;
		}
		return t;
	}
};

int main78()
{
	Time a(10, 30, 30);
	(a + 140).Print();
	system("pause");
	return 0;
}
//Ĭ�ϸ�ֵ���������
//��������û���ֶ����帳ֵ��������أ�C++ҲΪ�����ṩ��Ĭ�Ϻ�����

//��Ĭ�ϸ�ֵ�����У��������Ͱ��ֽڿ������Զ������ͻ�ȥ���Լ���Ĭ�ϸ�ֵ���ء������Ĭ�Ͽ������켫Ϊ���ƣ������Ŀ��Կ�����ƪ���£���������������������캯��

//��ˣ������ǵ�����ֻ��int��char��double֮����������ʱ��������д��ֵ���ء�

//���ǣ������ָ�롢malloc��new֮��ָ���ַ���ֶ����ٿռ�ģ�һ������»�����Ҫ��д���صġ�

//�ܶ���֮��Ĭ�ϸ�ֵ����ֻ�ܽ���ǳ�������Ƿ���Ҫ�ֶ�ȥдҪ������ĳ�Ա�����жϡ�
#if 0
#include <iostream>
using namespace std;

class complex {
public:
	complex(double real = 0.0, double imag = 0.0) :m_real(real), m_imag(imag) {};
public:
	friend complex operator+(const complex& A, const complex& B);
	friend complex operator-(const complex& A, const complex& B);
	friend complex operator*(const complex& A, const complex& B);
	friend complex operator/(const complex& A, const complex& B);
	friend istream& operator>>(istream& in, complex& A);
	friend ostream& operator<<(ostream& out, complex& A);

private:
	double m_real;  //ʵ��
	double m_imag;  //�鲿
};

//���ؼӷ�����
complex operator+(const complex& A, const complex& B) {
	complex C;
	C.m_real = A.m_real + B.m_real;
	C.m_imag = A.m_imag + B.m_imag;
	return C;
}
//���ؼ��������
complex operator-(const complex& A, const complex& B) {
	complex C;
	C.m_real = A.m_real - B.m_real;
	C.m_imag = A.m_imag - B.m_imag;
	return C; 
}
//���س˷������
complex operator*(const complex& A, const complex& B) {
	complex C;
	C.m_real = A.m_real * B.m_real - A.m_imag * B.m_imag;
	C.m_imag = A.m_imag * B.m_real + A.m_real * B.m_imag;
	return C; 
}
//���س��������
complex operator/(const complex& A, const complex& B) {
	complex C;
	double square = A.m_real * A.m_real + A.m_imag * A.m_imag;
	C.m_real = (A.m_real * B.m_real + A.m_imag * B.m_imag) / square;
	C.m_imag = (A.m_imag * B.m_real - A.m_real * B.m_imag) / square;
	return C;
}
//�������������
istream& operator>>(istream& in, complex& A) {
	in >> A.m_real >> A.m_imag;
	return in; 
}

//������������
ostream& operator<<(ostream& out, complex& A) {
	out << A.m_real << "+" << A.m_imag << "i";
	return out; 
}

int main()
{
	complex c1, c2, c3;
	cin >> c1 >> c2;
	
	c3 = c1 + c2;
	cout << "c1 + c2 = " << c3 << endl;

	c3 = c1 - c2;
	cout << "c1 - c2 = " << c3 << endl;

	c3 = c1 * c2;
	cout << "c1 * c2 = " << c3 << endl;

	c3 = c1 / c2;
	cout << "c1 / c2 = " << c3 << endl;
	system("pause");
	return 0;
}
#endif

