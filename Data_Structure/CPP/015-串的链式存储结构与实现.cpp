/*
	BF�㷨��Index(S,T,pos)
	�������ĵ�pos���ַ���ģʽ���ĵ�һ���ַ��Ƚϡ�
	����ȣ���������ȽϺ����ַ�
	�����ȣ�����������һ�ַ���������ģʽ���ĵ�һ���ַ��Ƚϡ�
	ֱ��������һ�������Ӵ��ַ�������ģʽ����ȣ�����ֵΪS����Tƥ��������е�һ���ַ�����ţ�
	��ƥ��ɹ�������ƥ��ʧ�ܡ�
*/
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;


#if 0	//���Ŀ����洢�ṹ
#define CHUNKSIZE 80	//����Ĵ�С�����û�����
typedef struct Chunk
{
	char ch[CHUNKSIZE];
	struct Chunk* next;
}Chunk;

typedef struct
{
	Chunk* head, * tail;	//����ͷָ���βָ��
	int curlength;        //���ĵ�ǰ����
}LString;             //�ַ����Ŀ����ṹ
#endif 

#define MAXLEN 255

//���Ķ���˳��洢�ṹ
typedef struct
{
	char ch[MAXLEN + 1];	//�洢����һά����  MAXLEN��1��Ϊ�˴洢'\0'�������� �������±�Ϊ0��λ�ÿ�ʼ�洢��1���ַ�
	int  length;			//���ĵ�ǰ����
}SString;					//�ַ�����˳��ṹ

//�ѷ���洢��ʾ
typedef struct
{
	char* ch;	//����������洢����chָ�򴮵Ļ���ַ
	int length;	//���ĳ���
}HString;

void InitStr(SString &S, const char* str);						//��ʼ����
int  StrInsert(SString &S, int pos, SString T);	//��S����posλ��ǰ�����Ӵ�T
void StrPrint(SString& S);						//��ӡ�ַ���
bool StrCopy(SString& S, SString& T);			//���ַ���T���Ƶ���S
bool StrAssign(SString& S, const char* T);		// TΪָ�����ַ������ָ�룬�ó����ַ������޸�
int  StringLength(const char* str);				//�Զ�����ַ������ȼ��㺯��
int  StrLength(const SString &S);						//��S�ĳ���
int  StrCompare(SString& S1, SString &S2); //S1����S2����1��С�ڷ���0��
bool StrConcat(const SString& S1, const SString& S2, SString& T);//����S1��S2���ӳ��µĴ�T
bool SubStr(SString* Sub, int pos, int len, SString& S); //��Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ�
int  Index_BF(SString S, SString T, int pos);	//BF�㷨������ƥ���㷨
void Get_Next(SString T, int next[]);			//��ģʽ��T��next����
int  Index_KMP(SString S, SString T, int pos);			//KMP�㷨
bool StrEmpty(SString S);						//�ж��ַ����Ƿ�Ϊ��
bool StrDelete(SString& S, int pos, int len);//�Ӵ�S��ɾ����pos���ַ��𳤶�Ϊlen���Ӵ�

