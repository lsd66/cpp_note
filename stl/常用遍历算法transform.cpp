//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
////常用遍历算法transform 
//
//class Transform {
//public:
//	int operator()(int v) {
//		return v;
//	}
//};
//
//class MyPrint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	vector<int>vtarget;//目标容器
//	vtarget.resize(v.size());//目标容器，需要提前开辟空间
//
//	transform(v.begin(), v.end(), vtarget.begin(), Transform());
//	for_each(vtarget.begin(), vtarget.end(), MyPrint());
//}
//int main() {
//	test01();
//	return 0;
//}