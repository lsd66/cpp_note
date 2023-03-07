#pragma once //防止被重复包含
#include<iostream>
#include"Point.h"
using namespace std;
//圆类的声明
class Circle {
public:
	//设置半径
	void setCircleR(int r);
	//返回半径
	int GetCircleR();


	//设置圆心,圆心是一个点 需要用到点类，点类里就有坐标
	void setCircleCenter(Point center);
	//返回圆心
	Point getCircleCenter();
private:
	int m_R;//半径
	Point m_Center;//圆心 需要用到点类

};
