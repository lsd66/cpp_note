//#include<iostream>
//using namespace std;
//#include <functional>
//#include <vector>
//#include <algorithm>
//
////内建函数对象_关系仿函数
////大于greator
//class MyCompare{
//public:
//	bool operator()(int v1, int v2){
//		return v1 > v2;
//	}
//};
//void test01(){
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//降序
//	//sort(v.begin(), v.end(), MyCompare());
//	//greator<int>() 内建函数对象
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//	return 0;
//}