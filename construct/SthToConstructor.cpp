////desc:复习构造函数
////构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用
/////析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作
//
////构造函数：类名(){}
////1.构造函数，没有返回值也不写void
////2.构造函数与类名相同
////3.构造函数可以有参数，因此也可以发生重载
////4.程序在调用对象时候会自动调用构造函数，无须手动调用，而且只会调用一次
//
/////析构函数语法 ~类名(){}
////1.析构函数，没有返回值也不写void
////2.函数名称与类名相同，在名称前加上符号 -
////3.析构函数不可以有参数，因此不可以发生重载
////4.程序在对象销毁前会自动调用析构，无须手动调用，而且只会调用一次
//
////对象的初始化和清理
////1.构造函数对象进行初始化
////2.析构函数进行清理
////#include<iostream>
////using namespace std;
////
////class Person {
////public:
////	Person() {
////		cout << "构造函数的调用" << endl;
////	}
////
////
////	//2.
////	~Person() {
////		cout << "析构函数的调用" << endl;
////	};
////};
////
////
////int main() {
////	Person p;
////	//system("pause");  //如果注释去掉的话，析构函数的调用在这个按任意键之后
////	return 0;
////}
//
//
