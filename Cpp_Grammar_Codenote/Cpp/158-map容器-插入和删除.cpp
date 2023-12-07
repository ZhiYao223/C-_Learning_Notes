/*
	���������� ma�������в����ɾ������
	����ԭ��:
		insert(elem);		//�������в���Ԫ�ء�
		clear();			//�������Ԫ��
		erase(pos);			//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
		erase(beg,end);		//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
		erase(key);			//ɾ��������ֵΪkev��Ԫ��	
		
*/

#include<iostream>
#include<map>
using namespace std;

void printMap158(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << "value = " << (*it).second << endl; 
	}
	cout << endl;
}

void test158()
{
	map<int, int>m;      //����ʱ�ᰴkeyֵ���������е�Ԫ��
	//��һ��
	m.insert(pair<int, int>(1, 4));
	//�ڶ���  �Ƽ�
	m.insert(make_pair(2, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(3, 20));
	//������
	m.insert(map<int, int>::value_type(5, 30));
	//������
	m[4] = 40;//[]�����飬 ��;����������key���ʵ�value  cout<<m[4]<<endl; 
	printMap158(m);
	
	//ɾ��
	m.erase(m.begin());
	printMap158(m);

	//ɾ������Ԫ��
	m.erase(3);  //��keyɾ��Ԫ��
	printMap158(m);

	//ɾ������
	//m.erase(m.begin(), m.end());
	printMap158(m);
	m.clear();   //���
}

int main158()
{
	test158();
	system("pause");
	return 0;
}