/*
	operator������������Ϊ��Ԫν��
*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//��Ԫν��
class Mycompare
{
public:
	bool operator()(int val1, int val2)
	{
		return val1 > val2; 
	}
};
void printVector165(vector<int>& v)
{
	for (auto const& it : v)
	{
		cout << it << " ";
	}
}

void test165_1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	printVector165(v);//����ǰ



	cout << endl;

	sort(v.begin(), v.end()); //���������
	printVector165(v);

	cout << endl; 

	sort(v.rbegin(), v.rend());  //���������
	printVector165(v);
	cout << endl;
}
void test165_2()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	printVector165(v);//����ǰ
	cout << endl; 
	//ʹ�ú�������ı��㷨���ԣ� ����Ӵ�С
	sort(v.begin(), v.end(), Mycompare());
	printVector165(v);
}
int main165()
{
	test165_1();
	test165_2();
	system("pause");
	return 0;
}