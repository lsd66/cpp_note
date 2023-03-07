//#include<iostream>
//using namespace std;
//class Base {
//	public:
//	Base() {
//		cout << "Base的构造函数调用" << endl;
//	}
//	~Base() {
//		cout << "Base的析构函数调用" << endl;
//	}
//};
//class Son :public Base {
//public:
//	Son() {
//		cout << "Son的构造函数调用" << endl;
//	}
//	~Son() {
//		cout << "Son的析构函数调用" << endl;
//	}
//};
//void test01() {
//	//Base b;
//	//继承中的构造和析构函数顺序如下：
//	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
//	Son s;
//}
//int main() {
//	test01();
//	return 0;
//}