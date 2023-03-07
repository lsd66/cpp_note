////desc:空指针访问成员函数
///*
//空指针：指针变量指向内存中编号为0的空间
//C++中空指针也是可以访问成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断代码的健壮性
//*/
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	void showClassName() {
//		cout << "这是Person 类";
//	}
//	void showClassValue() {
//		//下面这句话等价于cout << "年龄为： " << this->m_age << endl;
//		//而this是空的
//		//加判断
//		if (this == NULL) {
//			return; //直接退出
//		}
//		cout << "年龄为： " << m_age << endl;
//	}
//	int m_age;
//};
//void test01() {
//	Person *p = NULL;
//	//p获取属性和行为
//	//p->showClassName();
//	//
//	p->showClassValue();
//}
//int main() {
//	test01();
//	return 0;
//}