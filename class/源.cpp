//desc:全局函数做友元
#include<iostream>
#include<string>
using namespace std;
class Building;
class FriendVisit {
	//行为
public:
	FriendVisit();
	void visit1();
	void visit2();
	//属性
	Building *building;
};
class Building {
	friend void FriendVisit::visit1();
	//行为
public:
	Building();

public:
	string m_sittingroom;
private:
	string m_bedroom;
};
Building::Building() {
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

FriendVisit::FriendVisit() {
	building = new Building;//利用new关键字返回一个指针，用来操作属性
}
void FriendVisit::visit1() {
	cout << "visit1正在访问： " << building->m_sittingroom << endl;
	cout << "visit1正在访问： " << building->m_bedroom << endl;
}
void FriendVisit::visit2() {
	cout << "visit2正在访问： " << building->m_sittingroom << endl;
	//cout << "visit2正在访问： " << building->m_bedroom << endl;
}
void test01() {
	FriendVisit fv;
	fv.visit1();
}
int main() {
	return 0;
}