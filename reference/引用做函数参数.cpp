//#include<iostream>
//using namespace std;
////desc:实参与形参
////三种不同的传递方式
////值传递
//void swap01(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
////地址传递
//void swap02(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////引用传递
//void swap03(int &a,int &b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main() {
//	int a = 1, b = 2;
//	//swap01(a,b);//值传递,不改变数据。形参任何的改变不会修改实参的值（形参不会修饰实参）
//	//swap02(&a, &b); //地址传递，改变数据。形参会修饰实参
//	swap03(a, b);//引用传递，改变数据。形参会修饰实参
//	cout << "a:" <<a<< endl;  
//	cout << "b:" << b << endl;
//	return 0;
//}
