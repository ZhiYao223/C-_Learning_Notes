#include <iostream>
#include <ctime>  //ϵͳʱ��ͷ�ļ�
using namespace std;
int main12()
{
	//1.ϵͳ������������
	//2.��ҽ��в²�
	//3.�ж���ҵĲ²�
	// 
	//4.�¶�  �˳���Ϸ  �´� ��ʾ������С�������²�
	srand(time(0));                          //���������������  ����srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;             //rand()%100 + 1��ʾ����Ϊ0+1-99+1�������������������α�����
	cout << num << endl;

	int val = 0;  //�²���������ʼ��
	cout << "������������Ĳ²⣺" << endl;
	cin >> val;
	int number = 1;
	while (1)
	{
		if (val > num)
		{
			cout << "�²��������������������Ĳ²⣺" << endl;
			cin >> val; 
		}
		else if (val < num)
		{
			cout << "�²�����С���������������Ĳ²⣺" << endl;
			cin >> val; 
		}
		else if (val == num)
		{
			cout << "��ϲ���¶���, ��ʹ��"<<number<<"�λ��ᣬ��Ϸ������" << endl;
			break;       //����whileѭ����������Ϸ
		}
		number++;
		if (number > 5)
		{
			cout << "���ź������Ĳ²���������꣬��Ϸ������" << endl;
		}
	}
	system("pause");
	return 0;


}