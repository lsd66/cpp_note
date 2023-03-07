////desc:深拷贝和浅拷贝
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person() {
//		cout << "默认无参构造函数的调用" << endl;
//	}
//	//用户定义有参构造函数，C++不会再提供默认无参构造，但是会提供默认拷贝构造
//	Person(int age, int height) {
//		m_age = age;
//		m_height = new int(height);//在堆区开辟内存 new int 返回的是int*，需要用指针进行接收
//		cout << "有参构造函数的调用" << endl;
//	}
//	~Person() {
//		//释放堆区内存
//		if (m_height != NULL) {
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "析构函数的调用" << endl;
//	}
//	//不用编译器自带的拷贝构造，自己实现拷贝构造函数
//	Person(const Person &p) {
//		m_age = p.m_age;
//		//默认拷贝构造函数实现的是简单的赋值操作
//		//m_height=p.m_height; //编译器默认实现就是这行代码
//		//上面的浅拷贝会导致堆区数据重复释放，需要用深拷贝去解决。
//		//深拷贝 重新在堆区开辟内存
//		m_height = new int(*p.m_height);  //new int返回的是int *,且new int()括号里要求是整数，需要对指针解引用
//		cout << "拷贝构造函数的调用" << endl;
//	}
//	int m_age;
//	int *m_height; //用指针是因为要把数据开辟到堆区，使用new关键字
//};
//void test01() {
//	Person p1(10, 160);
//	Person p2(p1);//类对象在当参数和返回值的时候会调用拷贝构造函数
//	//栈区数据，新进后出
//	cout << "p1的年龄: " << p1.m_age << "p1的身高: " << *p1.m_height << endl;
//	cout << "p2的年龄: " << p2.m_age << "p2的身高: " << *p2.m_height << endl;
//}
//int main() {
//	test01();
//	return 0;
//}