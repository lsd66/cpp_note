////desc:�ṹ��Ӧ��1
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
////ѧ���ṹ��
//struct student {
//	string name;
//	int scores;
//};
////��ʦ�ṹ��
//struct teacher {
//	string name;
//	struct student sarr[5];//����ѧ���ṹ������
//};
//void setValue(struct teacher tarr[],struct student sarr[]) {
//	//����
//	string str = "12345";
//	for (int i = 0; i < 3; i++) {
//		//ƴ��
//		tarr[i].name = "teacher_";
//		tarr[i].name += str[i];
//		for (int j = 0; j < 5; j++) {
//			//��i����ʦ�ĵ�j��ѧ������Ϣ��ֵ
//			tarr[i].sarr[j].name = "student_";
//			tarr[i].sarr[j].name += str[j];
//			//���
//			int random = rand() % 61 +40; //40~100
//			tarr[i].sarr[j].scores = random;
//			}
//		}
//	}
//void showValue(struct teacher tarr[], struct student sarr[]) {
//	for (int i = 0; i < 3; i++) {
//		cout << "��ʦ:" << tarr[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "ѧ��:" << tarr[i].sarr[j].name 
//				<< "����:" << tarr[i].sarr[j].scores<<endl;
//		}
//	}
//}
//int main() {
//	struct teacher tarr[3];
//	struct student sarr[5];
//	//�����(ϵͳʱ��)
//	srand((unsigned int)time(NULL));
//	//��������
//	setValue(tarr, sarr);
//	showValue(tarr, sarr);
//	return 0;
//}