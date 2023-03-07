////vector容器中存放自定义数据类型的数据
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
//class  Person {
//public:
//	//结构体
//	Person(string name, int age){
//		this->m_Name = name;
//		this->m_Age = age;
//    }
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//	vector<Person> v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout <<"姓名为： "<< (*it).m_Name << "年龄为： " << (*it).m_Age << endl;
//	}
//}
//
//
//void test02() {
//	vector<Person*> v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器中的数据
//	//这里it为 Person *
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名为： " <<  (*it)->m_Name<< "年龄为： " << (*it)->m_Age << endl;
//	}
//}
//int main() {
//	test02();
//	return 0;
//}