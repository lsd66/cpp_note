////desc:�ṹ����Ϊ���������д��ݣ����ݷ�ʽ�����֣�ֵ���ݺ͵�ַ����
////creat:  20210316
////input:
////output:
////debug:
//#include <iostream>
//#include<string>
//using namespace std;
////ѧ���ṹ�嶨��
//struct student {
//	string name;
//	int age;
//	int score;
//};
//
////��ӡѧ����Ϣ����
//////��������޸��������е�������ֵ���ݣ���֮���õ�ַ����
////1.ֵ���ݣ��β��κεĸı䲻���޸�ʵ�ε�ֵ���ββ�������ʵ�Σ�
//void printStudent1(struct student s) {
//	s.age = 100;
//	cout << "�Ӻ����� ����:" << s.name << "�Ӻ���������:" << s.age << "�Ӻ����� ����:" << s.score << endl;
//}
////2.��ַ����
//void printStudent2(struct student *p) {
//	p->age = 200;//����ᵼ���Ӻ�����main�����������ݶ����޸�  
//	cout << "�Ӻ���2�� ����:" << p->name << "�Ӻ���������:" << p->age << "�Ӻ����� ����:" << p->score << endl;
//}
//int main() {
//	//�����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.age = 20;
//	s.score = 40;
//	cout << "main������ ����:" << s.name << "�Ӻ���������:" << s.age << "�Ӻ����� ����:" << s.score << endl;
//	printStudent1(s);
//	//printStudent2(&s);
//	return 0;
//}