#include <iostream>
using namespace std;
int main27()
{
	//��ά���鰸��
	//1.������ά����
	int scores[3][3] = { {100,100,100},{90,50,100},{60,70,80} };

	//ͳ��ÿ���˵��ܺͷ���
	for (int i = 0;i < 3;i++)
	{
		int sum = 0;   //ͳ�Ʒ����ܺ�
		for (int j = 0;j < 3;j++)
		{
			//cout << scores[i][j] << "\t";
			sum = sum + scores[i][j];
		}
		switch (i)
		{
			case 0:  cout << "�����ĸ��Ƴɼ��ֱ�Ϊ��" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t";cout << "�����ܷ�Ϊ��" << sum << endl; break;
			case 1:  cout << "���ĵĸ��Ƴɼ��ֱ�Ϊ��" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t";cout << "�����ܷ�Ϊ��" << sum << endl; break;
			case 2:  cout << "����ĸ��Ƴɼ��ֱ�Ϊ��" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t";cout << "�����ܷ�Ϊ��" << sum << endl; break;
			default: break;
		}
	}

	string name;       //ѧ����������
	int i = 0; int j = 0;
	int sum = scores[i][j] + scores[i][j + 1] + scores[i][j + 2];   //ͳ�Ʒ����ܺ�
	while (1)
	{
		cout << "��������Ҫ�鿴��ѧ�������� ";
		cin >> name;
		if (name == "����")
		{
			i = 0;
			cout << "�����ĸ��Ƴɼ��ֱ�Ϊ��\t" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t";cout << "�����ܷ�Ϊ��" << sum << endl;
		}
		else if (name == "����")
		{
			i = 1;
			cout << "���ĵĸ��Ƴɼ��ֱ�Ϊ��\t" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t";cout << "�����ܷ�Ϊ��" << sum << endl;
		}
		else if (name == "����")
		{
			i = 2;
			cout << "����ĸ��Ƴɼ��ֱ�Ϊ��\t" << scores[i][0] << "\t" << scores[i][1] << "\t" << scores[i][2] << "\t";cout << "�����ܷ�Ϊ��" << sum << endl;
		}
		else
		{
			cout << "ϵͳ�в�����ѧ����Ϣ��\t";
			
		}
	}
	system("pause");
	return 0;
}