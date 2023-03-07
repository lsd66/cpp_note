//#include<iostream>
//using namespace std;
////使用new关键字创建变量和数组
//
//void  test01() {
//	int *p= new int(10);//指针接收new创建的变量内存地址
//	cout << *p << endl;
//	//释放变量
//	delete p;
//}
////使用new关键字创建数组
//void test02() {
//	int *arr = new int[10]; //表示创建了10个元素的数组
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//	//释放数组delete后加[]
//	delete[] arr ;
//}
//int main() {
//	test02();
//	return 0;
//}