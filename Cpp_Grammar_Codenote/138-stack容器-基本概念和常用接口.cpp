/*
		stack��һ���Ƚ���������ݽṹ�� ��ֻ��һ������
		ջ�������б�����Ϊ�������Ƚ����
		ջ�н����ݳ�Ϊ   ��ջpush
		ջ�е������ݳ�Ϊ  ��ջpop

		����������ջ�������õĶ���ӿ�
		���캯��:
		stack<T> stk;//stack����ģ����ʵ�֣� stack�����Ĭ�Ϲ�����ʽ
		stack(const stack &stk);//�������캯��


		��ֵ����:
		stack& operator=(const stack &stk);//���صȺŲ�����

		���ݴ�ȡ:
		push(elem);		//��ջ�����Ԫ��push(elem);
		pop();			//��ջ���Ƴ���һ��Ԫ��
		top();			//����ջ��Ԫ��
		
		��С����:
		empty();	//�ж϶�ջ�Ƿ�Ϊ��
		size();		//����ջ�Ĵ�С
	
*/
#include<iostream>
#include<stack>
using namespace std;
 
void test138()
{
	//����ջ������ջ������������Ƚ����
	stack<int>s;
	//��ջ�����Ԫ�أ����� ѹջ ��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while (!s.empty())
	{
		//���ջ��Ԫ��
		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
		//����ջ��Ԫ��
		s.pop();
	}
	cout << "ջ�Ĵ�СΪ��" << s.size() << endl; 
}

int main138()
{
	test138();
	system("pause");
	return 0;
}

  