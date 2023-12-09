#include<iostream>
#include<malloc.h>
#include<stdlib.h>
#include<stack>
#include<queue>
using namespace std;

using TElemType = char;
struct BTNode
{
	TElemType data;	//������
	BTNode* lchild;	//����
	BTNode* rchild;	//�Һ���
};
using BiTree = BTNode*;		//����ָ���ͱ���

//�������
BTNode* NewNode()
{
	BTNode *Node = new BTNode;
	if (Node == nullptr)	exit(OVERFLOW);
	Node->lchild = Node->rchild = nullptr;
	return Node; 
}

void FreeNode(BiTree* T)	//�ͷŸ��ڵ�
{
	free(T);
}

//��һ�ֽ�������������(ͨ�������д���������)
//ǰ�򴴽�������
void PreCreateTree(BiTree &T)
{
	char ch;
	cin >> ch;
	if (ch != '#' || T != nullptr)
	{
		T = NewNode();
		T->data = ch;
		PreCreateTree(T->lchild);	//����������
		PreCreateTree(T->rchild);	//����������
	}
}

//��������˳����������
void createBiTree(BiTree& T)
{
	//������Ҫ��������������������		ABD##E##CH### ���� AB##C##
	char ch;
	cin >> ch;
	if ('#' == ch)		//������#ʱ�������ĸ����ΪNULL���Ӷ������÷�֧�ĵݹ�
		T = nullptr;
	else
	{
		T = NewNode();
		T->data = ch;
		createBiTree(T->lchild);
		createBiTree(T->rchild);
	}
}
//����������
void PreOrderTraverse(BiTree T)
{
	if (T != nullptr)
	{
		cout << T->data <<" ";
		PreOrderTraverse(T->lchild);
		PreOrderTraverse(T->rchild);
	}
}
//����������
void InOrderTraverse(BiTree T)
{
	if (T != nullptr)
	{
		InOrderTraverse(T->lchild);
		cout << T->data << " ";
		InOrderTraverse(T->rchild);
	}
}
//����������
void PostOrderTraverse(BiTree T)
{
	if (T != nullptr)
	{
		InOrderTraverse(T->lchild);
		InOrderTraverse(T->rchild);
		cout << T->data << " ";
	}
}


int main16()
{
	BiTree T;		//����һ��ָ�������������ָ��
	createBiTree(T);		//����������
	cout << "������������ɣ�" << endl;
	cout << "ǰ�������";
	PreOrderTraverse(T);

	cout << endl << "���������";
	InOrderTraverse(T);

	cout << endl << "���������";
	PostOrderTraverse(T);

	system("pause");
	return 0;
}













