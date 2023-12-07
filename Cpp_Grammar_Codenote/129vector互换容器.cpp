/*
	ʵ����������Ԫ�ؽ��л���
	swap(vec); //��vec�뱾���Ԫ�ػ���
*/
#include<iostream>
#include<vector>
using namespace std;

//vector��������

void printVector129(vector<int>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl; 
}

//1.�����÷�
void test129_1()
{
	vector<int>v1;
	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ��" << endl;
	printVector129(v1);

	vector<int>v2;
	for (size_t i = 9; i < 10; i--)
	{
		v2.push_back(i);
	}
	printVector129(v2);

	cout << "������"<<endl;
	v1.swap(v2);
	printVector129(v1);
	printVector129(v2);


}



//2.ʵ����;
//����swap���������ڴ�ռ�
void test129_2()
{
	vector<int>v;
	for (size_t i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
	cout << endl;

	v.resize(5);//����ָ����С    //�������䡢��С��Ϊ5
	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;
	cout << endl;

	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << "v������Ϊ�� " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ�� " << v.size() << endl;

}


int main129()
{

	test129_1();
	test129_2();
	system("pause");
	return 0;
}
