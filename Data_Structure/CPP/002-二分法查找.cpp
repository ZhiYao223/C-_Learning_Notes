#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	int search(vector<int>& nums, int target)
	{
		int left = 0;
		int right = nums.size() - 1; //����target������ұյ�������[left, right]
		while (left <= right)         //��left = right,����[left, right]��Ȼ��Ч��������<=
		{
			int middle = left + ((right - left) / 2); //��ֹ��� ��������Ԫ���м�ֵ
			if (nums[middle] > target)
			{
				right = middle - 1;    //target�������䣬����left[left, middle-1]
			}
			else if (nums[middle] < target)
			{
				right = middle + 1;		//target�������䣬����[middle+1, right]
			}
			else                        //nums[middle] == target
			{
				return middle;           //�������ҵ�Ŀ��ֵ��ֱ�ӷ����±�
			}
		}
		return -1;  //δ�ҵ�Ŀ��
	}
};
int main2()
{
	vector<int>v; 
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	Solution m;
	int value = m.search(v, 3);
	cout << value << endl;
	system("pause");
	return 0;
}

#if 0
class Solution {
public:
	int search(vector<int>& nums, int target) {
		int left = 0;
		int right = nums.size();
		while (left < right) {
			int middle = left + ((right - left) >> 1);
			if (nums[middle] > target) {
				right = middle;
			}
			else if (nums[middle] < target) {
				left = middle + 1;
			}
			else {
				return middle;
			}
		}
		return -1;   //δ�ҵ�Ŀ��ֵ
	}
};
#endif