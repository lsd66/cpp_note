////desc:类模板分文件编写
////creator:  20210328
//#include<iostream>
//#include<string>
//using namespace std;
////#include"person.h"
//#include"person.hpp"
//
////第一种修改方式：直接#include "person.cpp"
////第二种方式:将.cpp中的内容和.h中的内容一起写到.h中，并且将.h的后缀名改为.hpp
//
////template <class T1,class T2>
////class Person {
////public:
////	Person(T1 name, T2 age);
////	void showPerson();
////	T1 m_name;
////	T2 m_age;
////};
//////类外实现构造函数
////template <class T1, class T2>
////Person<T1,T2>::Person(T1 name, T2 age) {
////	this->m_name = name;
////	this->m_age = age;
////}
//////类外实现成员函数
////template <class T1, class T2>
////void Person<T1, T2>::showPerson() {
////	cout << "姓名： " << this->m_name << " 年龄：" << this->m_age << endl;
////}
//void test01() {
//	Person<string, int>p("Tom", 19);
//	p.showPerson();
//}
//int main() {
//	test01();
//	return 0;
//}