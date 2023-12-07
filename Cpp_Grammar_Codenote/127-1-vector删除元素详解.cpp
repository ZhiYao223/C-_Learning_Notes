#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main127_1()
{
	//����ʹ�� vector �ĳ�Ա���� pop_back() ��ɾ������β����Ԫ�ء�
	vector<int>data1(100, 99);
	data1.pop_back(); //Remove the last element

	vector<int>data2(100, 99);
	//swap(data2.begin(), data2.end() - 1);


	/*
	���Ҫȥ�������ж�������������粻���������������Ԫ�أ�
	��ô����ͨ��ʹ�ó�Ա���� shrink_to_fit() ��ʵ��
	*/
	data2.shrink_to_fit(); 

	/*
	����ʹ�ó�Ա���� erase() ��ɾ�������е�һ������Ԫ�ء�
	���ֻɾ������Ԫ�أ���ôֻ��Ҫ�ṩһ��������
	ɾ��һ��Ԫ�غ�vector �Ĵ�С�� 1�����������䡣
	�᷵��һ������������ָ��ɾ��Ԫ�غ��һ��Ԫ�ء�
	*/
	auto iter1 = data1.erase(data1.begin() + 1); //ɾ���ڶ���Ԫ��

	/*
	���Ҫ�Ƴ�һ��Ԫ�����У�ֻ��Ҫ��������������������ָ���Ƴ�Ԫ�صķ�Χ��
	��Ҫ���ǣ��ڶ���������ָ�����Ԫ��ĩβ����һ��λ�á�
	ɾ����λ�� std::begin(data)+1 �� std::begin(data)+2 ��Ԫ�ء�
	���صĵ�����ָ��ɾ��Ԫ�غ��λ�ã����� std::begin(data)+1 ��
	���ɾ�������һ��Ԫ�أ������� std::end(data)��
	*/
	auto iter2 = data1.erase(data1.begin() + 1, data1.end() + 3);

	vector<string>words{ "one", "none","some","all","horse","best","many" };
	auto iter3 = remove(begin(words), end(words), "none");
	return 0;
}