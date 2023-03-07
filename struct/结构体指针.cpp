////desc:结构体指针的作用：利用指针访问结构体中的成员，利用操作符->可以通过结构体指针访问结构体属性
////creat:  20210316
////input:
////output:
////debug:
//
//#include <iostream>
//#include<string>
//using namespace std;
////结构体定义
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//	//创建学生结构体变量
//	struct student stu = { "张三",18.100 };
//	//通过指针指向结构体变量
//	struct student *p = &stu;
//	//通过指针访问结构体变量中的数据
//	cout<<"年龄："<<p->name << endl;
//	return 0;
//}