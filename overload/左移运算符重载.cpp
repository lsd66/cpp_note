////desc:重载左移运算符:重载左移运算符配合友元可以输出自自定义的数据类型
////creator: 20210321
//#include<iostream>
//using namespace std;
//class Person {
//	//全局函数做友元,因为set和get函数太麻烦了
//	friend ostream & operator<<(ostream &cout, Person &p);
//public:
//
//	Person(int a, int b) {
//		m_A=a;
//		m_B=b;
//	}
//	
//
//private:
//	//行为
//	//1.用局部函数实现cout<<p输出对应的所有属性
//	//void operator<< (Person &p) { //本质:p.operator<<(p) 这样不对
//	//void operator<< (cout) { // 本质是函数调用,会造成p.operator<<(cout),p<<cout;这个是不对的。
//	//这种情况下不能用局部函数实现左移运算符的操作
//	//}
//
//	//属性
//	int m_A;
//	int m_B;
//};
////全局函数实现左移运算符的重载
////这里需要两个参数,来实现函数调用的时候输出cout<<p
////cout在这个函数只需要一份,且cout是个对象,使用引用传递,因为值传递是会拷贝一份的.引用的主要作用是作为函数参数传递
//ostream &operator<<(ostream &cout,Person &p) {  //换成out也是可以的,因为函数调用的时候,引用只是一个别名
//	cout << "p.m_A: "<< p.m_A << endl;
//	cout << "p.m_B :"<< p.m_B << endl;
//	return cout;
//}
//void test01() {
//	Person p(10,10);
//    //cout<<p  其本质是函数调用 operator<<(cout, p) << endl;
//	cout << p; //对这个实现重载,就是说要实现用cout输出p对象下的所有属性
//	cout << p << endl;
//	
//}
//int main() {
//	test01();
//	return 0;
//}
//
//
