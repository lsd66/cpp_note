////desc:二进制方式写文件
////creator:  20210324
//#include<iostream>
//#include<fstream>
//using namespace std;
//class Person {
//public:
//	char m_Name[64];//姓名  用char类型接收字符串，string的有点问题
//	int m_Age;//年龄
//};
//void test01() {
//	//1.包含头文件
//	//2.创建流对象
//	//第2，3可以合并写为：
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	//3，打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//	//4.写文件
//	//隐式转换法
//	Person p = { "张三",18 };
//	ofs.write((const char *)&p,sizeof(Person));
//	//5.关闭文件
//	ofs.close();
//}
//int main() {
//	test01();
//	return 0;
//}
