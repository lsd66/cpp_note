//#include<iostream>
//using namespace std;
//#include <set>
//
////set容器 查找和统计
//void test01(){
//	set<int> s1;
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	//查找
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end()){
//		cout << "找到了元素 ： " << *pos << endl;
//	}
//	else{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计30的个数
//	int num = s1.count(30);
//	//对于set而言，统计结果，要么是0要么是1
//	cout << "num = " << num << endl;
//}
//int main() {
//	test01();
//	return 0;
//}