#include <iostream>
#include <string>
using namespace std;
//1.����Ӣ�۽ṹ��
struct Hero
{
	string name;
	int age;
	string sex;
};
//2.ð��������
void HeroSort(struct Hero HeroArray[], int len)//  HeroArray[]�ȼ��� *HeroArray     HeroArray[1] = *(HeroArray+1)
{
	for (int i = 0; i < len - 1; i++)      //len-1 Ϊ����������
	{
		for (int j = 0; j < len - i - 1; j++)  //len-i-1 Ϊ���������еڼ���Ԫ��
		{
			//���j�±��Ԫ���������j+1�±��Ԫ�����䣬�򽻻�����Ԫ��
			if (HeroArray[j].age > HeroArray[j + 1].age)
			{
				struct Hero temp = HeroArray[j]; //�״�㣬����string temp
				HeroArray[j] = HeroArray[j + 1];
				HeroArray[j + 1] = temp;
			}
		}
	}
}
//3.�����ӡ����
void HeroPrint(struct Hero HeroArray[], int len)  //������ָ�봫�ݣ�����α�д��
{
	cout << "��������� " << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "\t������" << HeroArray[i].name
			 << "  ���䣺" << HeroArray[i].age
			 << "  �Ա�" << HeroArray[i].sex << endl;
	}	
	//return;
}

int main44()
{
	//�����ṹ�����飬�������Ӣ��
	struct Hero HeroArray[5] = { {"����",25,"��"},
		                         {"����",27,"��"},
		                         {"�ŷ�",24,"��"},
		                         {"����",21,"��"},
		                         {"��",23,"��"}};
	//����ṹ�����鳤��
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);
	//��ӡ�������
	cout << "����ǰ����� " << endl;
	HeroPrint(HeroArray, len);   //�������ǰ��Ϣ
	HeroSort( HeroArray, len);   //����ð������
	HeroPrint(HeroArray, len);   //����������Ϣ
	system("pause");
	return 0;
}

//˼��Ϊʲô�����滻ʱ��������д�� Ϊʲô��struct Hero temp ������ string temp?
#if 0
if (HeroArray[j].age > HeroArray[j + 1].age)
{
	string temp1 = HeroArray[j].name;
	HeroArray[j].name = HeroArray[j + 1].name;
	HeroArray[j + 1].name = temp1;

	int temp2 = HeroArray[j].age;
	HeroArray[j].age = HeroArray[j + 1].age;
	HeroArray[j + 1].sex = temp2;

	string temp3 = HeroArray[j].sex;
	HeroArray[j].sex = HeroArray[j + 1].sex;
	HeroArray[j + 1].sex = temp3;


}
#endif