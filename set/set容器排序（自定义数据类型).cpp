//#include<iostream>
//using namespace std;
//#include <set>
//#include <string>
//
//class Person{
//public:
//	//行为
//	Person(string name, int age){
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	//属性
//	string m_Name;
//	int m_Age;
//};
//
////仿函数
//class comparePerson{
//public:
//	bool operator()(const Person& p1, const Person &p2){
//		//按照年龄进行排序  降序
//		return p1.m_Age > p2.m_Age;
//	}
//};
//
//void test01(){
//	//自定义数据类型，需要指定排序规则，利用仿函数
//	set<Person, comparePerson> s;
//
//	Person p1("刘备", 23);
//	Person p2("关羽", 27);
//	Person p3("张飞", 25);
//	Person p4("赵云", 21);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++){
//		cout << "姓名： " << it->m_Name << " 年龄： " << it->m_Age << endl;
//	}
//}
//int main() {
//	test01();
//	return 0;
//}