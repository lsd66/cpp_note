////desc:模板的局限性
////creator:  20210328
//#include<iostream>
//using namespace std;
//#include<string>
////对比两个数据是否相等函数
//template <class T>
//bool compare(T &a, T &b) {
//	if (a == b) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//class Person {
//public:
//	//行为
//	Person(string name, int age) {
//		m_name = name;
//		m_age = age;
//	}
//	//属性
//	string m_name;
//	int m_age;
//};
//
////1 利用具体化Person的版本实现代码，具体化优先调用
//template <> bool compare(Person &p1, Person &p2) {
//	if (p1.m_name == p2.m_name && p1.m_age==p2.m_age) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//void test01() {
//	int a = 10;
//	int b = 20;
//	bool ret = compare(a, b);
//	if (ret == true) {
//		cout << "这两个数相等" << endl;
//	}
//	else {
//		cout << "这两个数不相等" << endl;
//	}
//}
//
//void test02() {
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = compare(p1, p2);  //自定义的数据类型无法直接通过函数模板进行比较，如果需要，可以重载==运算符或者 1
//	if (ret == true) {
//		cout << "p1==p2" << endl;
//	}
//	else {
//		cout << "p1!=p2" << endl;
//	}	
//}
//int main() {
//	test02();
//	return 0;
//}