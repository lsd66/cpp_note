////desc:结构体作为参数向函数中传递，传递方式有两种，值传递和地址传递
////creat:  20210316
////input:
////output:
////debug:
//#include <iostream>
//#include<string>
//using namespace std;
////学生结构体定义
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
////打印学生信息函数
//////如果不想修改主函数中的数据用值传递，反之，用地址传递
////1.值传递，形参任何的改变不会修改实参的值（形参不会修饰实参）
//void printStudent1(struct student s) {
//	s.age = 100;
//	cout << "子函数中 姓名:" << s.name << "子函数中年龄:" << s.age << "子函数中 分数:" << s.score << endl;
//}
////2.地址传递
//void printStudent2(struct student *p) {
//	p->age = 200;//这里会导致子函数和main含函数的数据都会修改  
//	cout << "子函数2中 姓名:" << p->name << "子函数中年龄:" << p->age << "子函数中 分数:" << p->score << endl;
//}
//int main() {
//	//创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 40;
//	cout << "main函数中 姓名:" << s.name << "子函数中年龄:" << s.age << "子函数中 分数:" << s.score << endl;
//	printStudent1(s);
//	//printStudent2(&s);
//	return 0;
//}