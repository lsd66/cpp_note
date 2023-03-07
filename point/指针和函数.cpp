////desc:指针和函数
////creator: 20210318
////input:
////output:
////debug:
//#include<iostream>
//using namespace std;
//void swap01(int a,int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap02(int *a, int *b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//	//1.值传递
//	int a = 1, b = 2;
//	cout << "开始时候a，b的值" << a << "," << b << endl;
//	swap01(a,b);
//	cout << "值传递之后a，b的值" << a << "," << b << endl;
//	//2.地址传递
//	swap02(&a, &b);
//	cout << "地址传递之后a，b的值" << a << "," << b << endl;
//	return 0;
//}