////desc:普通函数和模板函数调用规则
////creator:  20210328
//#include<iostream>
//using namespace std;
//
//void myPrint(int a, int b) {
//	cout << "普通函数调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b) {
//	cout << "模板函数调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b,T c) {
//	cout << "三个参数的模板函数调用" << endl;
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	int c =29;
//	//myPrint(a, b); //优先普通函数
//	 //myPrint<>(a, b，c);  //强制调用函数模板
//
//	//如果函数模板产生更好的匹配，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}
//int main() {
//	test01();
//	return 0;
//}