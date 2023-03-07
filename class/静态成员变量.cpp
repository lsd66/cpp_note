////desc:静态成员变量
//creator:  20210320
//#include<iostream>
//using namespace std;
////静态成员变量不属于某个对象，所有对象共享一份数据
////编译器自动分配内存
////类内声明，类外初始化
//class Person {
//public:
//	//属性
//	static int m_a;
//
//	//静态成员变量也有访问权限，因为静态成员变量也算是属性
//private:
//	static int m_b;
//};
////类内声明，类外初始化
//int Person::m_a = 100;
//int Person::m_b = 100;
//
//void test01() {
//	Person p;
//	cout << "m_a:" << p.m_a << endl;
//
//	//所有对象共享一份数据
//	Person p2;
//	p2.m_a = 200;
//	cout << "m_a:" << p.m_a << endl;
//
//	//权限
//	//p2.m_b = 200;  //类外访问不到私有静态成员变量
//}
//
////静态成员变量不属于某个具体对象，所有对象共享一份数据，所以有两种访问方式
//void test02() {
//	//1.通过对象访问 //因为成员变量算是所有对象的属性，公共的
//	Person p;
//	p.m_a = 100;
//
//	//2.通过类名访问 
//	Person::m_a = 1000;//因为成员变量算是类里面的属性
//}
//
//int main() {
//	test01();
//	return 0;
//}