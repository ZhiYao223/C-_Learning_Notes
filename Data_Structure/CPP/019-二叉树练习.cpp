
#if 0
#include<iostream>
using namespace std;

#define MAXQSIZE 100		//�����г���
//ѭ������
using QElemType = int; //�ȼ���typedef int QElemType;
struct SqQueue
{
	QElemType* base;	//��ʼ����̬����洢�ռ�
	int front;	//ͷָ�롢������Ϊ��
	int rear;	//βָ�� �����в�Ϊ�գ�ָ���βԪ�ص���һ��λ��
};


//���г�ʼ��
bool InitQueue(SqQueue& Q)
{
	Q.base = new QElemType[MAXQSIZE];	//��������ռ�
	if (!Q.base)
	{
		exit(OVERFLOW);
	}
	Q.front = Q.rear = 0;	//ͷβָ����Ϊ0������Ϊ��
	return true; 
}
//����еĳ���/Ԫ�ظ���
int QueueLength(SqQueue Q)
{
	//��rearָ����ڶ��г��Ⱥ�����תһȦָ���ͷ
	return ((Q.rear - Q.front + MAXQSIZE) % MAXQSIZE);
}
//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(SqQueue& Q)
{	
	return (Q.front == Q.rear);
}
//�ж϶����Ƿ�����
bool QueueFUll(SqQueue& Q)
{
	//��������
	return (Q.rear + 1) % MAXQSIZE == Q.front;
}

//ѭ���������
bool EnQueue(SqQueue& Q, QElemType value)
{
	if (!QueueFUll(Q))	//�������δ��
	{
		Q.base[Q.rear] = value;
		Q.rear = (Q.rear + MAXQSIZE) % MAXQSIZE;//��βָ��+1
		return true; 
	}
	return false; 
}
//ѭ�����г���, ���������Ԫ������
bool DeQueue(SqQueue& Q, QElemType value)
{
	if (!QueueEmpty(Q))
	{
		value = Q.base[Q.front];//����ջԪ�ط���value
		Q.front = (Q.front + 1) % MAXQSIZE;	//��ͷָ��+1
		return true; 
	}
	return false; //����Ϊ�ա�����ʧ��
}
//ȡ��ͷԪ��
QElemType GetHead(SqQueue Q)
{
	if (!QueueEmpty(Q))
	{
		return Q.base[Q.front];	//���ض�ͷָ��Ԫ��
	}
	return false; 
}

//������ӡ����Ԫ��
bool QueuePrint(SqQueue Q)
{
	if (QueueEmpty(Q)) return false;
	while (Q.front != Q.rear)
	{
		cout << Q.base[Q.front] << " ";
		Q.front = (Q.front + 1) % MAXQSIZE;
	}
	cout << endl;
	return true; 
}

//������
bool QueuePrint(SqQueue &Q)
{
	if (!QueueEmpty(Q))
	{
		QElemType temp = Q.front;
		while (temp != Q.rear)
		{
			cout << Q.base[temp] << " ";
			temp = (temp + 1) % MAXQSIZE;//λ������+1
		}
		cout << endl;
		return true; 
	}
	return false; 
}

int main()
{
	system("pause");
	return 0;
}
#endif

#include<iostream>
using namespace std;

using TElemType = int;
struct ThreadBNode
{
	TElemType data;
	ThreadBNode* lchild, * rchild;
	int ltag, rtag;
};
using ThreadTree = ThreadBNode*;

//�������������������
void CreateBiTree(ThreadTree& T)
{
	char ch;
	cin >> ch;
	if (ch == '#') T = nullptr;
	else
	{
		T = new ThreadBNode;
		T->data = ch;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
}

//ͨ���������������������
void InThreadBiTree(ThreadTree p, ThreadTree pre)
{
	if (p != nullptr)
	{
		InThreadBiTree(p->lchild, pre);
		if (p->lchild == nullptr)
		{
			p->lchild = pre; 
			p->ltag = 1;
		}
		if (p->rchild == nullptr && pre != nullptr)
		{
			pre->rchild = pre; 
			pre->rtag = 1;
		}
		pre = p; 
		InThreadBiTree(p->rchild, pre);
	}
}
//������� ������������
void InOrderTraverseThreadBiTree(ThreadTree T)
{
	ThreadTree p;
	p = T->lchild;
	while (p != T)
	{
		while (p->ltag == 0)
		{
			p = p->lchild;
		}
		cout << p->data << " ";
		while (p->rtag == 1 && p->rchild != T)
		{
			p = p->rchild;
			cout << p->data << " ";
		}
		p = p->rchild;
	}
}


int main19()
{
	ThreadTree p = NULL;
	ThreadTree pre = NULL;

	CreateBiTree(p);
	InThreadBiTree(p, pre);

	system("pause");
	return 0;
}

