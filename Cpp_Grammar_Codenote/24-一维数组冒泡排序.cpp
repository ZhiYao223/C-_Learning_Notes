#if 0
#include <iostream>
using namespace std;
//�Ƚ����ڵ�Ԫ�أ������һ���ȵڶ����󣬾ͽн�����������
//��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ
int main()
{
	//����ð������ʵ����������
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };//9��Ԫ��
	cout << "����ǰ��" << endl;
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//��ʼð������
	//�ܹ���������Ϊ Ԫ�ظ���-1
	for (int i = 0;i < 9 - 1;i++)
	{
		//�ڲ�ѭ���Աȣ�����=Ԫ�ظ��� -��ǰ����-1
		for (int j = 0;j < 9 - i - 1;j++)
		{
			//�����һ�����֣��ȵڶ������ִ󣬽�����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		}
	} 
	//�������
	cout << "���������" << endl;
	for (int i = 0;i < 9;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
#endif

#include <iostream>
using namespace std;
int main24()
{
	//����һ��Ԫ�أ�����ӡ
	int arr[9] = { 3,4,2,7,5,9,6,8,1 };
	cout << "Ԫ������ǰ��" << " ";
	//������Ԫ�ظ���
	int num = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < num ;i++)
	{
		cout << arr[i] << "  ";
	}

	//����ð������,�ܹ��������� = Ԫ�ظ���-1   i��ʾ��ǰ��i������
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1;j++)    //j��ʾ���������У���j��Ԫ��
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//�����������ӡ���
	cout << "\nԪ�������" << " ";
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;

}