////desc:当子类与父类出现同名的成员，如何通过子类对象，访问到子类或者父类中同名的数据
////（就近原则）
////总结：1.子类对象可以直接访问到子类中同名成员
////2.子类对象加作用域可以访问到父类同名成员
////3.当子类和父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
////creator: 20210322
//#include<iostream>
//using namespace std;
//class Base {
//public:
//	//行为
//	Base() {
//		m_A = 100;
//	}
//	void func() {
//		cout << "Base中func()调用" << endl;
//	}
//	void func(int a) {
//		cout << "Base中func(int a)调用" << endl;
//	}
//
//	//属性
//	int m_A;
//};
//class Son :public Base {
//public:
//	//行为
//	Son(){
//		m_A = 200;
//	}
//	void func() {
//		cout << "Base中func()调用" << endl;
//	}
//	//属性
//	int m_A;
//};
//void test01() {
//	//同名成员函数属性处理
//	Son s;
//	cout << s.m_A << endl;// 200
//	//如果通过子类对象访问到父类中同名成员，需要加作用域
//	cout << s.Base::m_A << endl; //100
//
//	//同名成员函数处理
//	s.func(); //直接调用，调用的是子类的同名成员
//	//s.func(10); //如果子类和父类有同名的成员函数，那么子类会把父类所有同名的成员函数给隐藏
//
//	s.Base::func(10); //如果要通过子类来调用父类中被隐藏的同名函数，需要加作用域
//
//}
//int main() {
//	test01();
//	return 0;
//}