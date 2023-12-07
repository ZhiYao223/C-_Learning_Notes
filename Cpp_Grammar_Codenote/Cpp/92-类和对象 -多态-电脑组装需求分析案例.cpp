/*

*/
#include <iostream>
using namespace std;
//����ͬ�����
//����CPU��
class CPU
{
public:
	virtual void calculate() = 0;

};
//�����Կ���
class VideCard
{
public:
	virtual void display() = 0;

};

//�����ڴ�����
class Memory
{
public:
	virtual void storage() = 0;

};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem; 
	}
	//�ṩ�����ĺ���,������������������ýӿ�
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//�ṩ���������� �ͷ�3���������
	~Computer()
	{
		if (m_cpu != NULL)  //�ͷ�CPU���
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)  //�ͷ��Կ�
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)  //�ͷ��ڴ���
		{
			delete m_mem;
			m_mem = NULL;
		}
		
	}
private:
	CPU* m_cpu; //CPU�����ָ��
	VideCard* m_vc; //�Կ����ָ��
	Memory* m_mem; //�ڴ������ָ��
};
//���峧��
class IntelCpu :public CPU 
{
public:
	virtual void calculate()
	{
		cout << "Intel��CPU��ʼ�����ˣ�" << endl;

	}
};
class IntelVideoCard :public VideCard
{
public:
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;

	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;

	}
};


//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;

	}
};
class LenovoVideoCard :public VideCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;

	}
};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;

	}
};
void test92()
{
	//��һ̨�������
	CPU *intelCpu = new IntelCpu;
	VideCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "-----------------------------------------------" << endl; 
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	//��2̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new IntelMemory);
	computer2->work();
	delete computer2;

	cout << "-----------------------------------------------" << endl;
	cout << "����̨���Կ�ʼ����" << endl;
	//��3̨����
	Computer* computer3 = new Computer(new LenovoCPU, new LenovoVideoCard, new IntelMemory);
	computer3->work();
	delete computer3;
}
int main92()
{
	test92();
	system("pause");
	return 0;
}