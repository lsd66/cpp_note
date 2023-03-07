////desc:重载自增运算符
////分为前置递增和后置递增
////总结:前置递增返回引用，后置递增返回值
////creator : 20210321
//#include<iostream>
//using namespace std;
//class MyInteger {
//public:
//	//行为
//	MyInteger() {
//		m_num = 0;
//	}
//	//重载实现前置递增的函数调用给下面++myint使用
//	//这个时候不需要参数，因为是成员函数，且还是那个对象
//	//关于为什么不使用值进行返回：r如果使用值返回，那么++(++myint)这样的话，就是拷贝一个新的副本，返回了新对象，自增就跟正常的不一样
//	//返回对象用引用接收
//	MyInteger& operator++() {
//		//操作原来的属性立即自增
//		++m_num;
//		//由于cout跟着的整体还是对象，所以需要返回的还是这个对象
//		return *this; //*this解引用返回对象
//	}
//
//	//重载实现后置递增的函数调用给下面myint++使用
//	//这里需要使用(int)占位符，来区分上面的函数，因为不是函数重载
//	//这里要用值，因为temp是个局部对象，不要返回局部对象的引用
//	MyInteger operator++(int) {
//		//不可以用return,return就直接退出了
//		//创建临时对象来记录传进来的对象
//		MyInteger temp = *this;
//		//稍后自增
//		m_num++;
//		//返回对象
//		return temp;  //这里用的值传递，这个递增递减耗时,因为值传递是拷贝一个数据返回的
//	}
//
//	//属性
//	int m_num;
//};
////下面要cout<<myint，所以需要对左移运算符<<进行重载
////cout对象只有一份，所以用引用
////因为还是要返回cout对象,链式编程，所以返回值是ostream &
////MyInteger使用引用是后置++的时候，需要返回局部对象的值不能用引用
//ostream& operator<<(ostream &cout, MyInteger myint) {
//	cout << myint.m_num << endl;
//	return cout;
//}
//void test01() {
//	MyInteger myint;
//	cout << myint << endl; //0
//	//下面要实现自增，即cout<<++myint<<endl;
//	//也就是要实现函数调用，即重载实现++对象的操作，重载实现++运算符
//	//如果不实现这个函数调用，那么这个++myint函数不知道怎么实现，因为myint是个对象
//	//myint是个对象，对象调用的方法是行为，是成员函数
//	cout << ++myint << endl; //1
//	cout << myint << endl;   //1
//	cout << myint++ << endl;  //1
//	cout << myint << endl;   //2
//
//	cout << (myint++)++ << endl;  //2
//	cout << myint << endl;   //4实际输出3   //即C++本身不支持后续连续递增
//}
//int main() {
//	test01();
//	return 0;
//}