/*
		���:
		map������Ԫ�ض���pair
		pair�е�һ��Ԫ��Ϊkey (��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue (ʵֵ)
		����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

		����:
		map/multimap���ڹ���ʽ�����ײ�ṹ���ö�����ʵ��
		�ŵ�:���Ը���keyֵ�����ҵ�valueֵ

		map��multimap����:
		map���������������ظ�keyֵԪ��
		multimap�������������ظ�keyֵԪ��

		map����͸�ֵ
		����������
		���죺
		map<T1,T2> mp;   //mapĬ�Ϲ��캯��
		map<const map &mp); //�������캯��
		��ֵ��
		map& operator = (const map &mp); //���صȺŲ�����

*/

#include<iostream>
#include<map>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "	value = " << (*it).second << endl;
	}
	cout << endl;
}

void test156()
{
	map<int, int> m;

	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(1, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 10));

	printMap(m);   //����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����

	//��������
	map<int, int>m1(m);//�������캯��������m�еļ�ֵ�Ե�m1�С����ԣ�m1���ڰ�����m��ͬ������
	printMap(m1);

	//��ֵ
	map<int, int>m2;
	m2 = m1;
	printMap(m2);
}


int main156()
{
	test156();
	system("pause");
	return 0;
}



