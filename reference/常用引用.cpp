//#include<iostream>
//using namespace std;
////常量引用:使用场景，用来修饰形参,防止误操作
//void showValue(const int & val) { //不加const，如果下面有操作v会导致main函数的a被修改
//	//v = 100;
//	cout << val << endl;
//	/*
//	 相当于
//	  int &v=a;
//	  v=100;
//	 */
//}
//int main() {
//	/*int a = 10;
//	int &ref = 10;//引用必须引用一块合法的内存空间
//	*/
//
//	//加上const之后，编译器将代码修改 int temp=10;const int &ref=temp;
//	//const int &ref = 10; 
//	//ref=20;  //加入const之后变为只读，不可以修改
//
//	int a = 100;
//	showValue(a);
//	return 0;
//}