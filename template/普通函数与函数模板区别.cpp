////desc:普通函数和函数模板区别
////creator: 
//#include<iostream>
//using namespace std;
//int add(int a,int b) {
//	return a + b;
//}
//template<class T>
//T addNumber(T a, T b) {
//	return a + b;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	cout << add(a, c) << endl; //隐式类型转换，a是97.c为99
//	
//	
//	addNumber(a, b);
//	cout << addNumber(a, b) << endl;
//	//addNumber(a,c); //自动类型推导
//
//	//显示指定类型
//	cout << addNumber<int>(a, c) << endl;
//
//}
//
//int main() {
//	test01();
//	return 0;
//}