//��ʼ��: ��str�ַ���ת����SString����ʽ���������ַ�������S.length
void InitStr(SString &S, const char* str)
{
	StrAssign(S, str);
}
//�򵥵�ģʽƥ���㷨
int Index_BF(SString S, SString T, int pos)
{
	if (pos < 1 || pos > S.length)
	{
		cout << "��������" << endl;
		return -1;
	}
	int i = pos, j = 0;
	while (i <= S.length && j < T.length)
	{
		if (S.ch[i-1] == T.ch[j])  //�������Ӵ�����ƥ����һ���ַ�
		{
			++i; ++j;//�������Ӵ�ָ��������¿�ʼ��һ��ƥ��
		} 
		else { i = i - j + 1; j = 0; }//�������Ӵ�ָ��������¿�ʼ��һ��ƥ��
	}
	if (j >= T.length)
		return i - T.length; //����ƥ��ĵ�һ���ַ����±�
	else
		return -1;	//ģʽƥ��ʧ�ܣ�˵���ı����в�����ģʽ��������-1
}
//��ģʽ��T��next���� KMP�㷨��ϲ���������һλ����1
//next[j]����ֵ = ��jλ�ַ�ǰ��j-1λ�ַ���ɵ��Ӵ���ǰ��׺����غ��ַ���+1
void Get_Next(SString T, int next[])  //����2��ͬ��int* next; 
{
	//iָ���׺ĩβλ�á�jָ��ǰ׺ĩβλ�ú�һλ��
	//j�������Ű���i��i֮ǰ���Ӵ�������ǰ��׺����
	int j = 0, i = 1;
	next[1] = 0;
	while (i<T.length)
	{
		if (j == 0 || T.ch[j] == T.ch[i])
		{
			++i; ++j;         //next�����±�j��ָʧ���λ�ã����Դ�1��ʼj
			//��pi = pj; ��next[j+1] = next[j] + 1
			next[i] = j;
		}
		else
			j = next[j];//������j = next[j], ѭ������
	}
}
//�����Ӵ�T������S�е�pos���ַ����λ�ã��������ڣ���������-1�� 1<= pos <=StrLength(S)
//KMP�㷨:���ʾ�������ָ�벻���ݣ�ģʽ��ָ��ÿ�λ��ݵ������ǰ׺����һλ
//ģʽ���е�j��λ���������е�i��λ�÷�����ƥ��ʱ��Ӧ��ģʽ���е�next[j]��λ����������i��λ�����¿�ʼ�Ƚϡ�
int  Index_KMP(SString S, SString T, int pos)
{
	int i = pos, j = 1;			//i��������S�е�ǰλ���±꣬��posλ�ÿ�ʼ��ƥ�䣻j�����Ӵ�T�е�ǰλ���±�ֵ
	int next[MAXLEN + 1];		//����next����
	Get_Next(T, next);			//��ģʽ����next����
	while (i <= S.length && j <= T.length)
	{
		if (j == 0 || S.ch[i] == T.ch[j])		////������ĸ��ȣ���next[j]=0��j=next[j]=0��ʱ����
		{
			++i;
			++j;			//�����ȽϺ���ַ�
		}	
		else
			j = next[j];	//ģʽ�������ƶ���i����, ��next�����±긳ֵ��j�����������±�λ�ÿ�ʼƥ��
	}
	if (j > T.length)
		return i - T.length;	//ƥ��ɹ�
	else 
		return  -1;
}

//����һ����ֵ�����ַ�������chars�Ĵ�S
bool StrAssign(SString &S, const char *T)	// TΪָ�����ַ������ָ�룬�ó����ַ������޸�
{
	int len = 0;							//�����ַ�������
	while (T[len] != '\0' && len < MAXLEN)
	{
		S.ch[len] = T[len];  //�ַ�����ֵ
		len++;				//����+1
	}
	S.ch[len] = '\0';	//�ֶ�����ַ���������
	S.length = len;	//�����ַ�������, ��len��ֵ��ֵ��S�ĳ���
	return true;		//�����ɹ�
}
//�ַ�������
bool StrCopy(SString& S, SString& T)  //���ַ���T���Ƶ���S
{
	//���Ŀ�괮�Ŀռ��Ƿ��㹻
	if (T.length < MAXLEN)		//Ŀ�괮T�ĳ���С�ڴ�S����󳤶�
	{
		int len = 0;
		//��ֵ�ַ���������
		for (int len = 0; len <= T.length; len++)
		{
			S.ch[len] = T.ch[len];
		}
		S.length = T.length;	//�����ַ�������
	}
	return false;  //Ŀ�괮���ȴ���S�����ռ䣬�޷���ɸ���
}
//�ж��ַ����Ƿ�Ϊ��
bool  StrEmpty(SString S)
{
	if (S.length == 0)
	{
		return true; 
	}
	return false;
}

int StrLength(const SString &S)  //��S�ĳ���
{
	//int length = 0;
	//while (S.ch[length] != '\0')
	//{
	//	length++;
	//}
	return S.length; 
}

//�Զ�����ַ������ȼ��㺯��
int StringLength(const char* str)
{
	int length = 0;
	while (*str != '\0')
	{
		length++;
		str++;  
	}
	return length;
}

