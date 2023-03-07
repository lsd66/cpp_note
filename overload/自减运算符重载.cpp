////desc:重载递减运算符
////creator:  20210322
////具体不懂参考递增
//#include<iostream>
//using namespace std;
//class MyInteger {
//public:
//	//行为
//	MyInteger() {
//		m_num = 0;
//	}
//	//用成员函数实现前置递减运算符
//	//立即自减
//	MyInteger& operator--() { //本质为myint.operator<<()
//		--m_num;
//		return *this;
//	}
//	//用成员函数实现后置递减运算符
//	//稍后自减
//	MyInteger operator--(int) {
//		//记录结果
//		MyInteger temp = *this;
//		this->m_num--;
//		return temp;
//	}
//	//属性
//	int m_num;
//};
////重载左移运算符
//ostream& operator<<(ostream &cout,MyInteger myint) {
//	cout << myint.m_num << endl;
//	return cout;
//}
//void test01() {
//	MyInteger myint;
//	cout << myint << endl;  //0
//	cout << --myint << endl; //-1
//	cout << myint << endl; //-1
//	cout << ----myint << endl;//-3
//	cout << myint << endl;//要是-3就说明可以连续递减
//
//	cout << myint-- << endl; //-3
//	cout << myint << endl; //-4
//	cout << myint---- << endl;//-4
//	cout << myint << endl;//-6实际输出-5即只实现了一次递减，无法连续递减
//}
//int main() {
//	test01();
//	return 0;
//}