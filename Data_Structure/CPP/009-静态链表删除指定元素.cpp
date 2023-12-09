/*
��C++��ʵ�־�̬������ɾ��ĳһ�ڵ�Ԫ�صĲ�������ͨ�����²�����ɣ�

���������ҵ�Ҫɾ���ڵ��ǰ���ڵ㣨��ָ��Ҫɾ���ڵ�Ľڵ㣩��
�޸�ǰ���ڵ��ָ�룬����ָ��Ҫɾ���ڵ����һ���ڵ㡣
��Ҫɾ���ڵ������������нڵ�����ʹ���Ϊ�ɱ��������õĽڵ㡣
������һ���򵥵�ʾ�����룬��ʾ�������C++��ʵ�־�̬������ɾ��ĳһ�ڵ�Ԫ�صĲ�����

*/

#include <iostream>
using namespace std;

const int Max_Size = 100;  //���徲̬������������

struct Node
{
	int data;
	int next; //������ʾ���֮���ָ��������±꣬-1��ʾ�������
}staticLinkedList[Max_Size];   //��̬����Ĵ洢�ռ�

int currentNode = 0;	//��ǰ���õĽ��ռ�

//��ʼ����̬����
void initStaticLinkedList()
{
	for (int i = 0; i < Max_Size - 1; i++)
	{
		staticLinkedList[i].next = i + 1; //�����������������
	}
	staticLinkedList[Max_Size - 1].next = -1;//���һ������nextΪ-1��ʾ����
}
 
//������
int insertNode(int value)
{
	if (currentNode == -1)
	{
		cout << "�����������޷�����" << endl;  
		return -1;
	}
	int newNodeIndex = currentNode;
	staticLinkedList[newNodeIndex].data = value;//�洢����
	currentNode = staticLinkedList[currentNode].next;  //���¿��ý��λ��
	return newNodeIndex;  //�����²����������
}

//ɾ�����
void deleteNode(int value)
{
	int index = 0;
	int prevIndex = -1; //ǰ���������
	//�ҵ�Ҫɾ��������������ǰ���������
	while (index != -1)
	{
		if (staticLinkedList[index].data == value)
		{
			if (prevIndex == -1)
			{
				//ɾ�����ǵ�һ�����
				currentNode = staticLinkedList[index].next;
			}
			else
			{
				staticLinkedList[prevIndex].next = staticLinkedList[index].next;
			}
			staticLinkedList[index].next = currentNode;//��ɾ���Ľ���������б�
			currentNode = index; //���¿��ý��λ��
			return;
		}
		prevIndex = index;
		index = staticLinkedList[index].next;
	}
	cout << "������ݣ�" << value << "δ���ָ�Ԫ�أ��޷�ɾ��" << endl;
}

//��������
void traverseStaticLinkedList()
{
	int index = 0;
	while (index != -1)
	{
		cout << staticLinkedList[index].data << "->";
		index = staticLinkedList[index].next;
	}
	cout << "NULL" << endl; 
}

int main9()
{
	initStaticLinkedList();

	//������
	int node1 = insertNode(10);
	int node2 = insertNode(20);
	int node3 = insertNode(30);

	//��������
	traverseStaticLinkedList();

	//��������
	traverseStaticLinkedList();

	//ɾ���ڵ�
	deleteNode(20);

	//��������
	traverseStaticLinkedList();

	return 0;
}
















