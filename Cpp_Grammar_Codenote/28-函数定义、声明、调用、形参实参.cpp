#include <iostream>
using namespace std;

//�������Զ��,��ǰ���߱��������ú������ڣ�����ֻ��һ��
int max(int a, int b);

int max(int a, int b)
{
	return a > b ? a : b; 
}

int main28()
{
	int a = 10;
	int b = 20;
	int c = max(a, b);
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}

//����������main����֮����Ҫ��main����֮ǰ��������main����֮ǰ���壬���躯������
#if 0
int max(int a, int b)
{
	return a > b ? a : b;
}
#endif

//�ββ�Ӱ��ʵ�Σ��Ӻ����У��βθı䣬��ʵ�β���䡣