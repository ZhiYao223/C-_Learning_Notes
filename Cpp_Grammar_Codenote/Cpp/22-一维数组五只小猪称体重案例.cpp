#include <iostream>
using namespace std;
int main22()
{
	int arr[5] = { 200,350,400,150,250 };
	int max = arr[0];                    //��ʼ��max
	cout << "��ֻС������طֱ�Ϊ��";
	for (int i = 0;i < 5;i++)
	{
		cout << arr[i] << " ";
		//������ʵ������е�Ԫ�ر��϶������ֵ���󣬸������ֵ
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "\n���ص�С������Ϊ��" << max << endl;
	return 0;
}