//desc:实现元素逆置
//creator: 20210318
#include<iostream>
using namespace std;
int main() {
	int arr[5] = {1, 3, 2, 5, 4};
	int len = sizeof(arr) / sizeof(arr[0]);

	//第一种写法

	for (int i = 0; i < len; i++) {
		if (i < len - 1 - i) {
			int temp = arr[len - 1 - i];
			arr[len - 1 - i] = arr[i];
			arr[i] = temp;
		}
	}

	//第二种写法
	//int start = 0;
	//int end = len - 1;
	////用循环进行多次比较
	//while (start < end) {
	//	int temp = arr[end];
	//	arr[end] = arr[start];
	//	arr[start] = temp;
	//	start++;
	//	end--;
	//}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	//对一个数组逆置不可以使用双层循环，因为对应的时间复杂度为n*n,有一对多的情况，这样数据会错乱
	//for (int i = 0; i < len; i++) {
	//	for (int j = len - 1 ; j > 0; j--) {
	//		if (i < j) {
	//			int temp = arr[j];
	//			arr[j] = arr[i];
	//			arr[i] = temp;
	//		}
	//		cout << "第" << i << "次" << endl;
	//		for (int i = 0; i < len; i++) {
	//			cout << arr[i] << " ";
	//		}
	//
	//	}
	//}

	return 0;
}