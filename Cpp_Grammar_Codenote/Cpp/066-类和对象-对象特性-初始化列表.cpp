#include <iostream>
using namespace std;

//初始化列表
class People
{
public:


	//传统初始化操作
	//People(int a, int b, int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c; 
	

	//初始化列表初始化属性
	//使用初始化列表的好处：类成员中存在引用，同样只能使用初始化不能赋值
	//类成员中存在常量，如const int a; 因为常量只能初始化不能赋值
	People(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}
	int m_A;
	int m_B;
	int m_C;
};

void test4()
{
	//People p(10, 20, 30);
	People p(30,20,10);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}
int main66()
{
	test4(); 
	system("pause");
	return 0;
}
//传统赋值初始化相当于(先声明类，再做赋值操作)\
//初始化列表相当于直接声明一个有初始值的类型，省略了赋值操作，在大型项目中，\
//class类中成员变量极多的情况下，初始化列表效率更高


//常量成员必须在对象构造时进行初始化，并且不能在构造函数内部进行赋
//值操作，所以使用初始化列表是唯一的方式来初始化这些常量成员变量。
#if 0

class MyClass {
private:
	const int constantMember;

public:
	// 构造函数使用初始化列表来初始化常量成员 constantMember
	MyClass(int value) : constantMember(value) {
		// 错误的初始化方式，不能在构造函数内部对常量成员进行赋值
		// constantMember = value; // Error!
	}
};
#endif
