/*
	��������
	���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
	�������Ӵ�С�������㷨Ϊѡ������
	�ֱ�����char�����int������в���
*/
#include <iostream>
using namespace std;
//ʵ��ͨ�� �������������ĺ���
//����Ӵ�С �㷨ѡ������
//���� char���飬 int����
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp; 
}
//�ṩ��ӡ����ģ��
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
}
//�����㷨
template<class T >
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)    
		{
			//�϶������ֵ�ȱ���������ֵҪС��˵��j�±��Ԫ�ز������������ֵ
			if (arr[max] < arr[j])
			{
				max = j; //�������ֵ�±�
			}
		}
		if (max != i)
		{
			//����max��iԪ��
			mySwap(arr[max], arr[i]);
		}
	}
}
//����char����
void test99_1()
{
	char charArr[] = "bdcegfa";
	int length = sizeof(charArr) / sizeof(char);
	mySort(charArr, length);
	printArray(charArr, length);
}
//����int����
void test99_2()
{
	int intArr[] = { 4,2,6,3,5,1,8,9,7 };
	int length = sizeof(intArr) / sizeof(int);
	mySort(intArr, length);
	printArray(intArr, length);
}

int main99()
{
	test99_1();

	cout << endl << endl << endl << endl;

	test99_2();
	system("pause");
	return 0;
}



