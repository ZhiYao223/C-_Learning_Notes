#pragma once   //��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;

//����     
//ֻ��Ҫ��Ա��������Ա������������ɾ��������ʵ�֣��ӷֺ�
class Point
{
public:
	//����X,��ȡX����
	//����Y����ȡY����
	void setcoordinate(int x, int y);
	//{
	//	m_X = x;
	//	m_Y = y;
	//}
	void getcoordinate(int x, int y);
	//{
	//	cout << "(" << x << "," << y << ")" << endl;
	//}
	void setX(int X);   //����x
	//{
	//	m_X = X;
	//}
	int getX();      //��ȡX
	//{
	//	return m_X;
	//}
	void setY(int Y);   //����Y
	//{
	//	m_Y = Y;
	//}
	int getY();   //��ȡY
	//{
	//	return m_Y;
	//}

private:
	int m_X;        //X����
	int m_Y;        //Y����
};
