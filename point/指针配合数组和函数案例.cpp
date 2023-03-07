////desc：封装一个函数，利用冒泡排序，实现对整型数组的升序列表
////creator:20210318
//#include<iostream>
//using namespace std;
////利用数组的冒泡排序函数
//void BubbleSort(int * arr,int len) {
//	//外层是需要比较总轮数
//	for (int i = 0; i < len-1; i++) {
//		//内层是每次比较的次数
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				//要求升序
//				int temp = arr[j ];
//				arr[j ] = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	int *p = arr;
//	for (int i = 0; i < len; i++) {
//		cout << *p;
//		*p++;
//	}
//}
//int main() {
//	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	cout << "原先的顺序:" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << arr[i];
//	}	
//	cout << endl;
//	cout << "后来的顺序:" << endl;
//	BubbleSort(arr, len);
//	return 0l;
//}
