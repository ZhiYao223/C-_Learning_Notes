#include <iostream>
using namespace std;
int main11()
{
	//switch ���
	//����Ӱ��� 10-9 ����     8-7 �ǳ���    6-5 һ��    5���� ��Ƭ
	//1.��ʾ�û�����Ӱ����
	cout << "�����Ӱ���֣�" << endl;
	
	//2.�û���ʼ���д��
	int score = 0;
	cin >> score;
	while(1)
	{
		cout << "����ķ���Ϊ��" << score << endl;
		if (score >= 0 && score <= 10)              //�ų���Ч���
		{
			//switchȱ�㣺�ж�ʱֻ�������ͻ��ַ��ͣ�������һ������
			//switch�ŵ㣺�ṹ������ִ��Ч�ʸ�
			switch (score)
			{
			case 10: cout << "�����Ӱ" << endl;			break;//����switchѭ��
			case 9:  cout << "�����Ӱ" << endl;			break;
			case 8:  cout << "�ǳ��õĵ�Ӱ" << endl;		break;
			case 7:  cout << "�ǳ��õĵ�Ӱ" << endl;		break;
			case 6:  cout << "һ��ĵ�Ӱ" << endl;		break;
			case 5:  cout << "һ��ĵ�Ӱ" << endl;		break;
				//case 4:  cout << "��Ƭ" << endl;				break;
				//case 3:  cout << "��Ƭ" << endl;				break;
				//case 2:  cout << "��Ƭ" << endl;				break;
				//case 1:  cout << "��Ƭ" << endl;				break;
			default: cout << "��Ƭ" << endl;				break;  //��������5-10�⣬����Ĭ�϶�����Ƭ
			}
		}
		else
		{
			cout << "������Ч������������0-10��score��֣�" << endl;
			cin >> score;
		}
	}

}