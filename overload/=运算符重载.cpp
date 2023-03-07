////重载赋值运算符
////creator: 20210322
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//行为
//	Person(int age) {
//		//堆区数据，程序员开辟，由程序员释放
//		m_age = new int(age); //new 关键字返回的指定类型的指针
//	}
//	~Person() {
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//	//成员函数实现下面的重载赋值运算符,函数调用，把对象传进来，用引用
//	//参数为什么不用值传递，值传递会调用一个默认拷贝构造函数，又是一个新对象
//	//不太理解值传递就看引用那
//	Person& operator=(Person &p) {
//		//先判断一下原来堆区的数据有没有，如果有，先清空再接收新的对象的数据
//		if (m_age != NULL) {
//			delete m_age;
//			m_age = NULL;
//		}
//		//编译器默认拷贝构造函数实现的浅拷贝
//		//m_age = p.m_age;
//		//利用深拷贝解决浅拷贝带来的问题
//		m_age = new int(*p.m_age);//在堆区开辟数据
//		return *this; //返回这个对象本身，重复调用，不要返回值，返回值就是一个新对象，这样操作的不是同一个对象，无法链式编程
//	}
//	//属性
//	int *m_age; //待会要用到堆区
//};
//void test01() {
//	Person p1(10);
//	Person p2(20);
//
//	//如果上面由实现析构函数的话，会造成堆区数据重复释放(浅拷贝)
//	//类对象在当返回值和参数的时候会调用默认的拷贝构造函数
//	p2 = p1; //理解成函数调用
//	 
//	Person p3(20);
//	p3 = p2 = p1;
//
//	cout <<"p1.m_age: "<<* p1.m_age << endl;
//	cout << "p2.m_age: " <<* p2.m_age << endl;
//	cout << "p3.m_age: " << *p3.m_age << endl;
//}
//int main() {
//	test01();
//	return 0;
//}