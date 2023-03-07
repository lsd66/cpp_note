////desc:deque容器的构造函数
////creator:
//#include<iostream>
//using namespace std;
//#include<deque>
//void printdeque(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		//*it = 100;
//		cout << "*it" << endl;
//	}
//	cout << endl;
//}
//void test01() {
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printdeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printdeque(d2);
//
//	deque<int>d3(10, 100);
//	printdeque(d3);
//
//	deque<int>d4(d3);
//}
//int main() {
//	test01();
//	return 0;
//}