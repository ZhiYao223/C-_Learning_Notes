#include<iostream>
#include<vector>
using namespace std;

#if 0
class Solution
{
	int removeElement(vector<int>& nums, int val)
	{
		int size = nums.size();
		for (int i = 0; i < size; i++)
		{
			if (nums[i] == val)
			{
				size--;
				for (int j = i; j < size - i; j++)
				{
					int* temp = &nums[j + 1];
					nums[j] = *temp;
				}
			}
			i--;
			size--; 
		}
		return size;
	}
};

//˫ָ�뷨
class Solution
{
	int removeElement(vector<int>& nums, int val)
	{
		int size = nums.size();
		int left = 0;
		for (int right = 0; right < size; right++)
		{
			if (nums[right] != val)
			{
				nums[left] = nums[right];
				left++;
			}
		}
		return size;
	}
};
#endif


class Solution
{
public:
	int removeElement(vector<int>& nums, int val)
	{
		int target = 3;
		auto it = find(nums.begin(), nums.end(), target);  //����target����λ��
		if (it != nums.end()) 
		{
			nums.erase(it); //ɾ��it��������ָλ�õ�Ԫ�أ���ɾ��
			cout << "�Ƴ�������Ԫ��Ϊ��" << endl; 
			for (size_t i = 0; i < nums.size(); i++)
			{
				cout << nums[i] << " ";
			}
		}
		else
		{
			cout << "δ�ҵ�Ԫ�أ�" << endl; 
		}
	}
};
int main3()
{
	return 0;
}
