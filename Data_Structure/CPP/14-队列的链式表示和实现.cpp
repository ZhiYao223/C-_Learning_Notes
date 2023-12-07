#include<iostream>
using namespace std;

#define MAXQSIZE 100 //�����г���
typedef int QElemType; //

typedef struct Qnode
{
	QElemType data;
	struct Qnode* next; 
}QNode, *QueuePtr; //���н�����͡�ָ����н���ָ������

typedef struct     //Ϊָ����н���ָ������QueuePtr��������һ��������ͷ��β�Ľṹ��
{
	QueuePtr  front; //��ͷָ��
	QueuePtr  rear;  //��βָ��
}LinkQueue;       //��ʽ���ж���

//��ʼ�������У�front��rear��ָ���ͷ��㣬��ͷ���nextָ���ÿ�
bool InitQueue(LinkQueue& Q)
{
	//�����е�ͷβָ�붼ָ��ͬһ���ڵ㣬��ʾ����Ϊ��
	//C++ �� new ��������ڶ�������Ҫʱ�Զ������������������ͷ��ڴ棬�� malloc ������Ҫ�ֶ����� free �������ͷ��ڴ档
	Q.front = Q.rear = new QNode;  
	//Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if(!Q.front)
	{
		exit(OVERFLOW);
	}
	Q.front->next = NULL; //�����ж�ͷָ���ÿ�
	return true; //��ʼ�����
}
//�������п�
bool QueueEmpty(LinkQueue& Q)
{
	//��ͷ��βָ��ָ��ͬһλ��(��ͷ���)������Ϊ�ա�
	return Q.front == Q.rear;
}

//���������٣��Ӷ�ͷ��㿪ʼ��һ���ͷ����н��
bool DestoryQueue(LinkQueue& Q)
{
	QueuePtr temp;   //������ʱָ��  ָ��������ѡһ
	//QNode* temp;  
	while (Q.front)
	{ 
		//����rearָ���������£��˴����Բ����ⴴ��temp��ֱ�ӽ�����temp�滻��Q.rearЧ��һ����
		temp = Q.front->next; //tempָ���ͷ����һ�����
		delete Q.front;  //�ͷŶ�ͷ���
		Q.front = temp;  //���¶�ͷ���
	}
	Q.rear = NULL;
	cout << "�������ٳɹ���" << endl;
	return true; 
}
//������Ӳ�������Ԫ��value��ӣ������½�㣬��Ԫ�ط������������½ڵ�nextָ���ÿա���βrearָ���½�㡢���¶�β��㡣
bool EnQueue(LinkQueue& Q, QElemType value)
{
	QueuePtr temp = new QNode; //����ָ����QNode��㣬ָ��ָ��Ҫ����Ľ��Ԫ��
	if (!temp)    //������㣬�����ڴ�Ҫ�ж��Ƿ����ɹ�
	{
		exit(OVERFLOW);
	}
	temp->data = value;    //��Ҫ�����Ԫ�ط���temp���������
	temp->next = NULL;     //temp���ָ�����ÿ�
	Q.rear->next = temp;   //����βָ�����temp���
	Q.rear = temp;         //���¶�β���
	return true; 
}
//���ӵĳ��ӣ�ɾ����ͷ������һλ��ͷ��㲻�洢����Ԫ�ء�
//�ж��������Ƿ�Ϊ�ա�����tempָ��ָ��Ҫ��ջ��Ԫ�ء�ɾ���ý�㣬��ͷ���ָ��ɾ�����ĺ�̽�㣬���¶�ͷ����ɾ�����Ƕ�β�����ͷ��βָ���ָ���ͷ��㡣��
bool DeQueue(LinkQueue& Q, QElemType value)
{
	if (!QueueEmpty(Q))   //�������в�Ϊ��
	{
		QueuePtr temp = new QNode; //����ָ�����͵�QNode��㣬ָ��ָ���½��
		if (!temp)  exit(OVERFLOW);//�ж��½���ڴ��Ƿ����ɹ�
		temp = Q.front->next;//tempָ���ͷ�����һλ����һλԪ��
		value = temp->data;//��temp��ָ�������ݱ��浽value��
		Q.front->next = temp->next;//���¶�ͷ��� 

		if (Q.rear == temp)//���ɾ���������һ�����(β���)��β������
		{
			Q.rear = Q.front;//rear��front��ָ������ͷ���
			Q.front->next = NULL;
		}
		delete temp;  //�ͷ�temp��ָ���ռ�
		return true;  //��ջ�ɹ�
	}
	return false; //����Ϊ��
}
//���ӵĶ�ͷԪ��
bool GetHead(LinkQueue Q)
{
	if (!QueueEmpty(Q))  //�������в�Ϊ��
	{
		return Q.front->next->data;
	}
	return false; 
}
//�����еĳ���/Ԫ�ظ���
//����Q������'&'�����ʹ��ݣ������·���ͷָ��front���ƶ����޸�ԭ����frontָ�롣�������ã��ͻᴴ��һ������ִ�в����������ǰ�߻������Щ�ڴ��ʱ�䡣Ҳ���Դ���һ����ʱָ��temp�Զ��н��б�����������ʹQ����&, Ҳ����Ӱ��ԭ�����С�
int QueueLength(LinkQueue Q)
{
	if (!QueueEmpty(Q))  //�������в�Ϊ��
	{
		int count = 0;	     //Ԫ�ظ���/���г���
		while (Q.front != Q.rear)//ֱ��
		{
			Q.front = Q.front->next;//��ͷָ�����һλ
			count++; //������һ
		}
		return count; 
	}
	return false; //����Ϊ�ջ򲻴���
}
//�����������Ԫ��
bool QueuePrint(LinkQueue Q)  
{
	if (!QueueEmpty(Q))
	{
		while (Q.front != Q.rear)
		{
			Q.front = Q.front->next;	  //������ͷָ��ָ���һ��Ԫ�ؽ��
			cout << Q.front->data <<" ";  //����ý����ָ�Ľ������
		}
		cout << endl;
		return true; 
	}
	cout << "����Ϊ�ջ򲻴��ڣ�";
	return false;  
}

int main14()
{
	LinkQueue Q;
	QElemType value = 0;
	InitQueue(Q);

	int number = 0;		//��ӵ�Ԫ�ظ���
	cout << "������Ҫ��ӵ�Ԫ�ظ�����" << " ";
	cin >> number; 

	int num = 0;		//��ӵ�����Ԫ��
	while ((number--) > 0)
	{
		cin >> num; //��������Ԫ��
		EnQueue(Q, num); //��num��� 
	}

	cout << "�������˳��";
	QueuePrint(Q); //�����������Ԫ��
	cout << "��ͷԪ��Ϊ��" << GetHead(Q) << endl;
	cout << "���г���Ϊ��" << QueueLength(Q) << endl;

	DeQueue(Q,value); //���ӣ���������Ԫ�ش洢��value��
	cout << "���г��Ӻ����˳��";
	QueuePrint(Q); //�����������Ԫ��
	cout << "��ͷԪ��Ϊ��" << GetHead(Q) << endl;
	cout << "���г���Ϊ��" << QueueLength(Q) << endl;

	DeQueue(Q, value);
	cout << "���г��Ӻ����˳��";
	QueuePrint(Q); //�����������Ԫ��
	cout << "��ͷԪ��Ϊ��" << GetHead(Q) << endl;
	cout << "���г���Ϊ��" << QueueLength(Q) << endl;

	DestoryQueue(Q);//������ʽ���У��ͷ��ڴ�ռ�

	QueuePrint(Q); //��������Ԫ��
	system("pause");
	return 0;
}


