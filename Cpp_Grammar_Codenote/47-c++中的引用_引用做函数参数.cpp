//��������ʱ�������������õļ������β�����ʵ��
//�ŵ�:��ָ���޸�ʵ��
#include <iostream>
using namespace std;

//1.ֵ����
void Myswap01(int a, int b)  //ֵ���ݲ�Ӱ��main�е�ʵ��
{
	int temp = a;
	a = b;
	b = temp;
/*	cout << "Myswap01 a = " << a << endl;   //�βη����ı�
	cout << "Myswap01 b = " << b << endl;*/

}
//2.��ַ����
void Myswap02(int* c, int* d)  //��ַ���ݣ������޸�main������ʵ��c,d��ֵ
{
	int temp = *c;    
	*c = *d;
	*d = temp;
}

//3.���ô���
void Myswap03(int &e, int &f)   //���ô��ݣ�����Ӱ��ʵ�ε�ֵ,���ò�����ʵ�ι���һ����ַ��ֻ�����ֲ�ͬ�������޸��βμ��޸�main�е�ʵ��e,f
{
	int temp = e;
	e = f;
	f = temp;
}


int main47()
{
	int a = 10;
	int b = 20;
	cout << "ֵ���ݣ�" << endl;
	Myswap01(a, b);   //ֵ���ݣ��ββ���Ӱ��ʵ�ε�ֵ
	cout << "a = " << a << endl;  //ʵ�β���
	cout << "b = " << b << endl;

	int c = 10;
	int d = 20;
	cout << "��ַ���ݣ�" << endl;
	Myswap02(&c, &d);  //��ַ���ݣ���Ӱ��ʵ��
	cout << "c = " << c << endl;  //ʵ�α�
	cout << "d = " << d << endl;

	int e = 10;
	int f = 20;
	cout << "���ô��ݣ�" << endl;
	Myswap03(e, f);       // ���ô��ݣ���Ӱ��ʵ��
	cout << "e = " << e << endl;  //ʵ�α�
	cout << "f = " << f << endl;

	system("pause");
	return 0;
	//��ͨ�βεĵ�ַ��ջ�������ý����������ͷ�a,b�� ���������ö�����ַ����������
	//ָ���õĵ�ַ���ǿ��ڴ�ĵ�ַ���������ǰ��ǿ��ڴ������������
	//��ͳһ������/�ֲ��ռ�,������ԭ��������ͬ�������е�
}