////desc:局部函数做友元
////creator:  20210321
//#include<iostream>
//#include<string>
//using namespace std;
////关于类定义的顺序，首先Building类里面有FriendVisit类，所以要先定义FriendVisit类，但是FriendVisit类里面有Building对象，所以要先声明下Building类
////如果先定义Building类，那声明里面那个visit1函数是找不到的。
//
//class Building;
//class FriendVisit {
//public:
//	//行为
//	//FriendVist的构造函数声明
//	FriendVisit(); ////在类外去实现，类内只定义
//
//	//参观函数,成员函数
//	void visit1();//在类外去实现，类内只定义
//	void visit2();
//
//	//属性
//	//Building 类作为对象成员
//	//这里是需要一个对象,需要输出这个对象的属性，所以用指针的话，直接->方便操作对象下面的属性
//	//如果是值传递，内存会多一点
//	//C++中好像没发现用引用创建对象的，而且引用需要初始化，所以不用
//	Building *building;  //这里是属性，不是对象噢
//
//};
//class Building {
//	//局部函数声明：
//	friend void FriendVisit::visit1();
//public:
//	//行为
//	Building(); //在类外去实现，类内只定义
//
//	//属性
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//
//};
//
////类外实现成员函数
////Building类的构造函数用来初始化
//Building::Building() {
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
////FriendVist类的构造函数
//FriendVisit::FriendVisit() {
//
//	//因为building是个指针，所以要用new去创建对象来操作这个对象成员里的属性
//	//创建对象默认调用无参构造
//	building = new Building;//构造函数内用new在堆区创建对象,堆区的数据由程序员手动开辟，手动释放
//}
////FriendVist类的成员函数
////要加返回值类型
//void FriendVisit::visit1() {
//	cout << "visit1正在访问: " << building->m_sittingroom << endl;
//	cout << "visit1正在访问：" << building->m_bedroom << endl; //有上面友元类的声明所以不报错
//}
//void FriendVisit::visit2() {
//	cout << "visit2正在访问: " << building->m_sittingroom << endl;
//	//cout << "visit2正在访问：" << building->m_bedroom << endl; //有上面友元类的声明所以不报错
//}
//void test01() {
//	FriendVisit fv;
//	fv.visit1();
//}
//int main() {
//	test01();
//	return 0;
//}