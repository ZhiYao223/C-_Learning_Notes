#include <iostream>
using namespace std;
#include <string>
//ѧ���ṹ�嶨��
struct student
{
	string name;
	int age;
	int score;
};

//constʹ�ó�������const
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void printStudent(const student * s)  //����ָ�룬��������и�ֵ�޸ģ��򱨴�
{
									  //stu->age = 100;//����ʧ�ܣ���Ϊ����const����
	//��û�м�const��ͨ����ַ���ݣ�����ָ������޸�main�е�ʵ�α�����ֵ���ǲ���ȫ�Ĳ�����Ϊ�˱��ⷢ���޸ģ���const
	//s->age = 150;  
	//����const��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������ " << s->name << " ���䣺" << s->age << " ������ " << s -> score << endl;

}

int main42()
{
	//�����ṹ�����
	struct student s = { "����", 15, 70 };
	//ͨ��������ӡ�ṹ�����

	printStudent(&s);   //ֵ���ݣ��ṹ��ѧ�������ĵ�ַ���ݸ�ָ�����p

	cout << "main������������Ϊ��" << s.age << endl;   
	system("pause");
	return 0;
}