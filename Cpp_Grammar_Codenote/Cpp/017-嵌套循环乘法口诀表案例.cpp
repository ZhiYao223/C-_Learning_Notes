#include <iostream>
using namespace std;
int main17()
{
	//1.��ǰ������<=����
	for (int i = 1; i < 10; i++)              //i��ʾ��
	{
		for (int j = 1; j <= i; j++)          //j��ʾ��<= ��ǰ������
		{
			int answer = i * j;
			cout << j << "*" << i << "=" << answer << "\t";
		}
		cout << endl;
	}
	return 0;
}


