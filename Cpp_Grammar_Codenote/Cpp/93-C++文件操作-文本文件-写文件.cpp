/*
��������ʱ���������ݶ�������ʱ���ݣ�����һ�����н������ᱻ�ͷ�
ͨ���ļ����Խ����ݳ־û�
c++���ļ�������Ҫ����ͷ�ļ�<fstream>

�ļ����ͷ�Ϊ���֣�
1���ı��ļ����ļ����ı���ASCII����ʽ�洢�ڼ������
2���������ļ����ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������

�����ļ���������
1��ofstream :д����
2��ifstream :������
3��fstream : ��д����
д�ļ��������£�
1������ͷ�ļ�#include<fstream>
2������������ofstream ofs;
3�����ļ� ofs.open("�ļ�·��",�򿪷�ʽ);
4��д���� ofs<<"д�������";
5���ر��ļ� ofs.close();

�ļ��򿪷�ʽ��
ios::in Ϊ���ļ������ļ�
ios::out Ϊд�ļ������ļ�
ios::ate ��ʼλ�ã��ļ�β
ios::app ׷�ӷ�ʽд�ļ�
ios::trunc ����ļ�������ɾ�����ڴ���
ios::binary �����Ʒ�ʽ 

�ļ��򿪷�ʽ�������ʹ�ã�����|������
�ö����Ʒ�ʽд�ļ���ios::binary | ios::out
*/
#include <iostream>
using namespace std;
#include <fstream>
//�ı��ļ�  д�ļ�
void test93()
{
	//1.����ͷ�ļ�

	//2.����������
	ofstream ofs;  //ofs������������
	//3.ָ���򿪷�ʽ
	ofs.open("D:/Learn Zone/C++ files/Practical_Grammar/Practical_Grammar/Produce_file/test93.txt", ios::out);
	//4.д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
	//5.�ر��ļ�
	ofs.close();

}

int main93()
{
	test93();
	system("pause");
	return 0;
}