//��T����S1��S2���Ӷ��ɵ��´�T����δ�ضϣ��򷵻�true,���򷵻�false
bool StrConcat(const SString &S1, const SString &S2, SString& T)
{
	//������Ӻ�ĳ����Ƿ񳬹���T���������
	if (S1.length + S2.length > MAXLEN)
	{
		//�������������ƣ��ض����Ӳ�����false
		//strncpy(T.ch, S1.ch, MAXLEN);
		T.ch[MAXLEN] = '\0';		//ȷ���ַ�����'\0'��β
		T.length = MAXLEN;
		return false;  
	}
	// ���δ�ضϣ����������ַ���
	int i, j;
	for (i = 0; i < S1.length;i++)    //ѭ����S1���Ƶ���T��
	{
		T.ch[i] = S1.ch[i];
	}
	T.length = S1.length;
	for (j = 0; j < S2.length; j++)   //��ѭ������S2���Ƶ���T��
	{
		T.ch[T.length] = S2.ch[j];
		++T.length;
	}
	T.length = S1.length + S2.length;
	return true;
}

bool SubStr(SString *Sub, int pos, int len, SString &S) //��Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ�
{
	if ((pos < 1) || (pos > S.length) || (len < 0) || (len > S.length - pos + 1))
	{
		//��������
		return false; 
	}
	int i = 0;
	while (i < len)
	{
		Sub->ch[i] = S.ch[pos - 1];//����S�е�pos���ַ�����Sub��
		++i;
		++pos; 
	}
	Sub->length = len;   //Sub���յ��Ӵ�����Ϊlen
	return true;  
}
//�ַ����Ƚϣ��Ƚ��ַ�����С
int StrCompare(SString& S1, SString &S2) //S1����S2����1��С�ڷ���0��
{
	int i = 0;
	if (S1.length != S2.length)		//��S1��S2�ַ������Ȳ��ȣ��Ƚ�������
	{
		cout << "�ַ������Ȳ���ȣ��Ƚ�������";
		return -1;		//�˳�����
	}
	while ((S1.ch[i] == S2.ch[i]) && (S1.ch[i] != '\0') && (S2.ch[i] != '\0'))
	{
		i++; //�����ַ���
	}
	return (S1.ch[i] > S2.ch[i]); //S1�󷵻�1  S1С����0
}
//�ڴ���S�ĵ�pos���ַ�֮ǰ���봮 T   ��1��Ԫ���������±�Ϊ0��Ԫ��
//���뺯�������б��в�ʹ������SString &S ���������������ԭ�ַ���S4�Ͳ��ᱻ�޸�, ���ǳ���Ҫ������
int StrInsert(SString &S, int pos, SString T)	
{
	//pos=1��ʾ��S����ͷ���룬pos=S.length+1��ʾ��S��ĩβ���룬�����Ԫ�ص���һλ֮ǰ����
	if (pos < 1 || (pos > S.length+1)) 
	{
		return false;	//����λ�ò��Ϸ�
	}
	if (S.length + T.length > MAXLEN)
	{
		return false;	//����󴮵ĳ��ȳ����������MAXLEN
	}
	//�������һ��Ԫ�ص��±�ӦΪ S.length-1������� S.length ���ַ���
	//��Ӧ�أ��ڲ������ʱ����� pos > S.length + 1�����ʾ����λ�ò��Ϸ���
	for (int i = (S.length - 1); i >= pos - 1;i--)  
	{
		S.ch[i + T.length] = S.ch[i];//�����е�pos��֮����ַ�����T.length��λ�ã��ڳ��ռ�
	}
	for (int j = 0; j < T.length; j++)
	{
		S.ch[pos-1+j] = T.ch[j];  //����T���봮S�ڳ����ĳ���ΪT.length�Ŀռ���
	}
	S.length = S.length + T.length;//���²���T��S���ĳ���
	return true;
}
//�Ӵ�S��ɾ����pos���ַ��𳤶�Ϊlen���Ӵ�
bool StrDelete(SString& S, int pos, int len)
{
	if (pos<1 || pos>(S.length - len + 1))   //pos<1,����ɾ��λ��pos�봮β����len��Ԫ��
	{
		return false;	
	}
	for (int i = 0; i <= len; i++) //��pos���ַ����±�Ϊpos-1 �Դ����ơ�
	{
		S.ch[pos - 1 + i] = S.ch[pos - 1 + len + i];  
	}
	S.length = S.length - len; //����S�ĳ��ȣ�����S.length����ַ����ᱻʡ��
	return true;  //ɾ���ɹ�
}
//��ӡ�ַ���
void StrPrint(SString &S)
{
	if (!StrEmpty(S))			//�ַ�����Ϊ��
	{
		for (int i = 0; i < S.length;i++)   //�����ַ���
		{
			cout << S.ch[i];
		}
		return;
	}
	cout << "�ַ���Ϊ�գ�";
	return;
}
int main15()
{
	SString S;
	SString T;
	SString R;
	SString S1;
	SString S2;
	SString S3;
	SString S4;
	SString S5;
	SString S6;

	char ch[] = { "hello" };
	char ch1[] = { "zello, world" };
	char ch2[] = { "hello, world" };

	InitStr(S, "hello zhiyao");
	InitStr(T, "Hello Zhiyao");
	InitStr(S1, ch1);	
	InitStr(S2, ch2);
	InitStr(S3, "zhiyao,");
	InitStr(S4, "Hello,");
	InitStr(S5, "How are you ? ");

	cout << "��S:";
	StrPrint(S);
	cout << endl << "��T:";
	StrPrint(T);
	cout << endl; 

	cout << "��S1�ĳ���Ϊ��" << S1.length << endl;
	cout << "��S2�ĳ���Ϊ��" << S2.length << endl;
	cout << "S1��S2�ַ����ȽϽ����";
	cout << ((StrCompare(S1, S2))==1)?  "S1����S2" : ((StrCompare(S1, S2) == -1) ? "���߳��Ȳ��ȣ�" : "S1С��S2"); cout << endl;
	cout << "��S:";
	StrPrint(S);
	cout << "�ĳ���Ϊ��" << S.length << endl;

	cout << "�ڴ�S4�ĵ��߸�λ��֮ǰ����S3:";
	cout << endl << "����ǰS4Ϊ:";		   StrPrint(S4);
	cout << endl << "�����Ӵ�S3Ϊ��";		   StrPrint(S3);
	StrInsert(S4, 7, S3);         //���뺯�������б��в�ʹ������&���������������ԭ�ַ���S4�Ͳ��ᱻ�޸�,���ǳ���Ҫ������
	cout << endl << "�����S4Ϊ��";         StrPrint(S4);

	cout << endl << "S4Ϊ:";		   StrPrint(S4);
	cout << endl << "S3Ϊ��";	   StrPrint(S3);
	StrConcat(S3, S4, R);
	cout << endl << "����S4�봮S3���ӳ��´�R��";
	StrPrint(R);

	cout << endl << "S5Ϊ��";	StrPrint(S5);
	StrCopy(S6, S5);
	cout << endl << "��S5���Ƶ�S6�Ľ��,S6Ϊ��";
	StrPrint(S6);

	cout << endl << "����S3����S6��ͷ��";
	StrInsert(S6, 1, S3);
	cout << endl << "�����S6Ϊ:";
	StrPrint(S6);

	cout << endl << "��Sub���ش�S3�ĵ�1���ַ��𳤶�Ϊ6���Ӵ�:";
	SubStr(&S3, 8, 3, S6);
	StrPrint(S3);

	cout << endl;
	SString S7;
	cout << "��S6Ϊ:";
	StrPrint(S6);
	InitStr(S7, "How");
	cout << endl;
	cout << "��S6�ĳ���Ϊ��" << S6.length << endl;
	cout << "��S7�ĳ���Ϊ��" << S7.length << endl;
	cout <<"����ƥ�������"<< Index_BF(S6, S7, 1) << endl;


	SString S8;
	SString S9;
	InitStr(S8, "abcabaaaabaabcac");
	InitStr(S9, "abaabcac");
	StrPrint(S8);  cout << endl;
	StrPrint(S9);  cout << endl;
	cout << "��S8�ĳ���Ϊ��" << S8.length << endl;
	cout << "��S9�ĳ���Ϊ��" << S9.length << endl;
	cout << "KMP�㷨�����" << Index_KMP(S8, S9, 1) << endl;
	cout << endl;
	system("pause");
	return  0;
}




