//圆类的实现
#include "Point.h"
#include"Circle.h" 

	//设置半径
	void Circle::setCircleR(int r) {
		m_R = r;
	}
	//返回半径
	int Circle::GetCircleR() {
		return m_R;
	}

	//设置圆心,圆心是一个点 需要用到点类，点类里就有坐标
	void Circle::setCircleCenter(Point center) {
		m_Center = center;
	}
	//返回圆心
	Point Circle::getCircleCenter() {
		return m_Center;
	}