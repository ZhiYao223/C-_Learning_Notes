#include "point.h"

//����    ֻ���º�����ʵ�֣�������ǰ����Point::����������һ��Point�������µĺ���
void Point::setcoordinate(int x, int y)
{
	m_X = x;
	m_Y = y;
}
void Point::getcoordinate(int x, int y)
{
	cout << "(" << x << "," << y << ")" << endl;
}
void Point::setX(int X)   //����x          
{
	m_X = X;
}
int Point::getX()      //��ȡX
{
	return m_X;
}
void Point::setY(int Y)   //����Y
{
	m_Y = Y;
}
int Point::getY()   //��ȡY
{
	return m_Y;
}
