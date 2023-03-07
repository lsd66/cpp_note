////desc:继承同名静态成员处理方式
////creator: 20210322
//////（就近原则）
////总结：同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象和类名进行访问)
///*
//问题：继承中同名的静态成员在子类对象上如何进行访问？
//静态成员和非静态成员出现同名，处理方式一致
//a.访问子类成员，直接访问即可
//b.访问父类同类成员，需要加作用域
//*/
//#include<iostream>
//using namespace std;
//class Base {
//public:
//	//行为
//	static void func() {
//		cout << "Base中静态成员函数func()的调用" << endl;
//	}
//	static void func(int a) {
//		cout << "Base中静态成员函数func(int a)的调用" << endl;
//	}
//	//属性
//	//静态成员变量,类内声明，类外初始化
//	static int m_A;
//};
//int Base::m_A = 100;
//
//class Son:public Base {
//public:
//	//行为
//	static void func() {
//		cout << "Son中静态成员函数func()的调用" << endl;
//	}
//	//属性
//	//静态成员变量,类内声明，类外初始化
//	static int m_A;
//};
//int Son::m_A = 200;
//void test01() {
//	cout << "静态成员的访问: " << endl; //200
//	//静态成员的访问
//	//1.通过对象访问
//	Son s;
//	cout << s.m_A << endl; //200
//	cout << s.Base::m_A << endl;//100 通过s对象调用父类中的m_A属性
//	//2.通过类名访问
//	cout << Son::m_A << endl; //200
//	cout << Son::Base::m_A << endl; //100 通过Son类调用父类中的m_A属性
//
//	//静态成员函数的访问
//	//1.通过对象访问
//	 s.func(); 
//	 s.Base::func(); //通过s对象调用父类中的m_A属性
//	//2.通过类名访问
//	 Son::func();
//	 Son::Base::func(); //通过Son类调用父类中的m_A属性
//
//     //子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
//	 //如果想访问父类中被隐藏同名成员，需要加作用域
//	 //Son::func(10); //同名隐藏
//	 Son::Base::func(10);
//}
//int main() {
//	test01();
//	return 0;
//}