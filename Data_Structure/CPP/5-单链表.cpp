#define MaxSize 20   //�洢�ռ��ʼ������
typedef int ElemType;
typedef struct
{
	ElemType data[MaxSize];//���飬�洢����Ԫ��
	int length; //���Ա�ǰ����
}SqList;

#define OK 1
#define ERROR 0
typedef int Status;

Status GetElem(SqList L, int i, ElemType* e)  //�����Ա�L�еĵ�i��λ��Ԫ�ط��ظ�e
{
	if (L.length == 0 || i < 1 || i>L.length)
	{
		return ERROR;
	}
	else
	{
		*e = L.data[i - 1];
		return OK;
	}
}


Status ListInsert(SqList* L, int i, ElemType e)
{
	if (L->length == MaxSize)   //˳�����Ա�����
	{
		return ERROR;
	}
	if (i <1 || i>L->length + 1)  //��Ϊi>L->lengthʱ�����Բ嵽��β��
	{
		return ERROR;
	}
	if (i < L->length)
	{
		for (int k = L->length - 1; k > i - 1;k--)
		{
			L->data[k + 1] = L->data[k];
		}
	}
	L->data[i - 1] = e;
	L->length++;
	return OK;
}

//ɾ������
Status ListDelete(SqList* L, int i, ElemType* e)
{
	if (L->length == 0)
		return ERROR;
	if (i<1 || i>L->length)
		return ERROR;
	*e = L->data[i - 1];
	if (i <= L->length)
	{
		for (int k = i; k < L->length; k++)
			L->data[k - 1] = L->data[k];
	}
	L->length--;
	return OK;
}

//���Ա�ĵ�����洢�ṹ
typedef struct Node
{
	ElemType data;
	struct  Node* next;

}Node;

