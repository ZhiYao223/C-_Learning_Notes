#if 0
#include<iostream>
using namespace std;

#define MaxSize 100
typedef int SElemType;

//��ջ�Ĵ洢�ṹ
typedef struct StackNode
{
	SElemType data;
	struct StackNode* next;
}StackNode, *LinkStack;
//������һ���ṹ��StackNode, ��ʾ��ջ�еĽ�㣬����data��nextָ��
// ��LinkStack����һ��ָ��StackNode�ṹ���ָ�����͡�

bool InitStack(LinkStack& stack);   //��ջ
bool PushStack(LinkStack& stack, SElemType value); //��ջ
bool PopStack(LinkStack& stack, SElemType &value); //��ջ
SElemType GetStack(LinkStack& stack); //��ջ��Ԫ��
bool StackTraverse(LinkStack& stack); //�������ջԪ��

//stack ��һ��ָ����ջ��ָ�룬���ں��� InitStack ����������ջ��ָ�봦��
//������Ϊ����ʽջ�У�ջ��ָ��ͨ������ָ������ĵ�һ���ڵ㣬�������˵�ǰջ�������Ԫ�ء�
//����ջ��ʵ���У����԰� stack ��Ϊջ��ָ�룬ͨ����������ջ��Ԫ�أ����ҽ�����ջ�ͳ�ջ������
//��ˣ��� InitStack �����У���ջ��ָ�� stack �ÿգ���ʾ��ʼ��һ����ջ��
//��ջ�ĳ�ʼ��
bool InitStack(LinkStack& stack)  //����һ����ջstack ջ��ָ���ÿ�
{
	stack = NULL;     //ջ��ָ���ÿ�
	return true; 
}

//��ջ����ջ
bool PushStack(LinkStack& stack, SElemType value)
{
	//��ջ������Ԫ��value�� ��ջ����Ҫ�ж�ջ��
	StackNode* newNode = new StackNode;
	newNode->data = value;
	newNode->next = stack;
	stack = stack->next;
	delete newNode;
	return true; 
}

///��ջ����
bool PopStack(LinkStack& stack, SElemType& value)
{
	if (stack == NULL)   //�ж��Ƿ�Ϊ��ջ
	{
		return false; 
	}
	value = stack->data;
	StackNode* p = stack; 
	stack = stack->next;
	delete p;
	return true; 
}

//ȡջ��Ԫ�ز���:�ж�ջ�Ƿ�Ϊ�ա������򷵻�false�� ����value��ȡջ��Ԫ�ص�ֵ
SElemType GetStack(LinkStack& stack)
{
	//����stack��ջ��Ԫ�أ����޸�ջ��ָ��
	if (stack != NULL)     //��ջ��ʱ����
	{
		return  stack->data;
	}
	return false;
}

//���������ջ
bool StackTraverse(LinkStack& stack)
{
	StackNode* p = stack;
	if (p == NULL)
	{
		cout << "��ջΪ�գ�" << endl;
		return false; 
	}
	cout << "ջ��->";
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next; 
	}
	cout << endl;
	return true; 
}

int main()
{
	LinkStack stack;
	int value, choice;
	InitStack(stack);

	while (1)
	{
		cout << "\t 1.��ջ \t 2.��ջ \t 3.��ջ��Ԫ�� \t 4.���ջ \t 0.�˳�" << endl;
		cout << "ѡ��Ҫ���еĲ�����";
		cin >> choice;
		switch (choice)
		{
		case 1: cout << "������ջԪ�أ�"; cin >> value; break; 
		case 2: 
			if (!PopStack(stack, value))
			{
				cout << "��ջʧ�ܣ�" << endl;
			} 
			else   cout << "Ԫ��" << value << "��ջ�ɹ���" << endl;break; 
		case 3:
			if (!GetStack(stack, value))
				cout << "��ջ��Ԫ��ʧ�ܣ�" << endl;
			else
				cout << "ջ��Ԫ��Ϊ��" << value << endl;
			break;
		case 4:
			StackTraverse(stack);
			break;
		case 0: return true;
		default:
			return true;
		}
	}
	return 0;
}
#endif
/*
1.ջ����ʽ�洢����Ҫ����ͷ�ڵ�
2.��ͷΪջ������βΪջ��
3.��ջ����Ҫ�ж�ջ������Ҫ�п�
4.��Ϊ�Ƕ�̬����ռ䣬������Ҫ�ͷ�
5.ʱ��������˳��ջ��ͬ���ռ����ܲ���˳��ջ��Ԫ�ظ������ƺͿռ��˷ѣ�
������ÿ��Ԫ�ض���Ҫһ��ָ��������ӽṹ�Կ�����
��֮�������������
*/
#if 0
#include<iostream>
using namespace std;

