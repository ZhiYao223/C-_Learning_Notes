
#if 0
#include<iostream>
using namespace std;

/*
	��������˳��洢�ṹ
	ʵ�֣������������Ľڵ��α�ţ����δ�Ŷ������е�����Ԫ�ء�
	��n�����Ķ��������У�����2n������ֻ����n-1������������ָ��ָ��ǿ���Ů���
	��ָ����Ŀ=2n-(n-1)=n+1

	������������ʸ��ڵ㡢����������������������������     ������  ǰ׺��ʾ
	���������������������������ʸ��ڵ㡢�������������		�����  ��׺��ʾ
	������������������������������������������ʸ��ڵ�		���Ҹ�  ��׺��ʾ
*/
//��������˳��洢��ʾ

#define MAXTSIZE 100
typedef TlemType SqBiTree[MAXTSIZE];
SqBiTree bt;

//�������� |lchild|data|parent|rchild|
typedef  struct TriTNode
{
	TelemType data;
	struct TriTNode* lchild, * parent, * rchild;
}TriTNode, * TriTree;
#endif


#if 0
//����������ʽ�洢�ṹ
typedef int TelemType;
typedef  struct BiTNode
{
	TelemType data;
	struct BiTNode* lchild, * rchild;	//���Һ���ָ��
}BiTNode, *BiTree; //����typedef ��struct BiNode ����ΪBiNode, *BiTree��㡢ָ�����ͣ���ǿ�ɶ��ԡ�

//�����½��
BiTNode* NewNode(TelemType value)
{
	BiTNode* Node = new BiTNode;	//����һ��node���ͱ����ĵ�ַ�ռ�
	Node->data = value;		//���ȨֵΪv
	Node->lchild = Node->rchild = nullptr;	//��ʼ״̬�������Һ���
	return Node;		//�����½��ĵ�ַ
}

//�ڶ����������ҵ����������򣨶Զ�����ʵ�в�����Ϊ����������Ľ�㣬���ҶԲ��ҵ��Ľ���޸�Ϊ������������
void SearchNode(BiTree T, TelemType data, TelemType newdata)
{
	if (T == nullptr) return;	//�ս������
	if (T->data == data){
		T->data = newdata;		//�ҵ�������Ϊdata�Ľ�㲢�޸�Ϊnewdata
	}
	SearchNode(T->lchild, data, newdata);	//����������
	SearchNode(T->rchild, data, newdata);	//����������
}



//�������������
bool PreOrderTraverse(BiTree T)
{
	if (T == NULL)	return  false;		//������������ݹ�߽�
	else
	{
		cout << T->data<<endl;			//���ʸ��ڵ�������
		PreOrderTraverse(T->lchild);	//�ݹ����������
		PreOrderTraverse(T->rchild);	//�ݹ����������
	}
	return true; 
}
//�������
bool InOrderTraverse(BiTree T)
{
	if (T == NULL)	return false; //������������ݹ�߽�
	else
	{

		InOrderTraverse(T->lchild);		//������������ݹ�߽�
		cout << T->data << endl;			//���ʸ��ڵ�������
		InOrderTraverse(T->rchild);		//����������
	}
	return true;
}
//�������
bool PostOrderTraverse(BiTree T)
{
	if (T == NULL)	return false;
	else
	{

		PostOrderTraverse(T->lchild);	//����������
		PostOrderTraverse(T->rchild);	//����������
		cout << T->data << endl;		//���ʸ��ڵ�������
	}
	return true; 
}
//�����������㷨��Ӧ��-----���ƶ�����
/*
	���������½��ռ䣬���Ƹ��ڵ�
	�ݹ鸴��������
	�ݹ鸴��������
*/
int CopyTree(BiTree T, BiTree& NewT)
{
	if (T == NULL)		//����ǿ���������0
	{
		NewT = NULL;
		return 0;
	}
	else
	{
		NewT = new BiTNode;			//�����½�㣬���ڸ���ԭ�н��
		NewT->data = T->data;		//�����������ݸ�ֵ���½��������
		CopyTree(T->lchild, NewT->lchild);		//����������
		CopyTree(T->rchild, NewT->rchild);		//����������
	}
}

