////desc:多继承（面向吕布编程）
////*C++允许一个类继承多个类
//语法：class 子类 : 继承方式 父类1 ，继承方式 父类2...
//多继承可能会引发父类中有同名成员出现，需要加作用域区分
//总结：多继承中如果父类中出现了同名清空，子类使用时候要加作用域
//C++实际开发中不建议用多继承
//*/
//
////creator:  20210322
////
//#include<iostream>
//using namespace std;
//class Base1 {
//public:
//	//行为
//	Base1() {
//		m_A = 100;
//	}
//	//属性
//	int m_A;
//};
//class Base2 {
//public:
//	//行为
//	Base2() {
//		m_A = 200;
//	}
//	//属性
//	int m_A;
//};
//class Son :public Base1, public Base2 {
//public:
//	//行为
//	Son() {
//		m_C = 300;
//		m_D = 400;
//	}
//	//属性
//	int m_C;
//	int m_D;
//};
//void test01() {
//	Son s;
//	//cout << "sizeof s: " << sizeof(s) << endl;
//	//当父类中出现同名成员，需要加作用域区分
//	cout << " Base1 m_A: " << s.Base1::m_A << endl;
//	cout << " Base2 m_A: " << s.Base2::m_A << endl;
//}
//int main() {
//	test01();
//	return 0;
//}