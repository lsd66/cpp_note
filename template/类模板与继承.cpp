////desc:类模板与继承
////creator:  20210328
//#include<iostream>
//#include<string>
//using namespace std;
//template<class T>
//class Base {
//	T t;
//};
////class Son :public Base { //错误，必须要知道父类中的T类型，才能继承给子类
//class Son:public Base<int>{
//
//};
//void test01() {
//	Son s1;
//}
//
////如果想灵活的指定父类中T类型，那么子类也需要变类模板
//template <class T1,class T2>
//class Son2 :public Base<T2> {
//public:
//	Son2() {
//		cout << "T1的数据类型：" << typeid(T1).name() << endl;
//		cout << "T2的数据类型：" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//void test02() {
//	Son2<int, char> s2;
//}
//
//int main() {
//	//test01();
//	test02();
//	return 0;
//}