//�����������㷨��Ӧ��------������������
/*
	�����Ϊ�գ������Ϊ0
	���򣬵ݹ��������������ȼ�Ϊm���ݹ���������������Ϊn���������������Ϊm��n�Ľϴ���+1
*/
int Depth(BiTree T)
{
	int n, m;
	if (T == NULL)
		return 0;	//����ǿ���������0
	else
	{
		m = Depth(T->lchild);
		n = Depth(T->rchild);
		return (m > n) ? (m + 1) : (n + 1);
	}

}
//�����������㷨��Ӧ��------����������������
/*
	����ǿ������������Ϊ0
	���򣬽�����Ϊ�������Ľ�����+�������Ľ�������+1
*/
int NodeCount(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		return NodeCount(T->lchild) + NodeCount(T->rchild) + 1;
	}
}
//�����������㷨��Ӧ��------���������Ҷ�ӽ�����
/*
	���Ϊ��������Ҷ�ӽ�����Ϊ0
	����Ϊ��������Ҷ�ӽ����� + ��������Ҷ�ӽ�������
*/	
int LeafCount(BiTree T)
{
	if (T == NULL)
	{
		return 0;		//����ǿ�������0
	}
	if (T->lchild == NULL && T->rchild == NULL)
	{
		return 1;		//�����Ҷ�ӽ�㷵��1
	}
	else
	{
		//�������Ҷ�ӽ�㣬��ֱ�ͳ�����������ϵĽ�㡣
		return LeafCount(T->lchild) + LeafCount(T->rchild);
	}
}
#endif // 0




/*
��������ǵݹ��㷨��
��������������ķǵݹ��㷨�ؼ��������������ĳ�ڵ������������������ҵ��ý��ĸ��Լ�������
����˼�룺
����һ��ջ
���ڵ��ջ������������
������ջ���������㣬����������
*/
#if 0
bool InOrderTraverse(BiTree T)
{
	BiTree p;  //����һ��ָ��
	InitStack(S);//��ʼ��ջ
	p = T;     //��ָ��pָ����ڵ�
	while (p || !StackEmpty(S)  //��ָ��p��Ϊ�գ�����ջ��Ϊ��ʱ
	{
		if (p){
			Push(S, p); 
			p = p->lchild;    }
		else{
			Pop(S, q);
			cout << q->data << endl; 
			p = q->rchild;  }
	}
	return true;
}
#endif

/*
	�������Ĳ�α�����˼·��ʹ��һ�����С�
	һ�������ڵ����
	�����Ӳ�Ϊ��ʱѭ�����Ӷ������г�һ�����*p����������
				   1.���������ӽ�㣬�����ӽ����ӣ�
				   2.�������Һ��ӽ�㣬���Һ��ӽ����ӣ�
*/
#if 0
typedef int BTNode;
#define MaxSize 100
typedef struct
{
	BTNode data[MaxSize];	//��Ŷ���Ԫ��
	int front, rear;		//��ͷ�Ͷ�βָ��
}SqQueue;					//˳��ѭ����������

//��������α����㷨
void LevelOrder(BTNode* b)
{
	BTNode* p;     //
	SqQueue* qu;		//����һ������
	InitQueue(qu);		//��ʼ������
	EnQueue(qu, b);		//���ڵ�ָ��������
	while (!QueueEmpty(qu))	//�Ӳ�Ϊ�գ���ѭ��
	{
		EeQueue(qu, p);		//���Ӷ���ͷ���
		cout << p->data << endl;	//���ʽ��p
		if (p->lchild != NULL)
		{
			EnQueue(qu, p->lchild);  //������ʱ�������
		}
		if (p->rchild != NULL)
		{
			EnQueue(qu, p->rchild);	//���Һ���ʱ�������
		}
	}
}
//������������н����������Ķ�������
bool CreateBiTree(BiTree& T)
{
	char ch;
	cin >> ch;
	if (ch == "#") T = NULL; 
	else
	{
		if (!(T = new BiTNode))
		{
			exit(OVERFLOW);
		}
		T->data = ch;	//���ɸ��ڵ�
		CreateBiTree(T->lchild);	//����������
		CreateBiTree(T->rchild);	//����������
	}
	return true; 
}



int main16_2()
{
	system("pause");
	return 0;
}
#endif 