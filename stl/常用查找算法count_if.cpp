//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Greater20{
//public:
//	bool operator()(int val){
//		return val >20;
//	}
//};
//
////1.内置数据类型
//void test01(){
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//	cout << "大于20的个数为： " << num << endl;
//}
//
////2.自定义数据类型
//class Person{
//public:
//	Person(string name, int age){
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class AgeGreater35{
//public:
//	bool operator()(const Person &p){
//		return p.m_Age > 35;
//	}
//};
//void test02(){
//	vector<Person> v;
//
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 30);
//	Person p5("曹操", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeGreater35());
//	cout << "小于35岁的个数：" << num << endl;
//}
//
//int main() {
//	//test01();
//	test02();
//	return 0;
//}