////desc: 类模板中成员函数创建时机
////creator:  20210328
//#include<iostream>
//using namespace std;
//class Person1 {
//public:
//	void showPerson1() {
//		cout << "showPerson1的调用" << endl;
//	}
//};
//class Person2 {
//public:
//	void showPerson2() {
//		cout << "showPerson2的调用" << endl;
//	}
//};
//template <class T>
//class MyClass {
//public:
//	T obj;
//	//类模板中的成员函数
//	void func1() {
//		obj.showPerson1();
//	}
//	void func2() {
//		obj.showPerson2();
//	}
//};
//void test01() {
//	MyClass <Person1>m;
//	m.func1();
//	m.func2();
//
//}
//
//int main() {
//	test01();
//	return 0;
//}