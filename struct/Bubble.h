#include<string>
using namespace std;


//头文件给StructExample2使用
//1.创建结构体
struct hero {
	string name;
	int age;
	string sex;
};
//3.利用冒泡进行排序 (方法放外层)
                //结构体数组做函数参数
void BubbleSort(struct hero heroArray[], int len) {
	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len-i-1; j++) {
			//数组元素交换  按年龄从小到大
			if (heroArray[j].age > heroArray[j+1].age) {
				struct hero  temp = heroArray[j+1];
				heroArray[j] = heroArray[j+1];
				heroArray[j+1] = temp;
			}
		}
	}
}