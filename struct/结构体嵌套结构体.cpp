////desc:结构体嵌套结构体,作用:结构体中的成员可以是另一个结构体
////creat:  20210316
////input:
////output:
////debug:
//
//#include <iostream>
//#include<string>
//using namespace std;
////学生结构体定义
//struct student {
//	string name;
//	int age;
//	int score;
//};
////老师结构体定义
//struct teacher {
//	//属性也即是成员列表
//	int id;
//	string name;
//	int age;
//	struct student stu;  //子结构体 学生
//};
//int main() {
//	struct teacher t;
//	t.id = 10000;
//	t.name = "老魏";
//	t.age = 30;
//	t.stu.name = "小李";
//	t.stu.age = 20;
//	t.stu.score = 50;
//	cout << "老师姓名：" << t.name << "老师编号：" << t.id << "老师年龄:" << t.age <<
//		"老师辅导的学生姓名为：" << t.stu.name << "学生年龄：" << t.stu.age <<
//		"学生考试分数为:" << t.stu.score << endl;
//	return 0;
//}