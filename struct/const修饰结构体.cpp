////desc:const修饰结构体，防止误操作
////creat:  20210316
////input:
////output:
//#include <iostream>
//#include<string>
//using namespace std;
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
////将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//void printStudent(const struct student *p) {  //
//	//p->age = 200;  //加入const之后，一旦有修改的操作就会报错，可以防止误操作
//	cout << " 姓名:" << p->name << "子函数中年龄:" << p->age << "子函数中 分数:" << p->score << endl;
//}
//int main() {
//	//创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 40;
//	
//	printStudent(&s);
//	
//	return 0;
//}