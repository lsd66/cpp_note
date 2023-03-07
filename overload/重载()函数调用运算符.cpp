////desc:重载函数调用运算符()
////creator:  20210322
//#include<iostream>
//using namespace std;
//class MyPrint {
//public:
//	//重载()
//	void operator()(string str) {
//		cout << "str" << endl;
//	}
//};
//class MyAdd {
//public:
//	int operator()(int a,int b) {
//		return a + b;
//	}
//};
//
//void test01() {
//	MyPrint myprint;
//	myprint("hello world"); //使用了函数调用运算符类似函数调用的方式，myprint("hello world")被称为仿函数
//
//	MyAdd myadd;
//	myadd(10, 10);
//
//	MyAdd();//匿名对象
//	MyAdd()(10,10); //匿名函数对象
//	//下面这个调用了重载的函数运算符(),被称为仿函数
//	cout << MyAdd()(10,10) << endl;  
//	
//}
//int main() {
//	return 0;
//}