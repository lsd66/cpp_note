////desc:结构体应用1
////creat:  20210316
////input:
////output:
////debug:
//
//#include <iostream>
//#include<string>
//#include<ctime>
//
//using namespace std;
////学生结构体
//struct student {
//	string name;
//	int scores;
//};
////老师结构体
//struct teacher {
//	string name;
//	struct student sarr[5];//创建学生结构体数组
//};
//void setValue(struct teacher tarr[],struct student sarr[]) {
//	//区分
//	string str = "12345";
//	for (int i = 0; i < 3; i++) {
//		//拼接
//		tarr[i].name = "teacher_";
//		tarr[i].name += str[i];
//		for (int j = 0; j < 5; j++) {
//			//第i个老师的第j个学生的信息赋值
//			tarr[i].sarr[j].name = "student_";
//			tarr[i].sarr[j].name += str[j];
//			//随机
//			int random = rand() % 61 +40; //40~100
//			tarr[i].sarr[j].scores = random;
//			}
//		}
//	}
//void showValue(struct teacher tarr[], struct student sarr[]) {
//	for (int i = 0; i < 3; i++) {
//		cout << "老师:" << tarr[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "学生:" << tarr[i].sarr[j].name 
//				<< "分数:" << tarr[i].sarr[j].scores<<endl;
//		}
//	}
//}
//int main() {
//	struct teacher tarr[3];
//	struct student sarr[5];
//	//随机数(系统时间)
//	srand((unsigned int)time(NULL));
//	//函数调用
//	setValue(tarr, sarr);
//	showValue(tarr, sarr);
//	return 0;
//}