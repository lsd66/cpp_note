////desc:类模板成员函数的类外实现
////creator: 20210328
//#include<iostream>
//#include<string>
//using namespace std;
//template<class T1,class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);/*{
//		this->m_name = name;
//		this->m_age = age;
//	}*/
//	void showPerson(); /*{
//		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//	}*/
//	T1 m_name;
//	T2 m_age;
//};
//
////构造函数的类外实现
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age) {
//	this->m_name = name;
//	this->m_age = age;
//}
//
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showPerson() {
//	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//}
//
//void test01() {
//	Person<string, int>p("Tom", 10);
//	p.showPerson();
//}
//int main() {
//	test01();
//	return 0;
//}