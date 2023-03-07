////desc:函数重载的注意事项
////creator: 20210319
////input:
////output:
////debug:
//#include<iostream>
//using namespace std;
////函数重载的注意事项
////1.引用作为重载的条件
//void func(int &a) {
//	cout << "func(int &a )调用" << endl;
//}
//
//void func(const int &a) {
//	cout << "func(const int &a)调用" << endl;
//}
//
////2。函数重载碰到默认参数
//void func2(int a, int b = 10) {
//	cout << "func2(int a,int b=10)的调用" << endl;
//}
//void func2(int a) {
//	cout << "func2(int a)的调用" << endl;
//}
//int main() {
//	//1.
//	/*
//	int a = 10;
//	func(a);  //传入的是变量  //这里调用func(int &a)
//	*/
//
//	//func(10);  //传入的是常量   //这里调用func(const int &a)
//
//	//2.当函数重载遇到默认函数，出现二义性，尽量避免
//	//func2(10);
//	return  0;
//}
