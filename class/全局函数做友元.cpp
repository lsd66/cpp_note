////desc:全局函数做友元
////creator: 20210320
///*
//友元：在程序里，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类，访问另一个类中私有成员
//*/
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Building {
//	//全局函数在这里申明
//	friend void  FriendVisit(Building *building);
//public:
//	 Building(){
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////这里用指针省内存，因为值传递是拷贝一份，引用的话，也可以。
////因为是全局函数
//void  FriendVisit(Building *building) {
//	cout << "正在访问：" << building->m_sittingroom << endl;
//	cout << "正在访问：" << building->m_bedroom << endl;  //私有属性不可以在类外访问，需要申明为友元函数
//}
//
//void test01() {
//	Building building;
//	FriendVisit(&building);
//}
//int main() {
//	test01();
//	return 0;
//}