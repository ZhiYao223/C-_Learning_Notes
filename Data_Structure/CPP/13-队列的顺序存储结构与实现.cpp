/*
	���������ķ���-----����ѭ������
	base[0]����base[MAXQSIZE-1]֮����rear+1==M������rear=0��
	ʵ�ַ���������ģ(mod��C�����У�%) ���㣻
	����Ԫ�أ�Q.base[Q.rear] = x;
			 Q.rear = (Q.rear+1)%MAXQSIZE;
	ɾ��Ԫ�أ�x = Q.base[s.front]
			 Q.front = (Q.front+1)%MAXQSIZE;

	�漰���ƶ�����ֵԭ���в����ĺ��������б���front��rear������ñ���&���ã�������޸�ԭ�����еĵ�ַ����ֵ�磺SqQueue &Q
	ʹ��SqQueue Q�������б�ʱ�����������ֻ��һ�ݸ����������޸�ԭ�����б�����ָ��Ŀռ��ַ����ֵ��

	�ں��������б��У�ʹ��&���Ž���������Ϊ�������͡�����ζ�Ÿú�����ֱ�Ӳ������ݸ����ı����������Ǵ����ñ����ĸ�����

	����ʹ��&ʱ��������������Ϊ��ֵ��ʽ���ݡ�����ζ���ڽ��������ݸ�����ʱ���������ñ�����һ�ݸ��������ں����ڲ�ʹ�øø�����
	�ں����ڲ��Բ������е��κ��޸Ķ�����Ӱ�쵽ԭʼ������

��ʹ��&ʱ��������������Ϊ���÷�ʽ���ݡ�����ζ�ź�����ֱ�ӷ��ʴ��ݸ����ı����������Ǵ����������ں����ڲ��Բ������κ��޸Ķ���ֱ��Ӱ��ԭʼ������

��ˣ�ʹ��&���Ա��ⲻ��Ҫ�ĸ��ƣ���ʡ�ڴ�ʹ���ʱ�䡣ͬʱ��ͨ����ԭʼ�������޸ģ�����ʹ����������������������н�����
*/
#include<iostream>
using namespace std;

#define MAXQSIZE 100  //�����г���
typedef int QElemType;

//ѭ������
typedef struct
{
	QElemType* base;	//��ʼ���Ķ�̬����洢�ռ�
	int front;	//ͷָ�룬�����в��գ�ָ�����ͷԪ��
	int rear;	//βָ�룬�����в��գ�ָ�����βԪ�ص���һ��λ��
}SqQueue;  //��ͨ������ '.' *SqQueueָ�������� '->'

bool InitQueue(SqQueue& Q);			//ѭ�����г�ʼ��
int  QueueLength(SqQueue Q);			//ѭ�����г���
bool QueueFull(SqQueue& Q);			//�ж϶����Ƿ�����
bool QueueEmpty(SqQueue& Q);		//�ж϶����Ƿ�Ϊ��
bool EnQueue(SqQueue& Q, QElemType value);//ѭ���������
bool DeQueue(SqQueue& Q, QElemType value);//ѭ�����г���
bool QueuePrint(SqQueue Q);		//��ӡ�������
QElemType GetHead(SqQueue Q);		//��ȡ��ͷԪ��

