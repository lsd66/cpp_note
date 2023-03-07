////desc:运算符重载：对已有的运算符重新进行定义，赋予其另一种功能，以实现不同的数据类型
////重载加号运算符
////creator: 20210321
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//行为
//	//1.成员函数实现重载运算符，因为已经有一个对象调用，所以只需要传一个对象即可
//	/*//为什么不用引用:因为不能返回局部变量的引用
//  //如果类对象在函数中做返回值和参数，那么就会调用拷贝构造函数
//  //参数为什么不用值传递，值传递会调用一个默认拷贝构造函数，又是一个新对象
//	Person operator+ (Person &p) {
//		Person temp;  //因为要有一个对象返回
//		temp.m_age = this->m_age + p.m_age;
//		temp.m_height = this->m_height + p.m_height;
//		return temp ; //函数返回值为对象
//	}*/
//	
//	//属性
//	int m_age;
//	int m_height;
//};
////2.全局函数实现运算符重载
//Person operator+(Person &p1, Person &p2) {
//	Person temp; //因为要有一个对象返回
//	temp.m_age = p1.m_age + p2.m_age;
//	temp.m_height = p1.m_height + p2.m_height;
//	return temp; //函数返回值为对象
//}
////运算符重载也可也发生函数重载
//Person operator+(Person &p1, int num) {
//	Person temp; //因为要有一个对象返回
//	temp.m_age = p1.m_age + num;
//	temp.m_height = p1.m_height + num;
//	return temp; //函数返回值为对象
//}
//void test01() {
//	Person p1,p2,p3;
//	p1.m_age = 10;
//	p1.m_height = 160;
//	p2.m_age = 10;
//	p2.m_height = 160;
//	//局部函数的本质
//	//p3 = p1.operator+(p2);  //可以简化为p3=p1+p2;
//	cout << "p1的年龄："<<p1.m_age << "身高: " << p1.m_height << endl;
//	cout << "p2的年龄：" << p2.m_age << "身高:" << p2.m_height << endl;
//	cout << "p3的年龄：" << p3.m_age << "身高:" << p3.m_height << endl;
//
//	//全局函数的本质
//	//函数调用之后赋值
//	p3=operator+(p1, p2); //可以简化为p3=p1+p2;
//	//函数重载
//	p3 = p2 + 10;
//}
//int main(){
//	test01();
//	return 0;
//
//}