typedef int SElemType;

typedef struct StackNode
{
	SElemType data;
	struct StackNode* next;
}StackNode, *LinkStack;
//LinkStack ��ָ�� StackNode �ṹ���ָ�����ͣ���ʾ��ջ��ջ��ָ�롣

/* ��ջ�ĳ�ʼ�� */
//LinkStack top ��һ����������ʾ��ջ��ջ��ָ�롣
//����� top ֻ��һ����ͨ�ı������洢����ջ��ջ��ָ���ֵ��
void InitStack(LinkStack& top)
{
	top->next = NULL; //topָ��ָ��ջ��Ԫ�ص���һ��λ��
}

//�ж�ջ�Ƿ�Ϊ��
bool StackEmpty(LinkStack& top)
{
	if (top->next = NULL)
	{
		return true; 
	}
	return false; 
}

//Ԫ����ջ
bool PushStack(LinkStack& top, SElemType value)
{
	LinkStack temp;
	temp = (LinkStack)malloc(sizeof(StackNode));
	if (temp == NULL)
	{
		return false; 
	}
	temp->data = value;
	temp->next = top->next;
	top->next = temp;
	return true; 
}

//Ԫ�س�ջ
int PopStack(LinkStack top, SElemType& value)
{
	if (StackEmpty(top))
	{
		return false; 
	}
	StackNode* temp = top->next;
	value = temp->data;
	top->next = temp->next;
	free(temp);
	return true; 
}

//��ȡջ��Ԫ��
int GetStack(LinkStack top, SElemType value)
{
	if (top->next == NULL)
	{
		return false; 
	}
	value = top->next->data;
	return true; 
}

int main()
{
	LinkStack stack;
	int result;
	stack = (LinkStack)malloc(sizeof(StackNode));
	InitStack(stack);
	for (int i = 1; i <= 10; i++)
	{
		PopStack(stack, i);
	}

	GetStack(stack, result);
	cout << "ջ��Ԫ��Ϊ��" << result << endl; 
	
	cout << "Ԫ�����γ�ջ��" << " ";
	while (!StackEmpty(stack))
	{
		PopStack(stack, result);
		cout << result << endl;
	}
}
#endif

//��ջ���������޵ĵ�����ֻ��������ͷ�����в���
/*
	1.�����ͷָ�����ջ��
	2.����Ҫͷ���
	3.����������ջ�������
	4.��ջ�൱��ͷָ��ָ���
	5.�����ɾ������ջ����ִ��
*/
#include<iostream>
using namespace std;

#define MaxSize 100     //��ջ����󳤶�
typedef int SElemType;  //��ջ������Ԫ�����ͼ���Ϊint����
//������ջ�ṹ
typedef struct StackNode 
{
	SElemType data;   //���������
	struct StackNode* next;//���ָ����
}StackNode, *LinkStack;//struct StackNode�Ľ����ʽ����ջ��ʽ����

LinkStack stack;   //����ջ��ָ��ָ����ջ��ͷ���

bool InitStack(LinkStack& stack);//��ʼ����ջ
bool StackEmpty(LinkStack& stack);//��ջ�п�
bool PushStack(LinkStack& stack, SElemType value);//��ջ
bool PopStack(LinkStack& stack, SElemType& value);//��ջ
SElemType GetTop(LinkStack& stack);//��ȡջ��Ԫ��
bool StackPrint(LinkStack& stack);//����Ԫ��
void DestoryStack(LinkStack& stack);//������ջ���ͷ��ڴ�
int StackLength(LinkStack& stack);//������ջ����/Ԫ�ظ���

//��ջ�ĳ�ʼ��
bool InitStack(LinkStack& stack)
{
	//����һ����ջ��ջ��ָ����Ϊ��
	stack = NULL;
	return true; 
}

//�ж���ջ�Ƿ�Ϊ��
bool StackEmpty(LinkStack& stack)
{
	if (stack == NULL)
	{
		return true; 
	}
	return false;
}

//��ջ����ջ
bool PushStack(LinkStack& stack, SElemType value)   //������ջ��
{
	StackNode* temp = new StackNode; //�����½��temp
	temp->data = value; //���½ڵ���������Ϊvalue
	temp->next = stack; //���½�����ջ��
	stack = temp; //����ջ��ָ��
	return true;
}

//��ջ�ĳ�ջ�������п�
bool PopStack(LinkStack& stack, SElemType &value)
{
	if (StackEmpty(stack))
	{
		return false; 
	}
	value = stack->data;  //��ջ��������Ԫ�ظ�ֵ��value
	//LinkStack temp1 = new StackNode;
	//StackNode* temp = new StackNode;
	StackNode* temp = stack; //����һ��tempָ�룬������ָ�� stack ָ����ָ����ڴ��ַ���Ա��ҵ���ջλ�ò��ͷš�
	stack = stack->next; //��ջ��ָ��ָ����һλ��㣬������ջ��ָ��
	delete temp;   //�ͷ�temp��ָ��Ŀռ䣬����ջԪ����ռ���ڴ�ռ�,��temp������ں����������Զ����١�
	return true;  
}

