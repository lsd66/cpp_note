////desc:模板案例1
///*
//利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//排序规则从大到小，排序算法为简单选择排序
//分别利用char数组和int数组进行测试
//*/
////creator:  20210328
//#include<iostream>
//using namespace std;
//#include<string.h>
////交换模板
//template<class T>
//void MySwap(T &a,T &b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
////排序模板
//template<class T>
//void MySort(T arr[],int len){ //数组名就是地址
////void MySort(T *arr, int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;//认定最大值的下标
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] > arr[j]) {  //升序
//				//更新最大值的下标
//				max = j;				
//			}
//		}
//		if (max != i) {
//			//交换
//			MySwap(arr[max], arr[i]);
//		}		
//	}
//}
////打印模板
//template<class T>
//void PrintArr(T *arr,int len) {
//	for (int i = 0; i < len; i++){
//		cout << arr[i] ;
//	}
//}
//
//void test01() {
//	//char charArr[] = { 'b','f','c','e','a','d' }; //字符数组的定义方式
//	char charArr[]="bfcead";
//	//int len = sizeof(charArr) / sizeof(charArr[0]); //字符数组求长度
//	int len = strlen(charArr);  //这个在加一个#include<string.h>
//	cout << len << endl;
//	MySort(charArr, len);
//	PrintArr(charArr,len);
//}
//
//void test02() {
//	int intArr[] = { 3,2,4,1,8,7,6,9,5 };
//	int len = sizeof(intArr) / sizeof(intArr[0]);
//	MySort(intArr, len);
//	PrintArr(intArr, len);
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}