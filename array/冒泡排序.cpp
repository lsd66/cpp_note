//desc:冒泡排序
#include<iostream>
using namespace std;
int main() {
	int arr[]= { 4,2,8,0,5,7,1,3,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "元素原来的排序:" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] ;
	}
	cout << endl;
	//外层循环为排序总轮数
	for (int i = 1; i < len; i++) {
		//内层循环是每轮对比次数
		for (int j = 0; j <len-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		cout << "第" << i<< "次序列为:" << endl;
		cout << "元素冒泡排序之后的顺序:" << endl;
		for (int k = 0; k < len;k++) {
			cout << arr[k] ;
		}
		cout << endl;
	}
	/*cout << "元素冒泡排序之后的顺序:" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] ;
	}*/
	//
	return 0;
}