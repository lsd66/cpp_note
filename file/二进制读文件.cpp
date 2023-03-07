////desc:二进制方式读文件
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
//	ifstream ifs;
//	//3，打开文件
//	ifs.open("person.txt", ios::in | ios::binary);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;//打开失败直接return 返回，不继续往下执行
//	}
//	//4.写文件
//	//隐式转换法
//	Person p ;
//	ifs.read((char *)&p,sizeof(Person));
//	cout <<"姓名: "<< p.m_Name << " 年龄：" << p.m_Age << endl;
//	//5.关闭文件
//	ifs.close();
//}
//int main() {
//	test01();
//	return 0;
//}
