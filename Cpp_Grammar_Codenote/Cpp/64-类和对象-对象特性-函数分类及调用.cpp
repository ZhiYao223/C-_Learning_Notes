#include <iostream>
using namespace std;
//1.���캯���ķ��༰����
//���ղ�������	�޲ҹ���(Ĭ�Ϲ���)  ��  �вι���
//�������ͷ���	��ͨ����     ��������
class People1
{
public:
	//���캯��
	People1()   //�޲ι���
	{
		cout << "People1���޲ι��캯������" << endl;
	}
	People1(int a) //�вι���
	{
		age = a; 
		cout << "People1���вι��캯������" << endl;
	}
	//�������캯��
	People1(const People1 &p)//֮���������ã�����Ϊֵ���ݹ��̻ᷴ�����ÿ������캯������ַ����ʡ�ڴ棬const�����
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "People1�Ŀ������캯������" << endl;
	}
	~People1()
	{
		cout << "People��������������" << endl; 
	}

	int age;
};

//���ù��캯��
void test2()
{
	//���ŷ������ã�
	People1 p;  //Ĭ�Ϲ��캯���ĵ���
	People1 p2(10); //�����вι��캯��
	People1 p3(p2); //���ÿ������캯��
	//�����޲ι��캯��ʱ�����ܼ����ţ��磺People1 p1();����������Ϊ����һ����������
	
	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p2.age << endl;

	//��ʾ��
	//People1 p1;
	//People1 p2 = People1(10);
	//People1 p3 = People1(p2);

	People1(10);//�����е���дʱ�������������󣺵�ǰִ�н�����ϵͳ���������յ�����������������
	cout << "aaaaa" << endl;
	//��Ҫ���ÿ������캯����ʼ����������  ����������ΪPerson(p3) == Person p3; ��������
	//Person(p4);
	
	//��ʽת����
	People1 p4 = 10; //�൱��д�� People1 p4 = People1(10);
	People1 p5 = p4; //��������   People1 p5 = People1(p4);
}

int main64()
{
	test2();
	system("pause");
	return 0;
}