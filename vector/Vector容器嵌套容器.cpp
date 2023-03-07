////desc:容器中嵌套容器
//#include <iostream>
//using namespace std;
//#include<vector>
//void test01(){
//	//创建容器
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	//向小容器中追加元素
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i+1);
//		v2.push_back(i+2);
//		v3.push_back(i+3);
//		v4.push_back(i+4);
//	}
//	//向大容器中追加元素
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);

//   //通过大容器把所有的数据遍历一遍
//	//利用迭代器输出容器中的元素
//	for (vector<vector <int>> ::iterator it = v.begin(); it != v.end(); it++) {
//		//v是容器，*it也是容器，容器名字.begin()    ,vi指向容器
//		for (vector<int>::iterator vi = (*it).begin(); vi != (*it).end(); vi++) {  
//			cout << *vi << " ";
//		}
//		cout << endl;
//	}
//};
//int main(){
//	test01();
//	return 0;
//}