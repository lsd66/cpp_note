////desc:const���νṹ�壬��ֹ�����
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
////�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//void printStudent(const struct student *p) {  //
//	//p->age = 200;  //����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ�����
//	cout << " ����:" << p->name << "�Ӻ���������:" << p->age << "�Ӻ����� ����:" << p->score << endl;
//}
//int main() {
//	//�����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.age = 20;
//	s.score = 40;
//	
//	printStudent(&s);
//	
//	return 0;
//}