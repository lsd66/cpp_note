////desc:构造函数的分类
////creator: 20210319
////按参数分为：无参构造（默认)和有参构造
////按类型分为:普通构造和拷贝构造
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//无参
//	Person() {
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	//有参
//	Person(int a) {
//		m_a = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数 (加const防止修改main函数的)
//	Person(const Person  &p) {
//		m_a = p.m_a;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//	int m_a;
//
//	//析构函数
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//};
//
//void test01() {
//	//构造函数的三种调用方式
//	//1.括号法(紧跟括号)  
//	Person p1; //默认无参构造
//	Person p2(10);////有参构造
//	Person p3(p2);//拷贝构造
//	//注意事项1：不能在无参构造函数之后加()，编译器会认为是函数的声明 即 void func();不会认为是在创建对象
//	//Person p(); 
//
//	//2.显示法，多显示一个匿名对象
//	Person p1;
//	//创建对象，然后用匿名对象赋值给对象
//	Person p2 = Person(10);//有参构造
//	Person p3 = Person(p2); //拷贝构造
//	Person(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
//	//注意事项2：不要利用拷贝构造函数初始化匿名对象,编译器会认为 Person（p3)等价于 Person p3;对象声明
//	//Person(p2);
//
//	//3.隐式转换法 直接赋给对象
//	Person p4 = 10;//相当于写了 Person p4=Person (10);//有参构造
//	Person p5 = p4;//拷贝构造
//}
//int main() {
//	test01();
//	return 0;
//}