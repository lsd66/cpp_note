#include<string>
using namespace std;


//ͷ�ļ���StructExample2ʹ��
//1.�����ṹ��
struct hero {
	string name;
	int age;
	string sex;
};
//3.����ð�ݽ������� (���������)
                //�ṹ����������������
void BubbleSort(struct hero heroArray[], int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-i-1; j++) {
			//����Ԫ�ؽ���  �������С����
			if (heroArray[j].age > heroArray[j+1].age) {
				struct hero  temp = heroArray[j+1];
				heroArray[j] = heroArray[j+1];
				heroArray[j+1] = temp;
			}
		}
	}
}