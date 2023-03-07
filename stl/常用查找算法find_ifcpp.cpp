//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
//#include<algorithm>
//
////1.查找内置数据类型
//class GreateFive {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//void test01() {
//	vector<int>v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it=find_if(v.begin(), v.end(), GreateFive());
//	if (it ==v.end()) {
//		cout << "没有找到 ";
//	}
//	else {
//		cout << "找到大于5的数字：" << *it << endl;
//	}
//}
////2.查找自定义数据类型
//class Person {
//public:
//	Person(string name, int age) {
//		this->m_age = age;
//		this->m_name = name;
//	}
//	string m_name;
//	int m_age;
//};
//
//class Greater20 {
//public:
//	bool operator()(Person &p) {
//		return p.m_age > 20;
//	}
//};
//void test02() {
//	vector<Person>p;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("aaa", 30);
//	Person p4("bbb", 40);
//
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//
//	//找年龄大于20的人
//	vector<Person>::iterator it=find_if(p.begin(), p.end(), Greater20());
//	if (it == p.end()) {
//		cout << "没有找到";
//	}
//	else {
//		cout << "找到的人的姓名：" << it->m_name << "年龄：" << it->m_age << endl;
//	}
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}