#if 0
#include<iostream>
using namespace std;


/*
	1.��ʼ��HT[1.....2n-1]: lch = rch = parent = 0;
	2.�����ʼn��Ҷ�ӽ�㣺��HT[1....n]��weightֵ��
	3.��������n-1�κϲ������β���n-1�����HT[i], i = n+1....2n-1:
	  a)��H[1..i-1]��ѡ����δ��ѡ����weight��С���������HT[s1]��HT[s2], s1��s2Ϊ������С����±ꣻ
	  b)�޸�HT[s1]��HT[s2]��parentֵ��HT[s1].parent=i; HT[s2].parent = i;
	  c)�޸��²�����HT[i]:
		HT[i].weight = HT[s1].weigth + HT[s2].weigth;
		HT[i].lch = s1; HT[i].rch = s2;
*/
typedef struct
{
	int weigth;
	int parent, lch, rch;
}HTNode, *HuffmanTree;

HuffmanTree H; //����һ������

//�����������----�������㷨
void CreateHuffmanTree(HuffmanTree HT, int n)
{
	if (n <= 1)	return;
	int m = 2 * n - 1;	//���鹲2n-1��Ԫ��
	HT = new HTNode[m + 1];	//0�ŵ�Ԫδʹ�ã�HT[m]��ʾ�����
	for (int i = 1; i < m;++i)
	{
		HT[i].lch = 0;
		HT[i].rch = 0;
		HT[i].parent = 0;
	}
	for (int i = 0; i <= n; ++i)
	{
		cin >> HT[i].weigth;	//����n��Ԫ�ص�weightֵ
	}
	//��ʼ�����������濪ʼ������������
	for (int i = n + 1; i <= m;i++)
	{
		Select(HT, i - 1, s1, s2);//��HT[k]��ѡ������˫����Ϊ0
		HT[s1].parent = i;
		HT[s2].parent = i; //��ʾ��F��ɾ��s1,s2
		HT[i].lch = s1; 
		HT[i].rch = s2;		//s1,s2�ֱ���Ϊi�����Һ���
		//i��ȨֵΪ���Һ���Ȩֵ֮��
		HT[i].weight = HT[s1].weight + HT[s2].weigth;
	}
}
#endif
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;
//�궨��
#define N 30
#define Max 2*N-1

//�����ṹ��
typedef struct
{
	double weigth;	//���Ȩֵ
	char s;	//��������ַ������磺�������������е�m,n,c
	//����ÿ���ṹ���еĹ�ϵ���������ӣ��Һ��ӡ�������潨��������
	int parent, lchild, rchild;
}HTNode, HuffmanTree[Max+1];//Ĭ�Ϲ���������Max+1�����

/*��������*/
void Select(HuffmanTree ht, int x, int* m1, int* m2); //�ҳ�ɭ�ּ�����Ȩ��ֵ��С������

void CreateHuffmanTree(HuffmanTree ht, int n);//������������

void HuffmanCoding(HuffmanTree ht, char** hc, int n);//��������

void PrintHuffmanCoding(HuffmanTree ht, char** hc, int index);//�����ӡ

void HuffmanDecoding(HuffmanTree ht, int n, char* pwd);//�����ɵĹ����������в�ѯĿ��

/*�ҳ�ɭ�ּ�����Ȩ��ֵ��С������*/
void Select(HuffmanTree ht, int x, int* m1, int* m2)
{
	//ѡ������С�������±�,��ʼ��Ϊ���������������С��������
	double min1 = 99999999;
	double min2 = 99999999;
	/* ht[j]���Ϻ��ƣ���Ȩֵ��min1���бȽϣ�ʹ��minʼ��Ϊ�Ѳ��ҵ�������С���Ǹ�*/
	for (int j = 1; j <= x;j++)
	{
		if (ht[j].weigth < min1 && ht[j].parent == 0)
		{
			min1 = ht[j].weigth;
			*m1 = j; 
		}
	}
	/*���Ѿ����ҵ���С����min1��ǰ���²��Ҳ�����min1����С��min2*/
	/*ht[k]���Ϻ��ƣ���min2�Ƚϣ���ht[k]С����֪��min2���Ҳ�Ϊmin1����ht[k]��Ȩֵ�滻min2*/
	for (int k = 1; k <= x; k++)
	{
		if (ht[k].weigth < min2 && k != *m1 && ht[k].parent == 0)
		{
			min2 = ht[k].weigth;
			*m2 = k; 
		}
	}
}

