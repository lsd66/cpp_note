//#include <iostream>
//using namespace std;
//#include<vector>
//#include<string>   //没有与这些操作符匹配的"<<"的运算符
////desc:容器中存放自定义数据类型
//class Person {
//public:
//	Person(string name, int age) {
//		m_Age = age;
//		m_Name = name;
//	}
//	int m_Age;
//	string m_Name;
//};
//void test01() {
//	//先创建容器
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	//追加元素
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//使用迭代器输出
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名为: " << (*it).m_Name << "年龄为: " << (*it).m_Age << endl;
//	}
//}
//
////desc:存放自定义数据类型指针
//void test02() {
//	//先创建容器
//	vector<Person *>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	//追加元素
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//使用迭代器输出
//	for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名为:2. " << (*it)->m_Name << "年龄为: 2," << (*it)->m_Age << endl;
//	}
//}
//int main() {
//	test02();
//	return 0;
//}