/*
	��ָ����СΪN�������У�����N�����ݣ����������е�����������������ƽ�����������������

*/
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void print190(int val)
{
	cout << val << " ";
}

void test190()
{
	vector<int> nums;  //��������
	int N = 0;
	cout << "ָ��������С:";
	cin >> N;
	nums.resize(N);  //����������ռ�

	cout << "������" << N << "��������";


	for (int i = 0; i < N; i++)  //��������
	{
		cin >> nums[i];
		//nums.push_back(nums[i]);
	}

	int odd_number = 0;
	cout << "������ЧԪ��Ϊ��";
	for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)  //��������,�������
	{
		bool is_normal = true;     //�����ż��־λ����Ϊ������ż������true�����ΪС������false���������ʾ
		cout << *it << "  ";       //
		if (*it % 2 == 1 || *it % 2 == -1)  //�������Ϊ1��Ϊ����
		{
			*it = pow(*it, 2);		//�滻Ϊ������ƽ��
			odd_number++;			//������������
			is_normal = true;
		}
		else if (*it % 2 == 0)		//���Ϊż��
		{
			continue;
			is_normal = true;
		}
		else if (!is_normal)
		{
			cout << "��������" << endl;
			return;
		}

	}
	cout << endl;
	cout << "���У�" << odd_number << "������������������Ϊ��" << " ";
	for_each(nums.begin(), nums.end(), print190);  //���������󣬱�������
	cout << endl;
}

int main127_2()
{
	test190();
	system("pause");
	return 0;
}