/*������������*/
void CreateHuffmanTree(HuffmanTree ht, int n)
{
	//nΪ�û�����������������ַ���������Ϊ���湹������������Ҷ�ӽ�����
	for (int i = 0; i <= 2 * n - 1; i++)
	{
		int m1, m2;
		Select(ht, i - 1, &m1, &m2);//����Select���������������������С����������ֵ��m1,m2
		//��n+1��ʼ�����µĸ�
		ht[i].weigth = ht[m1].weigth + ht[m2].weigth;//�����½��ht[i],ȨֵΪht[m1]��ht[m2]�ĺ�
		ht[i].lchild = m1;//�½��ht[i]������Ϊm1,��Ϊ��ĿҪ�����Һ����н�СֵΪ����
		ht[i].rchild = m2;//ͬ���ڶ�С�Ľ��Ϊ�¸��׽����Һ���
		ht[m1].parent = i;//��ֵ�����ht[m1]�ĸ��׽���ַΪi
		ht[m2].parent = i;//��ֵ�����ht[m2]�ĸ��׽���ַΪi
	}
}
/*������������*/
void HuffmanCoding(HuffmanTree ht, char** hc, int n)
{
	char* cd = (char*)malloc(n * sizeof(char)); //cd��ʱ��Ź���������
	cd[n - 1] = '\0';//��������Ϊ��
	int now = 1;//��ʱ���ڱ���Ľ��
	int p = 0;	//���ڱ�����ĸ��׽��
	int start;	//��ʱ�������������е�λ��
	int i = 0;
	/*���ѭ�����ڳ�ʼ����������Ҫ����ĵĽ��*/
	while (i < n)
	{
		start = n-1;//������Զ��������ָ��λ�ÿ�ʼ���
		now = n + 1;//����whileѭ�����ƽ�����������Ҳ�ڸ���
		p = ht[now].parent;//���׽���ʼ��Ϊnow���ĸ���λ��
		/*�ڲ�ѭ�����ڻ�ȡָ�����ı���*/
		while (p != 0)
		{
			start--;
			if (ht[p].lchild == now) //������丸�׽�������������ֵΪ0����Ϊ1
			{
				cd[start] = '0';
			}
			else
			{
				cd[start] = '1';
			}
			now = p; //��ʱ�Ľ��Ϊԭ���ĸ��׽��
			p = ht[now].parent;	//���¸��׽��
		}
		hc[i + 1] = (char*)malloc((n - start) * sizeof(char));//���ٴ�ű���������ڴ�
		strcpy(hc[i + 1],  &cd[start]);//��ָ�븴�Ʊ���
		i++; 
	}
}
/*�����ӡ*/
void PrintHuffmanCoding(HuffmanTree ht, char** hc, int index)
{
	//�ݹ����ǰ���������
	if (index >= 1)//�������Ҷ�ӽ�㣬��ô��������ַ��Լ�����
	{
		if (ht[index].lchild == 0 && ht[index].rchild == 0)
		{
			cout << ht[index].s << " " << hc[index] << endl; 
			return;
		}
		PrintHuffmanCoding(ht, hc, ht[index].lchild);//�ݹ飬�������ұ���
		PrintHuffmanCoding(ht, hc, ht[index].rchild);
	}
}

/*�����ɵĹ��������в���Ŀ��*/
void HuffmanDecoding(HuffmanTree ht, int n, char* pwd)
{
	//�Ӹ�����������0����������1����������ֱ������Ҷ�ӽ�㣬�ٴӸ�������
	cout << "original:";
	int len = strlen(pwd);//��ȡ�û��������ĳ���
	int i = 0;
	int node = 2 * n - 1; //��ʼ��Ϊ�Ӹ�������
	while (i < len)
	{
		if (pwd[i] == '0')
		{ //0 ��������
			node = ht[node].lchild;//���µ�ǰ���
			i++;
			if (ht[node].lchild == 0 && ht[node].rchild == 0)
			{//�������Ҷ�ӽ�㣬�����Ҷ�ӽ����ַ�
				cout << ht[node].s << endl;
				node = 2 * n - 1;//���´Ӹ�����������������
			}
		}
		if (pwd[i] == '1') //��1����������
		{
			node = ht[node].rchild;
			i++;
			if (ht[node].lchild == 0 && ht[node].rchild == 0)
			{
				cout << ht[node].s << endl; 
				node = 2 * n - 1; 
			}
		}
	}
}
//����������ʵ��
int main20()
{
	
/*
	HuffmanTree ht;
	int n = 0;	//�����ַ�����
	cin >> n; //�û����룬��ȡn
	getchar();

	char* hc[n + 1];
	for (int i = 1; i <= n;i++)
	{
		cout << ht[i].s << " " << ht[i].weigth << endl; 
		getchar();
		ht[i].lchild = 0;
		ht[i].rchild = 0;
		ht[i].parent = 0;
	}
	char pwd[9999];	//��Ҫ������ַ���
	cout<< "pwd: " << pwd << endl;//��ȡ�ַ���
	//����������
	CreateHuffmanTree(ht, n);
	//����
	HuffmanCoding(ht, hc, n);
	//ǰ�����
	PrintHuffmanCoding(ht, hc, 2 * n - 1);
	//����
	HuffmanDecoding(ht, n, pwd);
	*/
	system("pause");
	return 0;
}