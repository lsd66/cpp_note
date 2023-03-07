////desc:引用的本质是一个指针常量(指向不可以改，指向的值可以改)
//#include<iostream>
//using namespace std;
////ref为引用，自动转为 int *const ref=&a
//void func(int & ref) {
//	//ref是引用  自动转为* ref=100
//	ref = 100;
//}
//int main() {
//	int a = 10;
//	//自动转换为int * const ref=&a;
//	int &ref = a;
//	//自动转为 *ref=20;
//	ref = 20;
//	return 0;
//}