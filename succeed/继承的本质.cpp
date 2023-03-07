//#include<iostream>
//using namespace std;
//class Base {
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son1 :public Base {
//public:
//	int m_d;
//};
////利用开发人员命令提示工具查看对象模型
////跳转盘符 C:(本来就是C盘略过这一步) 
////跳转文件路径 cd 具体路径下
////查看类名
////cl d1 reportSingleClassLayout类名 文件名
//void test01() {
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性 是被编译器给隐藏了，因此访问不到，但是确实被继承下去了
//	cout << "Son1的大小为："<<sizeof(Son1) << endl;
//}
//int main() {
//	test01();
//	return 0;
//}