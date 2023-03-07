////desc:类模板对象做函数参数
////creator: 
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showPerson() {
//		cout << "姓名 ：" << this->m_name << " 年龄：" << this->m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//
//};
//
//void printPerson1(Person<string,int>&p) {
//	p.showPerson();
//}
////1.指定传入类型
//void test01() {
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
//
//
////2.参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2>&p) {
//	p.showPerson();
//	cout << "T1的类型为: " << typeid(T1).name() << endl;
//	cout << "T2的类型为: " << typeid(T2).name() << endl;
//}
//void test02() {
//	Person<string, int>p("猪八戒", 100);
//	printPerson2(p);
//}
//
////3.整个类模板化
//template<class T>
//void printPerson3(T &p) {
//	p.showPerson();
//	cout << "T的类型为: " << typeid(T).name() << endl;
//}
//void test03() {
//	Person<string, int>p("唐僧", 30);
//	printPerson3(p);
//}
//
//int main() {
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}