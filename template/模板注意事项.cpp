//#include<iostream>
//using namespace std;
//template <class T>
//void mySwap(T&a, T&b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	char c = 'c ';
//	//mySwap(a,c); //1.自动类型推导，必须推导出一致的数据类型T，才可以使用
//}
//
////2.必须给定数据类型，才可以使用模板
//template <class T>
//void func() {
//	cout << "func调用" << endl;
//}
//void test02() {
//	//func();
//	func<int>();
//}
//
//int main() {
//
//	test02();
//	return 0;
//}