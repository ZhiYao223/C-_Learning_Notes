#include <iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //˽�г�Աֻ�Ǳ������ˣ������ǻ�̳���ȥ
};

//�����̳�
class Son : public Base
{
public:
	int m_D;
};

void test79()
{
	cout << "sizeof Son =" << sizeof(Son) << endl; 
}

int main79()
{
	test79();
	system("pause");
	return 0;
}
