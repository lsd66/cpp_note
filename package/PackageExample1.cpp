////desc:封装的意义 
////creator: 20210319
//#include<iostream>
//using namespace std;
////设计一个圆类，求圆的周长
//
//constexpr auto PI = 3.14;
////class代表设计一个类
//class Circle {
//	//访问权限
//public:
//
//	//属性
//	int r;//半径
//
//	//行为 一般是函数
//	//获取圆的周长
//	double GetCircum() {
//		return 2 * PI*r;
//	}
//};
//
//int main() {
//	//通过一个圆类创建一个具体的圆(对象)
//	//实例化:通过一个类创建一个对象的过程
//	Circle c1;
//	//给元对象的属性进行赋值
//	c1.r = 2;
//	
//	cout << "圆的周长为:" << c1.GetCircum()<< endl;
//	
//	return 0;
//}