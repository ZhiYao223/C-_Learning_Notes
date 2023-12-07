#if 0
#include<iostream>
using namespace std;

/*
ltagΪ0ʱָ��ý������ӣ�Ϊ1ʱָ��ý���ǰ����
rtagΪ0ʱָ��ý����Һ��ӣ�Ϊ1ʱָ��ý��ĺ�̡�
*/
#if 0
typedef int ElemType;
typedef struct ThreadBNode {				//�����������ṹ����
	ElemType data;							//����Ԫ��
	struct ThreadBNode* lchild, * rchild;	//���Һ���ָ��
	int ltag, rtag;							//����������־
}ThreadNode, *ThreadTree;
#endif

using ElemType = int;				 //�ȼ���typedef int ElemType;
struct ThreadBNode					 //ThreadBNode ����Ϳ��������������
{
	ElemType data;
	ThreadBNode* lchild, * rchild;  //���ӡ��Һ���
	int ltag, rtag;					//���Һ��ӡ�ǰ����̱�־λ
};
using ThreadTree = ThreadBNode*;	//������C���Խṹ�����͵������� }ThreadNode, *ThreadTree;

//�������������������
void CreateBiTree(ThreadTree& T)
{
	char ch;
	cin >> ch;
	if (ch == '#') T = nullptr;
	else
	{
		T = new ThreadBNode;	//��������㣬������ռ�
		T->data = ch;			//����㸳ֵ
		CreateBiTree(T->lchild);//����������
		CreateBiTree(T->rchild);//����������
	}
}

/*
����ָ��preָ��ոշ��ʹ��Ľ�㣬ָ��pָ�����ڷ��ʵĽ�㣬��preָ��p��ǰ����
����������Ĺ����У����p����ָ���Ƿ�Ϊ�գ���Ϊ�վͽ���ָ��pre;���pre����
ָ���Ƿ�Ϊ�գ���Ϊ�վͽ���ָ��p
*/
//ͨ�����������������������
void InThreadBiTree(ThreadTree p, ThreadTree pre)
{
	if (p != NULL)
	{
		InThreadBiTree(p->lchild, pre);	//�ݹ飬������������
		if (p->lchild == NULL)		//������Ϊ�գ�����ǰ����ǩ
		{
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL)
		{
			pre->rchild = pre;	//����ǰ���ڵ�ĺ������
			pre->rtag = 1;
		}
		pre = p;	//��ǵ�ǰ����Ϊ�ոշ��ʹ��Ľ��
		InThreadBiTree(p->rchild, pre);		//�ݹ飬������������
	}
}

//ͨ���������������������������
void CreateInThread(ThreadTree T)
{
	ThreadTree pre = NULL;		//��һ��������������ΪNULL
	if (T != NULL)
	{
		InThreadBiTree(T, pre);			//������������
		pre->rchild = nullptr;		////����������������һ����㣬���һ��������������Ϊ��
		pre->rtag = 1;                         
	}
}
/*
	Tָ��ͷ��㣬ͷ�������lchildָ�����㣬ͷ�������rchildָ�������
	�����һ����㡣���������еĵ�һ������lchild��ָ������һ������rchild��ָ���ָ��ͷ���.��������������������ʾ�Ķ�����T
*/
ElemType visit(ThreadTree p)
{
	return p->data;		//���ؽ������
}
/*
 ������õĶ������辭����������ҽ��ʱ��Ҫĳ�ֱ��������е�ǰ���ͺ�̣���ô����������������Ĵ洢�ṹ���Ƿǳ������ѡ��
*/
//������� ������������������ͼ���������
void InOrderTraverse_Thread(ThreadTree T)
{
	ThreadTree p;
	p = T->lchild;	//pָ������
	//�������������ʱ��p == T ���һ�����ָ������
	while (p != T)
	{
		while (p->ltag == 0)//��ltag=0ʱѭ�����������е�һ�����
		{
			p = p->lchild;	//pָ��p��������
		}
		visit(p);		//���ʸý��
		//�������Ϊ1�Ҳ���ָ��ͷָ��
		while (p->rtag == 1 && p->rchild != T)
		{
			p = p->rchild;		//pָ��p�ĺ��
			visit(p);			//���ʸý��
		}
		//p����������������㣬�������������б���
		p = p->rchild;          
	}
}

//������� ����������
void  PreOrderTraverse_Thread(ThreadTree T)
{
	ThreadTree p;
	p = T->lchild;		//pָ������

	while (p != T)
	{
		visit(p);
		while (p->ltag == 0)
		{
			p = p->lchild;		//pָ��p��������
		}
		while (p->ltag == 1 &&  p->rchild != T)
		{
			p = p->rchild;		//pָ��p�ĺ��
			visit(p);			//���ʸý��
		}
		p = p->rchild;
	}
}



int main17()
{

	system("pause");
	return 0;
}

#endif