#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"
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

int main62()
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