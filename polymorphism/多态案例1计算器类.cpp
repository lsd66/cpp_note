////desc;多态案例-计算器类
////creator:  20210323
////分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
///*
//多态的优点:
//1.代码组织结构清晰
//2.可读性强
//3.利于前期和后期的拓展以及维护
//*/
////creator:  20210323
//#include<iostream>
//#include<string>
//using namespace std;
////普通模式下的计算器类
//class Calculate {
//public:
//	//行为
//	int getStr(string str) {
//		if (str == "+") {
//			return m_a + m_b;
//		}
//		else if (str=="-") {
//			return m_a - m_b;
//		}
//		else if (str == "*") {
//			return m_a *m_b;
//		}
//		//如果想拓展新的功能，需要修改源码
//      //在实际的开发中，提倡开闭原则
//      //开闭原则:对拓展进行开发，对修改进行关闭
//	}
//	//属性
//	int m_a;
//	int m_b;
//};
//void test01() {
//	Calculate c;
//	c.m_a = 10;
//	c.m_b = 10;
//	cout << c.m_a << "+" << c.m_b << "=" << c.getStr("+") << endl;
//}
//
////使用多态来解决这种不适合维护的代码块
//class AbstractCaculate {
//public:
//	//行为
//	//虚函数
//	virtual int getStr() {
//		return 0;
//	}
//	int m_c;
//	int m_d;
//};
//class AddCaculate :public AbstractCaculate {
//public:
//	//行为
//	//重写父类中的虚函数
//	int getStr() {
//		return m_c + m_d;
//	}
//};
//class SubCaculate :public AbstractCaculate {
//public:
//	//行为
//	//重写父类中的虚函数
//	int getStr() {
//		return m_c - m_d;
//	}
//};
//
//class MulCaculate :public AbstractCaculate {
//public:
//	//行为
//	//重写父类中的虚函数
//	int getStr() {
//		return m_c * m_d;
//	}
//};
//
//void test02() {
//	//多态使用条件:父类指针或引用指向子类对象
//	//这里使用指针实现加法
//	AbstractCaculate *abs = new AddCaculate;
//	abs->m_c = 10;
//	abs->m_d = 10;
//	abs->getStr();
//	cout << abs->m_c << "+" << abs->m_d << "=" << abs->getStr() << endl;
//	//堆区数据及时销毁
//	delete abs;
//
//	//减法
//	abs = new SubCaculate;
//	abs->m_c = 10;
//	abs->m_d = 10;
//	abs->getStr();
//	cout << abs->m_c << "-" << abs->m_d << "=" << abs->getStr() << endl;
//	//堆区数据及时销毁
//	delete abs;
//}
//
//int main() {
//	test02();
//	return 0;
//}