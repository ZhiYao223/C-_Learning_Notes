/*
	�����ڽӾ����ʾ������������
	������ --->����ͼ������ͼ��������

	������ --->����ͼ---->1.��ʼ���ڽӾ���ʱ��w��Ϊ0	2.�����ڽӾ���ʱ��wΪ1
	������ --->������---->1.�ڽӾ����ǷǶԳƾ���		2.��ΪG.arcs[i][j]��ֵ	3.����ΪG.arcs[j][i]��ֵ

	�㷨˼�룺
	1.�����ܶ��������ܱ���
	2.������������Ϣ���붥���
	3.��ʼ���ڽӾ���ʹÿ��Ȩֵ��ʼ��Ϊ����ֵ
	4.�����ڽӾ���

	�ڽӾ�����ʲô�ô���
	1.ֱ�ۡ��򵥡�����⣬�ռ临�Ӷ�O(n^2)
	2.����������һ�Զ�����Ƿ���ڱ�
	3.��������һ���������"�ڽӵ�"(�б�ֱ�������Ķ���)
	4.���������һ�����"��"(�Ӹõ�����ı���Ϊ���ȡ�ָ��õ�ı���Ϊ���)
	����ͼ����Ӧ�л��з�0Ԫ�صĸ���
	����ͼ����Ӧ�з�0Ԫ�صĸ�����"����"����Ӧ�з�0Ԫ�صĸ�����"���"

	�ڽӾ�����ʲôȱ�㣿
	1.���ڹ̶���С�����������Ӻ�ɾ������
	2.�˷ѿռ�-----��ϡ��ͼ����ܶ���ߺ��٣��д�����ЧԪ��
				  �Գ���ͼ(�ر�����ȫͼ)���Ǻܺ����
	3.�˷�ʱ�䣬ͳ��ϡ��ͼ��һ���ж������ߣ��ռ临�Ӷ�O(n^2)
*/

#include<iostream>
using namespace std;

//�ڽӾ���Ĵ洢��ʾ������������ֱ�洢�������ڽӾ���
#define Maxlnt 32767		//��ʾ����ֵ�� �������
#define MVNum  100			//��󶥵���
typedef char VerTexType;	//�趥�����������Ϊ�ַ���
typedef int ArcType;		//����ߵ�Ȩֵ����Ϊ����

typedef struct {
	VerTexType vexs[MVNum];		//�����
	ArcType arcs[MVNum][MVNum];	//�ڽӾ���
	int vexnum, arcnum;			//ͼ�ĵ�ǰ�����ͱ���
}AMGraph;	//Adjacency Matrix Graph

int LocateVex(AMGraph G, VerTexType u); //ͼG�в��Ҷ���u�������򷵻ض�����е��±꣬���򷵻�-1
bool CreateUDN(AMGraph& G);		//�����ڽӾ����ʾ������������

//�����ڽӾ����ʾ������������
bool CreateUDN(AMGraph& G)
{
	int v1, v2, w;
	//�����ڽӾ����ʾ��������������G
	cin >> G.vexnum >> G.arcnum;	//�����ܶ��������ܱ���
	for (int i = 0; i < G.vexnum; ++i){
		cin >> G.vexs[i];	//������������Ϣ
	}
	for (int i = 0; i <G.vexnum; ++i) {
		for (int j = 0; i < G.vexnum; ++j) {
			G.arcs[i][j] = Maxlnt;		//�ߵ�Ȩֵ����Ϊ����ֵ
			for (int k = 0; k < G.vexnum;++k) {
				cin >> v1 >> v2 >> w;	//����һ�����������Ķ��㼰�ߵ�Ȩֵ
				i = LocateVex(G, v1);
				j = LocateVex(G, v2);	//ȥ��v1��v2��G�е�λ��
				G.arcs[i][j] = w;		//��<v1, v2>��Ȩֵ��Ϊw
				G.arcs[j][i] = G.arcs[i][j];	//����������ͼ����<v1,v2>�ĶԳƱ�<v2, v1>��Ȩֵ��Ϊw
			}	
		}
	}
	return true;
}//CreateUDN

//ͼG�в��Ҷ���u�������򷵻ض�����е��±꣬���򷵻�-1
int LocateVex(AMGraph G, VerTexType u)
{
	for (int i = 0; i < G.vexnum; ++i) {
		if (u == G.vexs[i]) {
			return i;   
		}
	}
	return -1;
}

int main021()
{
	system("pause");
	return 0;
}
















