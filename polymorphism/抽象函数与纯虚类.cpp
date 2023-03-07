////desc:抽象函数和纯虚类
////creator:  20210323
//#include<iostream>
//using namespace std;
//class Base {
//public:
//	//行为
//	//纯虚函数，只要含有一个纯虚函数的类被称为抽象类
//	//1.不能实例化
//	//2.抽象类的子类，必须要重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//class Son :public Base {
//public:
//	//行为
//	void func() {
//		cout << "子类重写抽象类的纯虚函数" << endl;
//	}
//
//};
//void test01() {
//	//Base b;//抽象类不允许实例化 栈区
//	//new Base;//抽象类不允许实例化 堆区
//	Son s; //子类必须重写抽象类的纯虚函数，否则也不能实例化
//	s.func();
//
//	//使用多态：
//	//多态使用条件：父类指针或引用指向子类对象
//	cout << "通过多态调用子类的对象: " << endl;
//	//多态目的:通过一个父类的指针,由于创建的对象不同，调用多样的函数
//	Base * base = new Son;
//	base->func();
//	
//}
//
//int main() {
//	test01();
//	return 0;
//}