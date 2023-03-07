////desc:类模板与友元
////creator: 20210328
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1, class T2>
//class Person;//先声明类模板
//
//
////全局函数类外实现,需要把实现放声明前
//template<class T1, class T2>
//void printPerson1(Person<T1, T2> p) {
//	cout << "姓名：" << p.m_name << " 年龄:" << p.m_age << endl;
//}
//
//
//template<class T1, class T2>
//class Person {
//	//全局函数 类内实现
//	//如果不加friend，就是局部函数，且默认权限是private
//	friend void printPerson(Person<T1,T2> p) {
//		cout << "姓名：" << p.m_name << " 年龄:" << p.m_age << endl;
//	}
//
//	//全局函数类外实现
//	//加空模板的参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson1<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name,T2 age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//
//
////1.全局函数类内实现的测试
//void test01() {
//	Person<string, int>p("tom", 20);
//	printPerson(p);
//}
////2.全局函数类内实现的测试
//void test02() {
//	Person<string, int>p("jerry", 20);
//	printPerson1(p);
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}