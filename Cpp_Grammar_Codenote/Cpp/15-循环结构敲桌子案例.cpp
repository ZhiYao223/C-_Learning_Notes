#include <iostream>
using namespace std;
int main15()
{
	//1.������1������100
	//2.�ж�ÿ���һ����������ָ�λ����ʮλ�����ж��Ƿ�7�������������7�ı�������ӡ������
	// �����һ���ж��ٸ�������������
	//3.���򣬴�ӡ
	int ge = 0; int shi = 0;
	int times = 0; int number = 0;   //numberΪ����������ͳ�������ӵĸ���  
	for (int num = 1; num <= 100; num++)
	{
		ge = num % 10;
		shi = num / 10 % 10;
		times = num % 7;               //����7�ı���������7��������0
		if ((ge == 7) || (shi == 7) || (times == 0)) //��������һ����������������
		{
			cout << "������" << endl; number++;
		}
		else
		{
			cout << num << endl; 
		}
	}
	cout << "һ������"<< number <<"������" << endl;
	//system("pause");
	return 0;
}