/*
	LinkStack temp1 = new StackNode;
	���� LinkStack ��һ��ָ�����ͱ�����ʵ������ StackNode* �ı�����
	���� temp1 ��һ��ָ�������ָ�� StackNode ���͵Ľ�㡣

	StackNode* temp2 = new StackNode;
	����ֱ��������һ�� StackNode* ���͵�ָ����� temp2��ָ�� StackNode ���͵Ľ�㡣

	������������ʽ�ǵȼ۵ġ����߶�������һ����̬����� StackNode ���͵Ľ�㣬�������ĵ�ַ������Ӧ��ָ����������߶�����ͨ�� temp1->data �� temp2->data �����ʽ������ݳ�Ա���Լ� temp1->next �� temp2->next �����ʽ�����һ������ָ���Ա��
	��ˣ��ڹ����ϣ�temp1 �� temp2 û�����𡣲�ͬ��ֻ�����ǵ�������ʽ��temp1 ��ͨ������ LinkStack ��������ָ��������� temp2 ��ֱ���� StackNode* ������������ָ�������
	*/

//ȡջ��Ԫ��
SElemType GetTop(LinkStack& stack)
{
	if (!StackEmpty(stack))  //��ջ��Ϊ��
	{
		return stack->data;  //����ջ��Ԫ��
	}
	return false; 
}


/*
��Ϊ��������һ���ڵ��nextָ����nullptr������˵��NULL���������������ֹ�����Կ��Խ�����ı�����������Ϊ��ǰ�ڵ�ָ�벻����nullptr�������ڱ��������У���ָ��ָ�����һ���ڵ�ʱ����nextָ��ͻ�ָ��nullptr��ѭ�������Ͳ��ٳ������������������Ա������������һ�����Ϸ��Ľڵ㡣
*/
//��ȡջ������
int StackLength(LinkStack& stack)
{
	int length = 0;
	StackNode* temp = stack;//������ʱָ��temp��stackָ��ͬһλ��
	while (temp != nullptr)
	{
		length++;  //��ջ���ȼ�Ϊջ��Ԫ�ظ�����ѭ��һ�Σ�����++
		temp = temp->next; //tempָ������һλ
	}
	return length; //������ջ����
}
//����ջԪ��
bool StackPrint(LinkStack& stack)
{
	if (stack != nullptr)
	{
		StackNode* temp = stack;//����һ��ָ����stackָ��ͬһλ��
		cout << "��ջ˳��";
		while (temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;  //temp�����ƶ�һλ
		}
		return true;  //�������
	}
	cout << "ջΪ�գ�" << endl;
	return false;
}

//������ջ���ͷ��ڴ�
void DestoryStack(LinkStack& stack)
{
	StackNode* temp = new StackNode;//����һ��ָ��
	while (stack != nullptr)
	{
		temp = stack;//ʹ����ʱָ����stackָ��ͬһλ��
		stack = temp->next;//����ջ��ָ��
		delete temp;//�ͷ���ʱָ��
	}
	stack = nullptr;
	return;
}

//���Դ���
int main11()
{
	//������ջ
	LinkStack stack;
	SElemType value;

	InitStack(stack);
	cout << "���ջ�Ƿ�Ϊ�գ�" << (StackEmpty(stack) ? "\t��" : "\t��") << endl;

	int number = 0;//����Ԫ�ظ���
	int num = 0; //����Ԫ��ֵ
	cout << "��������Ҫ�����Ԫ�ظ�����";
	cin >> number;
	while ((number--) > 0) //����
	{
		cin >> num;//��������
		PushStack(stack, num);//����������Ԫ��
	}
	cout << "��ǰջ��Ԫ�ظ�����" << StackLength(stack) << endl; 
	cout << "��ȡջ��Ԫ�أ�" << GetTop(stack) << endl;
	StackPrint(stack); //������ӡջ��Ԫ��

	cout << endl;
	PopStack(stack, value); //��ջ
	cout << "��ջһ�κ�ջ��Ԫ��Ϊ��" << GetTop(stack) << endl;
	StackPrint(stack);//������ӡ��ջԪ��

	DestoryStack(stack);
	cout << endl << "ջ�ѱ������ͷ�" << endl;

	cout << "����ջ���ӡ��������" <<" ";
	StackPrint(stack);
	cout << "����ջ�����ջ�����" << " ";
	StackPrint(stack);

	system("pause");
	return 0;
}


