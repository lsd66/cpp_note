//#include<iostream>
//using namespace std; 
//#include <vector>
//#include <algorithm>
//
////1.一元谓词
//struct GreaterFive {
//	bool operator()(int val) {
//		return val > 5;
//	}
//};
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++){
//		v.push_back(i);
//	}
//
//	//查找容器中，有没有大于5的数字
//	//GreateFive() 匿名函数对象
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end()) {
//		cout << "没找到!" << endl;
//	}
//	else {
//		cout << "找到:" << *it << endl;
//	}
//}
//
//int main() {
//	test01();
//	return 0;
//}