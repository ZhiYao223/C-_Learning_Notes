#pragma once
#include <iostream>
using namespace std;
#include "point.h"
class Circle
{
	//���ð뾶����ȡ�뾶������Բ�ġ���ȡԲ��
public:
	void setR(int r);

		int getR();

		void setCenter(Point Circle_Center);

		Point getCenter();


private:
	int m_R;
	Point m_Center;      //���ģ� �����п�������һ������Ϊ�����еĳ�Ա
};