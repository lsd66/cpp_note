//#include<iostream>
////"" 不要用<>
//#include"Bubble.h"
//int main() {
//	//2.创建结构体数组
//	struct hero heroArray[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"},
//	};
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//	cout << "输出下原来的数据" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << "姓名：" << heroArray[i].name
//			<< "年龄：" << heroArray[i].age
//			<< "性别：" << heroArray[i].sex << endl;
//	}
//	//BubbleSort( &heroArray[5], len);//这里如果传数组最后一个的地址，则有一个空指针
//	//结构体传入函数中
//	BubbleSort(heroArray, len);
//	cout << "输出下排序后的数据" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << "姓名：" << heroArray[i].name
//			<< "年龄：" << heroArray[i].age
//			<< "性别：" << heroArray[i].sex << endl;
//	}
//	return 0;
//}
//
//
