#if 0
#include<iostream>
#include<Windows.h>
using namespace std;

#define MaxSize  128		//ջ�����Դ�ŵ�Ԫ�ظ���
typedef int SElemType;		//˳��ջ�洢���������͡���int����SElemType

//����˳��վ
typedef struct
{
	SElemType* base; //ջ��ָ��
	int top;		//ջ����λ�� �� 0��1��2��3��4....MaxSize
}SqStack;		//˳��ջ�Ľṹ�嶨��

//��ʼ��˳��ջ
bool InitStack(SqStack& stack)
{
	//��̬����һ��SElemType����MaxSize���ȵĿռ䣬����ַ��˳��ջStack��ջ��ָ��
	stack.base = new SElemType[MaxSize];
	//�ж�˳��ջ��ջ��ָ��(stack.base)�Ƿ�Ϊ�գ����޵�ַ�������ʧ��
	if (!stack.base)
	{
		return false; 
	}
	stack.top = 0;		//��ʼ��ջ��ָ���λ��Ϊ0
	return true; 
}

//�ж�ջ��   ;
bool StackEmpty(SqStack& stack)
{
	if (stack.top == 0)
	{
		return true; 
	}
	return false; 
}

//˳��ջ��Ԫ�ظ���
int GetStackSize(SqStack& stack)
{
	return stack.top;  //ջ��λ�ü�top����ֵ������ջ��Ԫ�صĸ���
}

//�ж�ջ��
bool StackFull(SqStack& stack)
{
	if (stack.top == MaxSize)   //top��λ��ֵ����MaxSizeʱջ��
	{
		return true; 
	}
	return false; 
}

//˳��ջ��ջ�������ݴ���stack.base[stack.top]���ڵ�λ�ã�Ȼ��stack.top��ֵ�� 1
bool PushStack(SqStack& stack, SElemType value)
{
	if (StackFull(stack))
	{
		cout << "ջ��" << endl; 
		return false;  
	}
	//��ջδ����ִ����ջ����
	stack.base[stack.top] = value;    //��ջ��λ����Ϊ�±�洢����
	stack.top++;		//ջ������һ
	return true; 
}

//˳��ջ��ջ
//��stack.top��ֵ��1����λ�ñ���ջ���һ������Ԫ������λ�á�
bool PopStack(SqStack& stack, SElemType &value)
{
	if (StackEmpty(stack))
	{
		cout << "ջΪ��" << endl; 
		return false; 
	}
	stack.top--;	//ջ���Լ� 1
	value = stack.base[stack.top];	//��ջ��λ����Ϊ�±��ֵ��ֵ��value����
	
	return true; 
}

//��ȡ˳��ջ��Ԫ��
bool GetStack(SqStack& stack, SElemType& value)
{
	if (StackEmpty(stack))
	{
		cout << "ջΪ��" << endl;
		return false; 
	}
	value = stack.base[stack.top - 1];  //����ջ���±��1���λ�õ�ֵ��ֵ��value��������
	return true; 
}

void DeleteStack(SqStack& stack)
{
	if (stack.base)    //��ջ��ָ������е�ַ�����ͷ�
	{
		delete stack.base;  //�ͷ�ջ��ָ��ĵ�ַ
		stack.top = 0;		//��ջ��λ��Ϊ0
		stack.base = NULL; //��ջ��ָ��ָ���
		cout << "ջ���ͷ��ڴ棡" << endl; 
	}
}

int main()
{
	SqStack	stack;   //����˳��ջ

	//��ʼ��˳��ջ
	InitStack(stack);	

	//����Ԫ��
	int number = 0;
	int value = 0;
	cout << "��������Ҫ�����Ԫ�ظ�����";
	cin >> number;

	while (number > 0)
	{
		cin >> value;
		PushStack(stack, value);
		number--; 
	}
	//��ȡջ����Ԫ��
	GetStack(stack, value);
	cout << "��ǰջ����Ԫ���ǣ�" << value << endl;

	//��ȡջ��Ԫ�ظ���
	cout << "��ǰջ��Ԫ�ظ����ǣ�" << GetStackSize(stack) << endl;

	//��ջ
	cout << "��ջ˳��" << endl;
	while (!StackEmpty(stack))
	{
		PopStack(stack, value);
		cout << value << " ";
	}
	//�ͷ�ջ���ڴ�
	DeleteStack(stack);
	system("pause");
	return 0;
}
#endif

