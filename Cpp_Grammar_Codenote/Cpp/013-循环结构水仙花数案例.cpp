#include <iostream>
using namespace std;
int main13()
{
	//1.�����е���λ�����
	int num = 100;
	int ge = 0;   //������ʼ��
	int shi = 0;
	int bai = 0;
	do
	{
		ge = num % 10;           //��ȡ��λ
		shi = num / 10 % 10;     //��ȡʮλ
		bai = num / 100;         //��ȡ��λ
		if (pow(ge,3) + pow(shi,3) + pow(bai,3) == num)
		{
			cout << "ˮ�ɻ�����" << num << endl;
		}
		num++;
	} while (num<=999 );

	//2.��������λ�����ҵ�ˮ�ɻ���
	//��ȡ��λ   153%10 = 3  ������ȡģ��10���Ի�ȡ����λ
	//��ȡʮλ   153/10%10 = 5  ��������10���õ���λ������ȡģ��10���õ�ʮλ������n%100/10
	//��ȡ��λ   153/100 =1

	//�ж� ��λ^3 + ʮλ^3 + ��λ^3  = ���ֱ���
	system("pause");
	return 0;
}