/*
	vector �����ɾ��:
	push back(ele);						//β������Ԫ��ele
	pop back();							//ɾ�����һ��Ԫ��
	insert(const iterator pos, ele);	//ѡ����ָ��λ��pos����Ԫ��ele
	insert(const_iterator pos��int count,ele); //ѡ����ָ��λ��pos����count��Ԫ��ele
	erase(const iterator pos);				//ɾ��ѡ����ָ���Ԫ��
	erase(const_iterator start,const iterator end); //ɾ��ѡ������start��end֮���Ԫ��
	clear();								//ɾ������������Ԫ��


*/
#include<iostream>
#include<vector>
using namespace std; 

void printVector127(vector<int>& v)
{
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] <<" ";
	}
	cout << endl; 
}

void test127()
{
	vector<int>v1;
	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	//����
	printVector127(v1);

	//βɾ
	v1.pop_back();				 //ɾ�����һ��Ԫ��
	printVector127(v1);
	
	//����
	v1.insert(v1.begin(), 100);  //��һ�������ǵ�����
	printVector127(v1);

	v1.insert(v1.begin(), 2, 1000); //�ڵ�һ��Ԫ�ش�����2��1000
	printVector127(v1);

	v1.insert(v1.begin() + 2, 2, 99);  //�ڵ�����Ԫ�ش�����2��99
	printVector127(v1);

	//ɾ��������Ҳ�ǵ�����
	v1.erase(v1.begin());
	printVector127(v1);

	v1.erase(v1.begin(),  v1.end() - 1); //ֻ�������һ��Ԫ��
	printVector127(v1); 

	//v1.erase(v1.begin(), v1.end());   //�൱�����
	v1.clear();
	printVector127(v1);
}

int main127()
{
	test127();
	system("pause");
	return 0;
}
/*
	��C++�У�����ʹ��std::vector��erase������ɾ��Ԫ�ء�
	erase��������һ����������������ʾҪɾ����Ԫ��λ�á�
	�����ֳ��õķ�������ʹ��remove��erase�����ɾ��vector�е�Ԫ�ء�

	remove(nums.begin(), nums.end(), 3) ��һ������ɾ��vector��ֵΪ3��Ԫ�صĲ��������岽�����£�
	remove�������㷨���е�һ����������Ҫ���� <algorithm> ͷ�ļ���ʹ�á�
	nums.begin() �� nums.end() �ֱ���Ҫ������vector����ʼ�������ͽ�������������ʾ������ΧΪ����vector��
	3 ��Ҫɾ����Ŀ��Ԫ�أ�ָ������Ҫɾ����Ԫ�ص�ֵ��
	remove(nums.begin(), nums.end(), 3) ִ�к󣬻ὫֵΪ3��Ԫ���Ƶ�vector��ĩβ��������ָ���µ��߼�����λ�õĵ�������
	ֵΪ3��Ԫ�ز�δ��ִ�� remove ������������ɾ��������Ȼ������vector��ĩβ��
	ֻ�Ǳ��ƶ����˺��棬ͨ�����صĵ���������׼ȷ�ص�֪�µ��߼�����λ�á������Ҫ�����Ԫ�ش�vector��������ɾ����
	����ʹ��erase�������� nums.erase(remove(nums.begin(), nums.end(), 3), nums.end())����������һ����λ�ؽ�Ŀ��Ԫ��ɾ����
*/
#if 0
#include <algorithm>
#include <vector>

int main127() {
	std::vector<int> nums = { 1, 2, 3, 4, 5 };

	// ɾ��ֵΪ3��Ԫ��
	nums.erase(std::remove(nums.begin(), nums.end(), 3), nums.end());

	// ��������1 2 4 5
	for (int num : nums) {
		std::cout << num << " ";
	}

	return 0;
}
#endif
/*
�ⱻ���� erase-remove��ִ��ɾ��������iter ָ�����һ��Ԫ��֮���λ�ã�
��������ʶ�˱�ɾ�����еĵ�һ��Ԫ�أ���ɾ�����еĽ���λ���� std::end(words) ָ����
��Ȼ����һ������У�Ҳ�����Ƴ�Ԫ�أ�Ȼ����ɾ��ĩβ����Ҫ��Ԫ�أ�
words.erase(std::remove(std::begin(words), std::end(words),"none"), std::end(words));
remove() �㷨���صĵ�������Ϊ erase() �ĵ�һ��������erase() �ĵڶ�����������ָ�����������һ��Ԫ�غ�һ��λ�õĵ�������

����ʹ�ó�Ա���� erase() ��ɾ�������е�һ������Ԫ�ء����ֻɾ������Ԫ�أ���ôֻ��Ҫ�ṩһ��������
���磺auto iter = data.erase(std::begin(data)+1); //Delete the second element
ɾ��һ��Ԫ�غ�vector �Ĵ�С�� 1�����������䡣�᷵��һ������������ָ��ɾ��Ԫ�غ��һ��Ԫ�ء�
����ķ���ֵ�ͱ��ʽ std::begin(data)+1 ��أ�����Ƴ������һ��Ԫ�أ��᷵�� std::end(data)��

���Ҫ�Ƴ�һ��Ԫ�����У�ֻ��Ҫ��������������������ָ���Ƴ�Ԫ�صķ�Χ�����磺
auto iter = data.erase(std::begin(data)+1,std::begin(data)+3);
��Ҫ���ǣ��ڶ���������ָ�����Ԫ��ĩβ����һ��λ�á���������ɾ����λ�� std::begin(data)+1 �� std::begin(data)+2 ��Ԫ�ء�
���صĵ�����ָ��ɾ��Ԫ�غ��λ�ã����� std::begin(data)+1 �����ɾ�������һ��Ԫ�أ������� std::end(data)��

*/

