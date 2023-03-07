////desc:重载比较运算符
////creator:  20210322
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//行为
//	Person(string name,int age) {
//		 m_name = name;;
//		 m_age=age;
//	}
//	//用成员函数实现重载==运算符 
//	//这里就是一个函数调用，本质为p.operator==(p1),所以只需要传一个参数
//	bool operator==(Person &p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//	//用成员函数实现重载!=运算符 
//	//这里就是一个函数调用，本质为p.operator==(p1),所以只需要传一个参数
//	bool operator!=(Person &p) {
//		if (this->m_age == p.m_age && this->m_name == p.m_name) {
//			return false;
//		}
//		else {
//			return true;
//		}
//	}
//
//	//属性
//	string m_name;
//	int m_age;
//};
//void test01() {
//	Person p1("Tom", 19);
//	Person p2("Jerry", 19);
//	//这里无法实现两个对象的比较，需要实现函数调用，也即是重载==运算符
//	if (p1 == p2) {
//		cout << "这两个人相等" << endl; //输出
//	}
//	else {
//		cout << "这两个人不相等" << endl;
//	}
//
//	//不等于比较
//	if (p1 != p2) {
//		cout << "这两个人不相等" << endl;
//	}
//	else {
//		cout << "这两个人相等" << endl; //输出
//	}
//}
//int main() {
//	test01();
//	return 0;
//}