/*
�Զ����Ʒ�ʽ���ļ����ж�д����
�򿪷�ʽҪָ��Ϊios::binary

�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write
����ԭ�ͣ� ostream& write(const char * buffer, int len);
�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���
*/
#include <iostream>
#include <fstream>
#include <string>



using namespace std; 
//�������ļ� д�ļ�
class Person
{
public:
	char m_Name[64];//����
	int m_Age; //����
};

void test95()
{
	ofstream ofs; //����������
	ofs.open("D:/Learn Zone/C++ files/Practical_Grammar/Practical_Grammar/Produce_file/person.txt", ios::out | ios::binary); //��������ʽд�ļ�������
	//���߽������кϲ� ofstream ofs("Produce_file/Person.txt", ios::out | ios::binary);
	Person p = { "����", 18 };
	ofs.write((const char*)&p, sizeof(Person)); //д�ļ�����ȡַ����ǿתΪ const char*��

}

int main95()
{
	test95();
	system("pause");
	return 0;
}
