#include <iostream>
using namespace std;

//const����ָ��  --����ָ��
//const����ָ��  --ָ�볣��
//const������ָ�룬�����γ���

int main33()
{

	system("pause");
	return 0;
}

#if 0
const int *p = &a;   
����ָ��:ָ���ָ��ָ����Ըģ�ָ��ָ���ֵ���ܸ�
* p = 20;//����ָ��ָ���ֵ���ܸ�
p = &b; //��ȷ��ָ��ָ���и�

int* const p = &a;
ָ�볣����ָ���ָ���ܸģ�ָ��ָ���ֵ���Ը�
* p = 20;//��ȷ��ָ���ֵ���Ը�
p = &b; //����ָ��ָ�򲻿��Ը�

const int* const p = &a;
const ����ָ��ͳ���
ָ���ָ���ָ��ָ���ֵ�������Ը�
* p = 20;//����
p = &b;//����

���䷽���� const��ʾ����  *��ʾָ��  ��ǰ��˳��
const int* p = &a;    ����ָ��
int* const p = &a;    ָ�볣��
#endif
