//�������� ������[];
//�������� ������[���鳤��]=��ֵ1��ֵ2��ֵ3...��;
//�������� ������[] = {ֵ1��ֵ2��ֵ3...};

#include <iostream>
using namespace std;
#define key1   1
#define key2   0
#define key3   0
int main20()
{
#if key1
	int num[5] = { NULL };             //��ʼ��
	for (int i = 0;i <= 4;i++)
	{
		num[i] = 10 + 10 * i;
		cout << num[i] << endl;
	}
	return 0;
#endif

#if key2
	int arr1[5] = { 10,20,30,40,50 };//
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << endl;
	}
	return 0;
#endif

	//����ڳ�ʼ������ʱ��û��ȫ����д�꣬����0���ʣ������
	//int arr2[5] = { 10,20,30 };  //�������������Զ�����0

#if key3
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };
	for (int i = 0;i < 9;i++)
	{
		cout << arr3[i] << endl;
	}
	return 0;
}
#endif
}