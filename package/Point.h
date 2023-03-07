#pragma once //防止被重复包含
//desc:点类的声明
#include<iostream>
using namespace std;
//点类
class Point {
public:
	//设置x坐标
	void SetX(int x);
	//返回x坐标
	int GetX();

	//设置y坐标
	void SetY(int y);
	//返回y坐标
	int GetY();
private:
	int p_X; //x坐标
	int p_Y; //y坐标
};

