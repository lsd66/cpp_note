////desc: ；类模板和函数模板的区别
////creator: 20210328
//#include<iostream>
//using namespace std;
//#include<string>
////类模板
//template<class NameType, class AgeType =int>
//class Person {
//public:
//	//行为：
//	Person(NameType name, AgeType  age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showPerson() {
//		cout << "姓名： " << this->m_name << " 年龄: " << this->m_age << endl;
//	}
//	//属性
//	NameType m_name;
//	AgeType m_age;
//};
//void test01() {
//	//1.类模板没有自动类型推导使用方式
//	//Person p("孙悟空",1000);//错误，无法用自动类型推导
//	Person <string, int> p1 ("孙悟空", 1000); 
//	p1.showPerson();
//}
//
////2.类模板在模板参数列表中可以有默认参数
//void test02() {
//	Person<string> p2("猪八戒",999);
//}
//int main() {
//	test01();
//	return 0;
//}