////desc:vector容器的容量与大小操作
////creator:
//#include<iostream>
//using namespace std;
//#include<vector>
//void printvector(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	if (v1.empty()) { //为真 代表容器为空
//		cout << "v1为空";
//	}
//	else {
//		cout << "v1不为空";
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15,100);//利用重载版本，可以指定默认填充值，参数2
//	printvector(v1);//如果重新指定的比原来长了，默认用0填充新的位置
//
//	v1.resize(5);//如果重新指定的比原来的短了，超出部分会删除掉
//	printvector(v1);
//}
//int main() {
//	test01();
//	return 0;
//}