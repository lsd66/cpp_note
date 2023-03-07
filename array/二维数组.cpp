//desc:二维数组
//creator: 20210318
//input:
//output:
//debug:
#include<iostream>
using namespace std;

int main() {
	int arr[5][2] = { {0,0},{1,2},{2,4}, {3,6},{4,8} };
	//外层循环打印行数，内层循环打印列数
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "arr[" << i << "][" << j << "]:";
			cout << arr[i][j] << endl;
		}
	}

	//二维数组查看行数
	cout << "二维数组行数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
	//二维数组查看列数:
	cout << "二维数组列数为:" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//二维数组的首地址
	cout << "二维数组首地址为:" << (int )arr << endl;
	//二维数组第一行的首地址
	cout << "二维数组第一行首地址为:" << (int)arr[0] << endl;
	//二维数组第一列的首地址
	cout << "二维数组第0行第1列首地址为:" << (int)&arr[0][1] << endl;
	return 0;
}