#include <iostream>
using namespace std;
int main09()
{
	//��ֻС������أ��ж���ֻ����

	//������ֻС������ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//���û�������ֻС�������
	cout << "��������ֻС������أ�" << endl;
	cin >> num1 >> num2 >> num3;

	//�ж���ֻ����
	if (num1 >= num2)
	{
		if (num1 >= num3)
		{
			cout << "��һֻ����" << endl;
		}
		else
		{
			cout << "����ֻ����" << endl; 
		}
	}
	else
		if (num2 >= num3)
		{
			cout << "�ڶ�ֻ����" << endl; 
		}
		else
		{
			cout << "����ֻ����" << endl; 
		}
	
	system("pause");
	return 0;
}