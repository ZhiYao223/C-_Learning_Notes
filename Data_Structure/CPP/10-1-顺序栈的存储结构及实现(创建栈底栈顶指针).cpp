#if 0

#include <iostream>
#include <Windows.h>
using namespace std;

//˳��ջ�Ľṹ����
#define	 MaxSize 50			//����ջ��Ԫ�ص�������Ϊ50
typedef  int  SElemType;	//ջ�洢���������ͣ���int����SElemType  

//����˳��ջ
typedef struct
{
	SElemType* base;  //ջ��ָ��   baseָ�벻����top������
	SElemType* top;  //ջ��ָ��
	int stackSize;	// ��ǰ�ѷ���Ĵ洢�ռ��С,��˳��ջ�Ĵ�С
}SqStack;			//˳��ջ�Ľṹ�嶨��

bool InitStack(SqStack& stack);	//��ʼ��ջ
bool StackEmpty(SqStack& stack);//�ж��Ƿ�Ϊ��
bool StackFull(SqStack& stack);	//�ж��Ƿ�����
int  StackLength(SqStack& stack);//��ȡջ�Ѵ洢��Ԫ�ظ���
bool PushStack(SqStack& stack, SElemType value);//��ջ
bool PopStack(SqStack& stack, SElemType& vlaue);//��ջ
bool GetStack(SqStack& stack, SElemType& value);//��ȡջ����Ԫ��
void DestoryStack(SqStack& stack);//����ջ���ͷ�ջ���ڴ�

//��ʼ��˳��ջ
bool InitStack(SqStack& stack)
{
	//��̬����һ��SElemType����MaxSize���ȵĿռ䣬����ַ��˳��ջstack��ջ��ָ��
	stack.base = new SElemType[MaxSize];
	//stack.base = (SElemType*)malloc(MaxSize * sizeof(SElemType); //C�����﷨
	
	//�ж�˳��ջ��ջ��ָ��(stack.base)�Ƿ�Ϊ�գ����޵�ַ�������ʧ��
	if (!stack.base)  //�ж��Ƿ�����ڴ�ʧ��
	{
		return false;
	}
	stack.top = stack.base;		 //��ʼ��Ϊ��ջ��ջ��ջ��ָ��ͬһ��λ��
	stack.stackSize = MaxSize; //�յ�˳��ջ����MaxSize���ռ���Դ洢
	return true;   //��ʼ�����
}

//�ж�ջ��
bool StackEmpty(SqStack& stack)
{
	//cout << "�ж�ջ�յĽ��Ϊ��";
		if(stack.top == stack.base) //��ջ����ջ��ָ��ָ��ͬһλ��ʱջΪ��
		{
			//cout << "ջ��" << endl;
			return true;  
		}
		else
		{
			//cout << "ջ����" << endl;
			return false; 
		}
}
//�ж�ջ��
bool StackFull(SqStack& stack)  //ָ��top��ȥָ��base�� ͨ����ָ����������ж�֮�����Ԫ�ظ���
{
	if ((stack.top - stack.base) == MaxSize)	//����ָ��λ����� ���� ջ�Ĵ�С ��ջΪ��ջ
	{
		//cout << "ջ��" << endl;
		return true; 
	}
	else
	{
		return false; 
	}
}
//˳��ջ��ջ: �ж��Ƿ�ջ�������ջ����������ջʧ�ܣ�����Ԫ�ط���ջ����ջ��ָ�������ƶ�һ���ռ䣨top++����
//ջ����Զָ����һ��������Ԫ�ص�λ�ã���ָ�����һ��Ԫ�ص���һ��ַ��
bool PushStack(SqStack& stack, SElemType value)
{
	if (StackFull(stack))  //��ջ
	{
		cout << "ջ��" << endl; 
		return false; 
	}
	//��ջδ����ִ����ջ����
	*stack.top = value;  //��Ҫ�����valueֵ������topָ����ָ�Ŀռ���
	stack.top++;   //ջ��ָ���1�������ƶ�һλ������ջ��λ�á�
	//����д�� *stack.top++=value;
	return true; 
}

//˳��ջ��ջ���ж��Ƿ�ջ�գ����ջ�գ���ջʧ�ܡ�����ջ��Ԫ�������ջ��ָ��� 1 
bool PopStack(SqStack& stack, SElemType &value)
{
	if (StackEmpty(stack))  //�ж�ջ�Ƿ�Ϊ��
	{
		cout << "ջΪ��" << endl;
		return false; 
	}
	stack.top--;  //ջ��ָ������һλ��ָ�����һ��Ԫ��
	value = *stack.top;  //��ջ��ָ����ָ���ַ�е�����Ԫ�ش���value�з��ء�
	//���ߣ�value = *--stack.top;
	return true; 
}

//��ȡջ��Ԫ��: ����ҲҪ�ж�ջ�Ƿ�Ϊ��
//ȡջ�ͳ�ջ��ͬ��ȡջ��Ԫ���ǰ��丳ֵһ�ݣ�ջ��Ԫ�ظ������ֲ��䣬����ջ��ָ�����Ҳ���䡣
//����ջ�ǽ�ջ��Ԫ�ش�ԭ��ջ�����ߣ�����ջ��ָ��Ҫ�� 1���������ƶ�һλ ��
bool GetStack(SqStack& stack, SElemType& value)     
{
	if (StackEmpty(stack))
	{
		cout << "ջΪ��" << endl;
		return false;
	}
	value = *(stack.top - 1); //��ջ��ָ����һλ�ռ����洢��Ԫ��ȡ��������ֵ��value���� ʵ��ջ��ָ��λ�ò��䡣
	return true; 
}

//���ջ��  �ͷ��ڴ�
void DestoryStack(SqStack& stack)
{
	if (stack.base)  //��ջ��ָ���з����ַ��
	{
		delete stack.base;   //�ͷ�ջ��ָ��ĵ�ַ
		stack.top = NULL;     //��ջ����ջ��ָ��ָ���
		stack.base = NULL;
		stack.stackSize = 0;
		cout << "ջ���ͷ��ڴ棡" << endl; 
	}
}

//��ȡ˳��ջ�洢��Ԫ�ظ�����ջ��ָ���ȥջβָ�뼴Ϊջ���洢��Ԫ�ظ���
int StackLength(SqStack& stack)    //ջ��ָ���ȥջ��ָ�룬���ü�Ϊ���߼������Ԫ�ظ���
{
	return (stack.top - stack.base); //����ջ��Ԫ�ظ���
}

int main10_1()
{
	//����˳��ջ
	SqStack stack;

	//��ʼ��ջ
	InitStack(stack);

	//����Ԫ��
	int number = 0; //����Ԫ�ظ���
	int value = 0;	//����Ԫ��ֵ
	cout << "��������Ҫ�����Ԫ�ظ�����";
	cin >> number;

	while (number > 0)
	{
		cin >> value;   //��������
		PushStack(stack, value);  //���������������
		number--;    //����Ԫ�ظ�������
	}
	//����˳��ջ
	//��ȡջ����Ԫ��
	GetStack(stack, value);
	cout << "��ǰջ��Ԫ���ǣ�" << value << endl;
	cout << "��ǰջ��Ԫ�ظ����ǣ�" << StackLength(stack) << endl;

	//��ջ
	cout << "��ջ˳��" << endl;
	while (!StackEmpty(stack))   //ջ��Ϊ�գ�����ѭ��
	{
		PopStack(stack, value);
		cout << value << " ";
	}
	cout << endl;  

	//�ͷ�ջ���ڴ�
	DestoryStack(stack);

	system("pause");
	return 0;
}

#endif

