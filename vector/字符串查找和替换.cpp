////desc:字符串查找和替换
////creator:  20210329
//#include<iostream>
//#include<string>
//using namespace std;
//
////1.查找
//void test01() {
//	//find 从左往右找
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");//返回第一次出现位置
//	cout << "pos=" << pos << endl;
//
//	//rfind  reverse find 从右往左查，但是位置从左往右算
//	pos = str1.rfind("de");  //返回最后一次
//	cout << "pos=" << pos << endl;
//}
//
////2.替换
//void test02() {
//	string str1 = "abcdefg"; //a1111efg
//	str1.replace(1, 3, "1111");
//	cout << "str1=" << str1 << endl;
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}