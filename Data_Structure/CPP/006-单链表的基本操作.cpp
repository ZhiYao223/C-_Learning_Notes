#include<iostream>
using namespace  std;

#if 0
//��ʽһ
struct LNode
{
	int data; //���嵥����������
	struct LNode* next; //ÿ�������һ������Ԫ��
};
typedef struct LNode LNode;

//��ʽ��
struct LNode
{
	int data;		//ÿ�������һ������Ԫ��
	struct LNode* next;		//ÿ�������һ������Ԫ��
};
typedef struct LNode LNode;
typedef struct LNode* LinkList;


//��ʽ��  (�Ƽ�)
typedef struct LNode  //���嵥����������
{
	int data;		//ÿ�������һ������Ԫ��
	struct LNode* next;//ָ��ָ����һ�����
}LNode, * LinkList;  
//LNode��struct LNode �����ͱ�����
//LinkList��struct LNode* �����ͱ�������ʾָ�������ָ�롣

//LNode*ǿ�����ص���һ����㡢LinkList ǿ������һ��������
LNode* GetElem(LinkList L, int i)  //���ҵ�����L�еĵ�i������Ԫ��
{
	int j = 1;  
	LNode* p = L->next; //����һ�����ָ��ͷ��㡣
	if (i == 0)  
		return L;     //����ͷ���ָ�� L
	if (i < 1 || i > +1)
		return NULL;  //�����в����ڵ� i ���ڵ�
	while (p != NULL && j < i)  //ֱ����������i��Ԫ�أ����������������
	{ 
		p = p->next; //δ����iλ�ã�ָ��p��������һλ
		j++;
	}
	return p;  //���ص� i ���ڵ��ָ�롣
}

//Ҫ��ʾһ��������ʱ��ֻ������һ��ͷָ��L,ָ������ĵ�һ�����
LNode *L1;   //����һ��ָ�������һ������ָ��
LinkList L2; //����һ��ָ�������һ������ָ�루����ɶ��Ը�ǿ��

#endif

