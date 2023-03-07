////desc:结构体数组
////creat:  20210316
////input:
////output:cout
////debug:
//
//#include<iostream>
//#include<string>
//using namespace std;
////1.结构体定义
//struct Student {
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	//2.创建一个结构体的数组
//	struct Student stuarr[3]{
//		{"张三",20,30},
//		{"李四",50,20},
//		{"王五",90,10}
//	};
////3.给结构体数组中的元素赋值
//	stuarr[2].name = "孙六";
//	stuarr[2].age = 30;
//	stuarr[2].score= 70;
//
////4.遍历结构体数组
//	for (int i = 0; i < 3; i++) {
//		cout << "姓名:"<<stuarr[i].name << "年龄:" << stuarr[i].age << "分数:"<<stuarr[i].score << endl;
//	}
//	return 0;
//}