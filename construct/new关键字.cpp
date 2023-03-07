////desc：关于new关键字
//#include<iostream>
//using namespace std;
//int * func() {
//	//在堆区创建整型数据
//	 //new返回的是内存地址，用指针进行接收
//	int *p = new int(10);
//	return p;
//}
//void test01() {
//	int *p=func();
//	cout << *p<<endl;
//	//堆区的数据，由程序员管理，程序员释放
//	//如果想释放堆区的数据，利用关键字delete
//	delete p;
//}
////2.在堆区利用new开辟数组
//void test02() {
//	//创建10整型数据的数组,在堆区
//	int *arr=new int[10]; //10代表数组有10个元素
//}
//int main() {
//	test01();
//
//	
//	
//	return 0;
//}