//���еĳ�ʼ��
bool InitQueue(SqQueue& Q)
{
	Q.base = new QElemType[MAXQSIZE]; //��������ռ�
	//Q.base = (QElemType*)MAXQSIZE * sizeof(QElemType);  C�����﷨
	if (!Q.base)
	{
		exit(OVERFLOW);  //�洢����ʧ��
	}
	Q.front = Q.rear = 0; //ͷָ��βָ����Ϊ0�� ����Ϊ��
	return true; 
}
//��ѭ�����еĳ���/Ԫ�ظ���
int QueueLength(SqQueue Q)
{
	//��rearָ����ڶ��г��Ⱥ�����תһȦָ���ͷ������rear=3��front= 4, 3-4=-1���Ϸ�����ͨ����3-4+6)%6 = 5��Ԫ��
	return((Q.rear - Q.front + MAXQSIZE) % MAXQSIZE);
}
//�ж϶����Ƿ�����
bool QueueFull(SqQueue& Q)
{
	return (Q.rear + 1) % MAXQSIZE == Q.front;  //������
}
//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(SqQueue& Q)
{
	return (Q.front == Q.rear);
}
//ѭ���������
bool EnQueue(SqQueue& Q, QElemType value)
{
	if (!QueueFull(Q))   //�������û��
	{
		Q.base[Q.rear] = value; //�����Ԫ�ط���Q.rear��ָ��Ŀռ���
		Q.rear = (Q.rear + 1) % MAXQSIZE;//��βָ��+1
		return true;
	}
	return false; //�������������ʧ��
}
//ѭ�����г���
bool DeQueue(SqQueue& Q, QElemType value)
{
	if (!QueueEmpty(Q))  //������зǿ�
	{
		value = Q.base[Q.front];//����ջԪ�ر��浽value��
		Q.front = (Q.front + 1) % MAXQSIZE; //��ͷָ��+1
		return true; 
	}
	return false; //����Ϊ�գ�����ʧ��
}
//ȡ��ͷԪ��
QElemType GetHead(SqQueue Q)
{
	if (!QueueEmpty(Q)) //���в�Ϊ��
	{
		return Q.base[Q.front];  //���ض�ͷָ��Ԫ��
	}
	return false;
}
//������ӡ����Ԫ��
bool QueuePrint(SqQueue Q) 
{
	//����ע�⣡���� ���Ҫ�����ַ����������б�һ��������'SqQueue &value'���ã�
	//��Ϊʹ��&���޸�������Q.front��Q.rear�ռ��ַ,Ӱ��ԭ������ָ��λ�ã��ͺ���ĺ������á�
	if (Q.front == Q.rear)
		return false;
	while (Q.front != Q.rear)
	{
		cout << Q.base[Q.front] << "  ";
		Q.front = (Q.front + 1) % MAXQSIZE;
	}
	cout << endl;
	return true;

	//�����������ڶ��ⴴ������ʱ���������������У������ò���'&Q'������Ӱ��ԭ������front��rear��λ��
	//if (!QueueEmpty(Q))   //���зǿ�
	//{
	//	QElemType temp = Q.front; //������ʱ������λ�����ͷ��ͬ
	//	while (temp != Q.rear)
	//	{
	//		cout << Q.base[temp] << " ";  //���temp����λ�õ�Ԫ��
	//		temp = (temp + 1) % MAXQSIZE; //tempλ�����Ƽ� 1 
	//	}
	//	cout << endl;
	//	return true;
	//}
	//return false;
}

int main13()
{
	SqQueue Q;  //����ѭ������Q
	InitQueue(Q); //���г�ʼ��
	QElemType value = 0;
	
	int number = 0; //��ӵ�Ԫ�ظ���
	cout << "������Ҫ��ӵ�Ԫ�ظ�����" << " ";
	cin >> number;

	int num = 0; //��ӵ�����Ԫ��
	while ((number--) > 0)
	{
		cin >> num; //��������Ԫ��
		EnQueue(Q, num); //��num��� 
	}

	cout << "�������˳��";
	QueuePrint(Q); //�����������Ԫ��
	cout << "��ͷԪ��Ϊ��" << GetHead(Q) << endl;
	cout << "���г���Ϊ��" << QueueLength(Q) << endl;

	cout << endl;
	DeQueue(Q, value);
	cout << "���Ӻ�������˳��";
	QueuePrint(Q);  //�������
	cout << "���Ӻ��ͷԪ��Ϊ��" << GetHead(Q) << endl;
	cout << "���Ӻ���г���Ϊ��" << QueueLength(Q) << endl;

	system("pause");
	return 0;
}










