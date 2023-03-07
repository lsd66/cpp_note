////desc:利用类来判断点和圆的关系
////设计一个圆类（circle)和一个点类，计算点和圆的关系
////creator: 20210319
//#include<iostream>
//using namespace std;
////点类
//class Point {
//public:
//	//设置x坐标
//	void SetX(int x){
//		p_X = x;
//	}
//	//返回x坐标
//	int GetX() {
//		return p_X;
//	}
//
//	//设置y坐标
//	void SetY(int y) {
//		p_Y = y;
//	}
//	//返回y坐标
//	int GetY() {
//		return p_Y;
//	}
//private:
//	int p_X; //x坐标
//	int p_Y; //y坐标
//};
//
////圆类
//class Circle {
//public:
//	//设置半径
//	void setCircleR(int r) {
//		m_R = r;
//	}
//	//返回半径
//	int GetCircleR() {
//		return m_R;
//	}
//
//	//设置圆心,圆心是一个点 需要用到点类，点类里就有坐标
//	void setCircleCenter(Point center) {
//		m_Center = center;
//	}
//	//返回圆心
//	Point getCircleCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;//半径
//	Point m_Center;//圆心 需要用到点类
//
//};
//
////判断点和圆之间的关系
//void JudgePointAndCircle(Point &p,Circle &c) {
//	//计算点到圆心的距离 平方
//	int distance = (p.GetX() - c.getCircleCenter().GetX())*(p.GetX() - c.getCircleCenter().GetX()) + (p.GetY() - c.getCircleCenter().GetY())*(p.GetY() - c.getCircleCenter().GetY());
//	//计算半径的平方
//	int rsquare= (c.GetCircleR())*(c.GetCircleR());
//	//比较
//	if (distance > rsquare) {
//		cout << "点在圆外" << endl;
//	}
//	else if(distance == rsquare){
//		cout << "点在圆上" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//int main() {
//	//创建点
//	Point p;
//	p.SetX(0);
//	p.SetY(2);
//
//	//创建圆心的点
//	Point center;
//	center.SetX(0);
//	center.SetY(0);
//	Circle c;
//	c.setCircleCenter(center);
//    //设置半径
//	c.setCircleR(1);
//
//	//调用判断函数、
//	JudgePointAndCircle(p,c);
//
//	return 0;
//}








