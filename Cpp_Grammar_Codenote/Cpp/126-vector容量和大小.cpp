/*
	����������
	��vector�����������ʹ�С����

	����ԭ�ͣ�
	empty();            //�ж������Ƿ�Ϊ��
	capacity();            //��������
	size();              //����������Ԫ�ظ���
	resize(int num);     //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	resize(int num, elem); //����ָ�������ĳ���Ϊnum�� �������䳤������elemֵ�����λ�á�
							//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��


*/
#include<vector>
#include<iostream>
using namespace std;

void printVector126(vector<int>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl; 
}

void test126()
{
	vector<int> v1;
	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector126(v1);

	if (v1.empty()) //Ϊ�棬 ��������Ϊ��
	{
		cout << "v1Ϊ��" << endl; 
	}
	else
	{
		cout << "v1��Ϊ��" << endl; 
		cout << "v1������Ϊ��" << v1.capacity() << endl;   //13
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl; 
	}
	//cout << "sizeof(������ = " << sizeof(v1) << endl;   //16

	//����ָ����С
	v1.resize(15, 100);        //�������ذ汾������ָ���Ǹ�Ĭ�����ֵ �˴���100
	printVector126(v1);  //�������ָ���ı�ԭ������Ĭ����0�����

	v1.resize(5);           //�������ָ���ı�ԭ���̣������Ĳ��ֻᱻɾ����
	printVector126(v1);


}

int main126()
{
	test126();
	system("pause");
	return 0;

}