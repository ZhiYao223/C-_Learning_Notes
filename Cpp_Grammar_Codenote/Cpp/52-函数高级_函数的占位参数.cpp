#include <iostream>
using namespace std;


//ռλ����
//����ֵ����	  ���������������ͣ�����
//ռλ��������������Ĭ�ϲ�������fuc1����
void func2(int a, int = 10)
{
	cout << "this is value��" << a << endl;
}

void func1(int a, int)  //�ڶ���intռλ
{
	cout << "this is value: "<< a << endl;
	
}
int main52()
{
	func1(10, 10); //�ڶ���10�����ò�����ֻ��ռλ����
	func2(10);
	system("pause");
	return 0;
}