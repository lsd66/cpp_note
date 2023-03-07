////desc:模板初识
//////如果涉及到一个交换函数，对于不同的数据类型，如果重复写的话太麻烦
//#include<iostream>
//using namespace std;
//template<typename T>
//void MySwap(T &a, T&b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	cout << "a: " << a << " b:" << b << endl;
//	//利用函数模板交换
//	//1.自动类型推导
//	//MySwap(a, b);
//	//2.显示指定类型
//	MySwap<int>(a, b);
//	
//	cout << "a:" << a << "b:" << b << endl;
//}
//int main() {	
//	test01();
//	return 0;
//}