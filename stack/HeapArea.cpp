//#include<iostream>
//using namespace std;
//int * func() {
//	//为了解决栈区（返回局部变量的地址)二次操作同一块内存的问题，使用堆区进行处理
//	//利用new关键字，可以将数据开辟到堆区
//	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
//	int *p=new int(10);  //new关键字返回的是内存地址，用指针进行接收，指针存放地址，10代表创建一个变量10
//	return p;  //返回指针
//	
//	/*
//	int a = 10;
//	return &a;
//	*/
//}
//int main() {
//	int *p = func();
//	cout << "*p:" << *p<<endl;
//	return 0;
//}