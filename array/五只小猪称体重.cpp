//desc:五只小猪称体重
#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 300,350,200,400,250 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] < arr[j]) {
				continue;
			}
			else {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	//输出排序之后的最后一个元素就是最大的那个
	cout << arr[4] << endl;
	return 0;
}