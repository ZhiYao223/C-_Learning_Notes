/*
	vector����Ԥ���ռ�
	����������
	����vector�ڶ�̬��չ����ʱ����չ����

	����ԭ��
	reserve��int len); //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

*/

#include<iostream>
#include<vector>
using namespace std;


void test130()
{
	vector<int>v;

	//Ԥ���ռ�
	v.reserve(100000);
	int num = 0; //ͳ�����ݴ���
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0])   //��pָ����������ĵ�һ��Ԫ�ص�ַ�����������ݣ�����ߵ�ַ���ȡ�
		{
			p = &v[0];  //��������ȣ��ȴ���һ�β���ȵ�ʱ��˵���ٴ�����
			num++;      //��¼���ݵĴ���
		}
	}
	cout << "num = " << num << endl; 
}


int main130()
{
	test130();
	system("pause");
	return 0;
}