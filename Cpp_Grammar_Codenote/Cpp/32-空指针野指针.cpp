#if 0
//��ָ��
#include <iostream>
using namespace std;

int main()
{
	//��ָ��:ָ�����ָ���ڴ��б��Ϊ0�Ŀռ䣬����������ʼ��ָ�����
	int* P = NULL;
	//��ָ�벻�ܽ��з���
	//0-255֮����ڴ�����ϵͳռ�õģ�����û����ܷ���
	//*p = 100;     //error ����Ȩ�޳�ͻ
	cout << *p << endl;  //error  ֻҪ��*p���֣�������


	system("pause");
	return 0;
}
#endif 

//Ұָ��
#include <iostream>
using namespace std;
int main32()
{
	//Ұָ��
	//�ڳ�����Ҫ��������Ұָ�룬Ұָ��ָ��һ��δ֪�ķǷ��ռ䣬�ÿռ�δ��ϵͳ���룬����Ȩ�޶�����ж�д����
	//��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ���ʣ���������
	int* p = (int *)0x1100;
	cout << *p << endl;

	system("pause");
	return 0;

}