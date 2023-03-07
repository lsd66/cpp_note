////desc:类对象作为类成员
//creator:  20210320
//#include<iostream>
//#include<string>
//using namespace std;
////使用两个类输出张三使用的具体手机名字
//class Phone {
//public:
//	Phone(string pname) {
//		m_pname = pname;
//		cout << "Phone的构造函数调用" << endl;
//	}
//	string m_pname;
//	~Phone() {
//		cout << "Phone的析构函数调用" << endl;
//	}
//};
//class Person {
//public:
//	//行为
//	////初始化列表
//    //语法:构造函数():属性1(值1),属性2(值2),...{}
//	//Phone m_phone=pname;//隐式转换法
//	Person(string name,string pname):m_name(name), m_phone(pname){
//		cout << "Person的构造函数调用"  << endl;
//	}
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//	//属性
//	string m_name;
//	Phone m_phone; //手机是对象成员
//};
////当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反
//void test01() {
//	Person p("张三","小米");
//	cout << p.m_name << "使用的手机品牌： " <<p.m_phone.m_pname << endl;
//}
//int main() {
//	test01();
//	return 0;
//}