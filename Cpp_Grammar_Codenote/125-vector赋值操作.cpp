/*
	������������vector�������и�ֵ

	����ԭ�ͣ�
	vector& operator = (const vector &vec);  //���صȺŲ�����
	assign(beg, end);  //����beg,end)�����ڵ����ݿ�����ֵ������
	assign(n, elem);  //��n��elem������ֵ������

	vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operator= ����assign������
*/

#include<iostream>
#include<vector>

using namespace std;
void printVector(vector<int>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}
//vector��ֵ
void test125_1()
{
	vector<int>v1;
	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//operator= ��ֵ����
	vector<int> v2;
	v2 = v1;
	printVector(v2);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());  //����ҿ�����ȡv1.begin()��v1.end()����һλ
	printVector(v3);

	//n��elem��ʽ��ֵ
	vector<int>v4;
	v4.assign(10, 100);
	printVector(v4);    //��ӡ10��100 

}

int main125()
{
	test125_1();
	system("pause");
	return 0;
}
