/*
	������������������Ԫ�غϲ������洢����һ������
	����ԭ��:

	merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
	// ��Ԫ�غϲ������洢����һ������
	// ע��: ������������������� �ұ��붼��һ��˳��Ĭ��Ϊ����  
	//�����������ǽ�����merge����Ҫ����ν�ʲ�����Greater<int>(),�Ա�ﵽ����ϲ�

	// beg1 ����1��ʼѡ����
	// end1����1����������
	// beg2����2��ʼ������
	// end2����2����������
	// destĿ��������ʼ������   

	//�ϲ�������������������������
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

void myprint179(int val)  //��ӡ����Ԫ��
{
	cout << val << " ";
}
void test179()
{
	vector<int>v1;
	vector<int>v2;

	for (size_t i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 10);
	}
	cout << "����1�е�Ԫ��Ϊ��";
	//random_shuffle(v1.begin(), v1.end());  //������������  ������ң��ᱨ��
	
 
	for_each(v1.begin(), v1.end(), myprint179); //��������Ԫ��
	cout << endl;


	cout << "����2�е�Ԫ��Ϊ��";
	//random_shuffle(v2.begin(), v2.end());   //������������
	for_each(v2.begin(), v2.end(), myprint179);
	cout << endl;

	vector<int>v3;    //�����ָ��v3�����Ĵ�С���ᱨ��

	v3.resize(v1.size() + v2.size()); //���� Ŀ��������СΪv1+v2�Ĵ�С

	cout << "�ϲ����Ԫ�أ�"; 
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), myprint179);
}
int main179()
{
	srand((unsigned int)time(NULL)); //���������
	test179();
	system("pause");
	return 0;
}