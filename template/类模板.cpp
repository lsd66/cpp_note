////desc:类模板
////creator:  20210328
//#include<iostream>
//#include<string>
//using namespace std;
////类模板
//template<class NameType,class AgeType>
//class Person {
//public:
//	//行为
//	Person(NameType name, AgeType age) {
//		this->m_age = age;
//		this->m_Name = name;
//	}
//	void showPerson() {
//		cout << "姓名: " << this->m_Name << " 年龄：" << this->m_age << endl;
//	}
//	//属性
//	NameType m_Name;
//	AgeType m_age;
//};
//void test01() {
//	Person<string, int> p1("孙悟空",999);
//	p1.showPerson();
//}
//int main() {
//	test01();
//	return 0;
//}