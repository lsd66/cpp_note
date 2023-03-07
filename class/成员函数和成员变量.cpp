////desc:成员函数和成员变量是分开存储的
////creator:  20210320
////总结：只有非静态成员变量属于类的对象上，其余的静态成员变量，非静态成员函数，静态成员函数都是不属于类上的
//#include<iostream>
//using namespace std;
//class Person {
//	//行为：
//	void func() {} //非静态成员函数,不属于类的对象上
//	static void func2() {} //静态成员函数,不属于类的对象上
//	//属性
//	int m_A; //非静态成员变量,属于类的对象上,因为非空对象那是4
//	static int m_B; ;//静态成员变量.不属于类的对象上
//};
////静态成员变量：类内声明，类外初始化
//int Person::m_B=0;
//
////如果是空对象，即只有一个class Person(){}
//void test01() {
//	Person p;
//	//空对象占用多少内存空间
//	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "p占用" << sizeof(p) << endl;  //1
//}
//
////非空对象的时候
//void test02() {
//	Person p;
//	cout << "p占用" << sizeof(p) << endl; //4
//}
//int main() {
//	test02();
//	return 0;
//}
//
