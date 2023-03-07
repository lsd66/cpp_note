////desc：拷贝构造函数的调用时机
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "Person的默认无参构造函数调用" << endl;
//	}
//	Person(int a) {
//		m_A = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	Person(const Person &p) { //引用是副本
//		m_A = p.m_A;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//	int m_A;
//
//};
////1.用一个创建完毕的对象去初始化一个新对象的时候
//void test01() {
//	Person p1(10);
//	Person p2(p1);
//}
//
////2.用值传递的方式去给函数传值
//void doWork(Person p) {
//
//}
//void test02() {
//	Person p;
//	doWork(p); //值传递的本质是会拷贝一个副本，实参传给形参的时候会调用拷贝构造函数
//}
//
////3.值方式返回局部对象
//Person  doWork2() {
//	Person p;
//	return p;  //返回的时候会拷贝一个临时的副本给返回
//}
//void test03() {
//	//用对象去接收返回值是对象的
//	Person p = doWork2();
//}
//int main() {
//	test01();
//	return 0;
//
//}