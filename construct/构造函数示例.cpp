//构造函数示例
//get函数用来获取属性值，不改变属性值，
//set函数用来建立属性，
//一般情况下都是用set函数初始化，然后用get函数获取所需要的值，从而实现c++的封装性。
//
//#include <iostream>
//using namespace std;
//class line {
//public:
//	void setlength(double len);
//	double getlength(void);
//	line();  // 这是构造函数
//private:
//	double length;
//};
//// 成员函数定义，包括构造函数
//line::line(void) {
//	cout << "对象创建" << endl;
//}
//void line::setlength(double len) {   //set函数初始化
//	length = len;
//}
//double line::getlength(void) {       //get函数获取所需要的值
//	return length;
//}
//// 程序的主函数
//int main() {
//	line line;
//	// 设置长度
//	line.setlength(6.0);
//	cout << "length of line : " << line.getlength() << endl;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//class line {
//public:
//	void setlength(double len);
//	double getlength(void);
//	line(double len);  //这是构造函数
//
//private:
//	double length;
//};
//
//
////成员函数定义，包括构造函数
//line::line(double len) {
//	cout << "object is being created,length= " << len << endl;
//	length = len;
//}
//
//void line::setlength(double len) {
//	length = len;
//}
//
//double line::getlength(void) {
//	return length;
//}
//int main() {
//	line line(10.0);
//	cout << "length of line :" << line.getlength() << endl;
//	line.setlength(6.0);
//	cout << "length of line :" << line.getlength() << endl;
//	return 0;
//}