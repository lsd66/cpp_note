//desc:
/*
案例描述:实现一个通用的数组类 ，要求如下:
可以对内置数据类型以及自定义数据类型的数据进行存储
将数组中的数据存储到堆区
构造函数中可以传入数组的容量
提供对应的拷贝构造函数以及operator=防止浅拷贝问题
提供尾插法和尾删法对数组中的数据进行增加和删除
可以通过下标的方式访问数组的元素
可以获取数组中当前元素个数和数组的容量
*/
//creator:
#include<iostream>
using namespace std;
#include<string>

#include"MyArr.hpp"

void printIntArr(MyArr <int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}

void test01() {
	MyArr <int> arr1(5);
	for (int i = 0; i < 5; i++) {
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout <<"arr1的打印输出为:"<< endl;
	printIntArr(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity()<<endl;
	cout << "arr1的大小为： "<< arr1.getSize()<<endl;

	MyArr<int> arr2(arr1);
	cout << "arr2的打印输出为:" << endl;
	printIntArr(arr2);

	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后：" << endl;
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为： " << arr2.getSize() << endl;

	/*
	MyArr<int> arr2(arr1);
	MyArr<int> arr3(100);
	arr3 = arr1;
	*/
}

//测试自定义数据类型
class Person {
public:
	Person() {}
	Person(string name, int age) {
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};

//如果这个函数放在test02()下，会报错找不到标识符
void printPersonArr(MyArr <Person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "姓名：" << arr[i].m_name << " 年龄： " << arr[i].m_age << endl;
	}
}

void test02() {
	MyArr <Person> arr(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//将数组插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	
	//输出数组
	printPersonArr(arr);
	//输出容量
	cout << "arr的容量：" << arr.getCapacity() << endl;
	//输出大小
	cout << "arr的大小：" << arr.getSize() << endl;
}

int main() {
	//test01();
	test02();
	return 0;
}