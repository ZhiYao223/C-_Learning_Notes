#if 0
#include <iostream>
using namespace std;
//����

class Point
{
public:
	//����X,��ȡX����
	//����Y����ȡY����
	void setcoordinate(int x,int y)
	{
		m_X = x;
		m_Y = y;
	}
	void getcoordinate(int x, int y)
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	void setX(int X)   //����x
	{ 
		m_X = X;
	}
	int getX()      //��ȡX
	{
		return m_X; 
	}
	void setY(int Y)   //����Y
	{
		m_Y = Y;
	}
	int getY()   //��ȡY
	{
		return m_Y;
	}

private:
	int m_X;        //X����
	int m_Y;        //Y����
};

class Circle
{
	//���ð뾶����ȡ�뾶������Բ�ġ���ȡԲ��
public:
	void setR(int r)
	{
		m_R = r; 
	}
	int getR()
	{
		return m_R; 
	}
	void setCenter(Point Circle_Center)
	{
		m_Center = Circle_Center;
	}
	Point getCenter()
	{
		return m_Center;
	}

private:
	int m_R;
	Point m_Center;      //���ģ� �����п�������һ������Ϊ�����еĳ�Ա
};
//�жϵ��Բ�Ĺ�ϵ
void IsInCircle(Circle& c, Point& p) //����һ��Բ�͵�
{
	//��������֮�����ƽ��
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
				   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main61()
{
	//����Բ
	Circle c;  
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	IsInCircle(c, p);
	system("pause");
	return 0;
}
#endif