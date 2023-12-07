#include<iostream>
#include<vector>
using namespace std;

typedef int SElemType;   //SElemType���͸���ʵ������������������Ϊint

class ArrayStack
{
private:
	static const int MAX_SIZE = 100; //ջ���������
	int data[MAX_SIZE];   //������洢ջԪ��
	int top;		//ջ��ָ��

public:
	ArrayStack(): top(-1) {}    //���캯��
	//��ջ����
	void push(int x)
	{
		if (top < MAX_SIZE - 1)
		{
			data[++top] = x;
		}
		else
		{
			std::cout << "Stack overflow!" << std::endl; 
		}
	}
};

//ʹ��vector����ʵ��ջ�Ľ�ջ����
class VectorStack
{
private:
	vector<int> data;   //ʹ��vector�洢ջԪ��

public:
	//��ջ����
	void push(int x)
	{
		data.push_back(x);  //��Ԫ�ؼ���vector��ĩβ
	}
};

//ʹ���Զ�������ʵ��ջ�Ľ�ջ����
class Node
{
public:
	int data;
	Node* next;
	Node(int value): data(value), next(nullptr)  {}
};

class LinkedStack
{
private:
	Node* top; //ջ��ָ��
public:
	LinkedStack() : top(nullptr)  {}  //���캯��
	//��ջ����
	void push(int x)
	{
		Node* newNode = new Node(x);
		if (top == nullptr)
		{
			top = newNode; 
		}
		else
		{
			newNode->next = top; 
			top = newNode; 
		}
	}
};


int main8()
{
	VectorStack stack1;
	stack1.push(1);    //��Ԫ��1��ջ
	stack1.push(2);		//��Ԫ��2��ջ
	return 0;


	LinkedStack stack2;
	stack2.push(1);  //��Ԫ��1��ջ
	stack2.push(2);  //��Ԫ��2��ջ

}

