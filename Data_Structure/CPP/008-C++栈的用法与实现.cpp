/*
���ȿ�һ��ԭc++ջ�ķ����Ļ����÷���
push(): ��ջ��ѹ��һ����Ա��
pop(): ��ջ������һ����Ա��
empty(): ���ջΪ�շ���true�����򷵻�false��
top(): ����ջ��������ɾ����Ա��
size(): ����ջ��Ԫ�صĴ�С��

*/
#if 0
#include<iostream>
#include<stack>

using namespace std; 

int main()
{
	stack<int>stk;
	//��ջ
	for (int i = 0; i < 50; i++)
	{
		stk.push(i);
	}
	cout << "ջ�Ĵ�СΪ��" << stk.size() << endl;
	while (!stk.empty())
	{
		cout << stk.top() << endl;   //��ջ��Ϊ�գ��������ջ��Ԫ��
		stk.pop();    //ɾ��ջ��Ԫ��
	}
	cout << "ջ�Ĵ�С��" << stk.size() << endl; 
	return 0;
}
#endif

#include<iostream>
#include<stdlib.h>
using namespace std;

#define MAXSIZE 0fff;

#if 0
template <class type>
class mystack
{
	//int top;
	type* top;
	int maxsize;
public:
	mystack() : top(-1), maxsize(MAXSIZE) {}
	{
		top = new type(maxsize);
		if (top == NULL)
		{
			cout << "��̬�洢����ʧ�ܣ�" << endl; 
		}
	}

	mystack(int size) : top(-1), maxsize(size)
	{
		top = new type(maxsize);
		if (top = NULL)
		{
			cout << "��̬�洢����ʧ�ܣ�" << endl;
			exit(1);
		}
	}
	~mystack()
	{
		delete[] top; 
	}
	//�Ƿ�Ϊ��
	bool Empty();
	//ѹջ
	void Push(type tp);
	//����ջ��Ԫ��
	type Top();
	//��ջ
	void Pop();
	//ջ̫С
	int Size();

};

#endif