#include <iostream>
using namespace std;

#if 0
void main()
{
	int a = 1;
	int& b = a;
	cout << "a:address:" << &a << endl;
	cout << "b:address:" << &b << endl;



	int& c = b;
	c = 4;

	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;   
	//a,b,c��ֵ��Ϊ4
}
#endif

#if 0
void main()
{
	int d1 = 4;
	const int& d2 = d1;  //d1 = d2 = 4;
	d1 = 5;  //d1=d2=5;
	//d2 = 6; error�����ܸ�������ֵ

	const int d3 = 1;
	const int& d4 = d3;
	//int &d5 = d3;
	const int& d6 = 5;//ֻ�г����ÿ���Ӧ�ó���

	double d7 = 1.1;


}
#endif


#if 0


class Student
{
public:
	string m_name;
	int m_ID;

	void ShowStudent()
	{
		cout << "������" << m_name << "\tѧ�ţ�" << m_ID << endl;
	}
	//��������ֵ
	void setname(string name)
	{
		m_name = name;
	}
	void setID(int ID)
	{
		m_ID = ID; 
	}
private:

};

int main()
{
	Student s1;
	s1.m_name = "zhangsan";
	s1.m_ID = 1;
	s1.ShowStudent();

	Student s2;
	s2.m_name = "lisi";
	s2.setID(3);
	s2.ShowStudent();

	system("pause");
	return 0;
} 
#endif

#if 0

class Person
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;

private:
	void func()
	{
		m_Name = "zhangsan";
		m_Car = "baoma";
		m_Password = 123456;
	}
public:
	void func2()
	{
		cout << "This is a car!" << endl;
	}
};

int main()
{
	Person p1;
	p1.m_Name = "lisi";
	//p1.m_Car = "benchi";
	//p1.Password = 12335;
	//p1.func2();
	system("pause");
	return 0;
}
#endif

#if 0

class People
{
public:
	People() {
		cout << "People��Ĭ�Ϲ��캯��" << endl;
	}
	People(int age, int height) {
		m_Age = age;
		m_Height = new int(height);
		cout << "People���вι��캯������" << endl; 
	}
	People(const People& p) {
		cout << "people�������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;ǳ����
		//�������
		m_Height = new int(*p.m_Height);
	}
	
	~People()
	{
		//�������룬�����������������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL; 
		}
		cout << "People��������������" << endl; 
	}

	int m_Age;
	int* m_Height;
};

#endif

#if 0
#include<string>

//�ֻ���
class Phone {
private:
	string brand;
	string model;
public:
	//���캯��
	Phone(const string& brand,const string& model):brand(brand),model(model){}

	//��绰�ķ���
	void makecall(const string& number) {
		cout << "Using" << brand << "" << model << "to make a call to" << number << endl;

	}
};

//����
class Person
{
private:
	string name;
	Phone phone; //������һ���ֻ�������Ϊ��Ա
public:
	//���캯��
	Person(const string& name,const string& phoneBrand, const string& phoneModel):name(name),phone(phoneBrand,phoneModel){}

	//���ֻ���绰�ķ���
	void call(const string& number) {
		cout << name <<" is making a call... "<< endl;
		phone.makecall(number);
	}
};

int main()
{
	//����һ���˶���
	Person person("Alice", "Apple", "iphone");

	//��绰
	person.call("1234456");
	system("pause");
	return 0;
}

#endif

#if 1

class People
{
public:
	People(int age) {

	}
};


#endif
