////desc:const修饰成员函数和属性
////常函数和常对象
///*
//常函数：
//a.成员函数后加const后我们称这个函数为常函数
//b.常函数内不可以修改成员属性
//c.成员属性声明加关键字mutable后，在常函数中依然可以修改
//
//常对象:
//a.声明对象前加const称该对象为常对象
//b.常对象只能调用常函数
//*/
////creator:  20210320
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//行为
//	//this指针的本质，是指针常量， 指针的指向是不可以修改的,指针指向的值可以修改
//	//即 Person * const this 
//	//如果在括号后面加const，等价于const  Person * const this 
//	//常函数
//	void setPersonAge() const {
//		//等价于this->age;因为this指针是隐含每一个非静态成员函数内的一种指针
//		//指针指向的值
//		//m_age = 100; //函数后面加了const之后这里也不可以改
//		//this的指向不可以改
//		//this = NULL;
//		m_B = 100;  //特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable	
//	}
//	void func() {
//		m_age = 100;
//	}
//	//属性
//	int m_age;
//	mutable int m_B;
//};
//void test01() {
//	Person p;
//	p.m_age = 10;
//}
//void test02() {
//	const Person p;  //在对象前加const，变为常对象
//	//p.m_age = 100;
//	p.m_B = 100; //m_B是特殊值，在常对象下也可也修改
//	//常对象只能调用常函数
//	p.setPersonAge();
//	//p.func();//常对象 不可以调用普通成员函数，因为普通成员函数也可以修改属性
//
//}
//int main() {
//	test01();
//	return 0;
//}