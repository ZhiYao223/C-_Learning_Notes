/*
	vector��
	���ܣ� vector���ݽṹ������ǳ����ƣ� Ҳ��Ϊ��������
	vector ����ͨ��������
	��֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ

	��̬��չ��
	��������ԭ�пռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�

	vectorͷ��һ���Ƿ�յģ���β�˲��룬ɾ��Ԫ�أ�
	front() -----��һ��Ԫ��
	back()  -----���һ��Ԫ��
	v.begin() -----��һ��Ԫ�ص�ַ
	v.rbegin()-----���һ��Ԫ�ص�ַ
	v.end()-------���һ��Ԫ�صĺ�һ����ַ
	v.rend()------��һ��Ԫ�ص�ǰһ����ַ
	push_back()----��β�˲���Ԫ��
	pop_back() ----��β��ɾ��Ԫ��
	insert()  -----����Ԫ��
	vector�����ĵ�������֧��������ʵĵ�����

	vector���캯��
	��������������vector����

	����ԭ�ͣ�
	vector<T> v;   //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
	vector(v.begin(), v.end()); //��v[begin(),end()]�����е�Ԫ�ؿ���������
	vector(n, elem);  //���캯����n��elem����������
	vector(const vector &vec); //�������캯��

	vector�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���
*/


#include<iostream>
#include<vector>
using namespace std;
void printVector124(vector<int>& v1);  //��������
//vector�����Ĺ���
void test124()
{
	vector<int>v1; //Ĭ�Ϲ���   �޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);   //��������
	}
	printVector124(v1);

	//ͨ�����䷽ʽ���й���
	vector<int>v2(v1.begin(), v1.end());  //���������������������������ݵ�v2
	printVector124(v2);

	//n��elem��ʽ����
	vector<int>v3(10, 100); //��ֵ10��100
	printVector124(v3);

	//��������
	vector<int>v4(v3);
	printVector124(v4);

}
void printVector124(vector<int>&v1)
{
	//��ʽ1
	//for (auto const& it : v1)
	//{
	//	cout << it << " "; 
	//}

	//��ʽ2
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

int main124()
{
	test124();
	system("pause");
	return 0;
}
