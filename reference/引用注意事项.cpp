////desc:引用的相关注意事项
//#include<iostream>
//using namespace std;
//int main() {
//	int a = 10;
//	//1.引用必须要初始化
//	int &b = a;
//	int c = 20;
//	//2.引用一旦初始化之后不允许修改
//	//int &b=c;//不允许重新指向
//	//3.一旦赋值修改指向的内存的值，则引用和原来的变量值都被修改
//	b = c;
//	cout << "a:" << a << endl;
//	cout << "b:" << b << endl;
//	cout << "c:" << c << endl;
//	return 0;
//}