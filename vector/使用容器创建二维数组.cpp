////desc:二维数组两种定义方法(结果一样)
//#include <string.h>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N = 5, M = 6;
//	vector<vector<int>> obj(N);  //定义二维动态数组大小5行 
//	for (int i = 0; i < obj.size(); i++) { //动态二维数组为5行六列  值全为0,默认？
//		obj[i].resize(M);   //设置大小  
//	}
//
//	for (int i = 0; i < obj.size(); i++) { //输出二维动态数组
//		for (int j = 0; j < obj[i].size(); j++) {
//			cout << obj[i][j] << "";
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//
//#include <string.h>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N = 5, M = 6;
//	vector<vector<int> >obj(N, vector<int>(M)); //定义二维数组5行6列
//
//	for (int i = 0; i < obj.size(); i++) {//输出二维动态数组
//		for (int j = 0; j < obj[i].size(); j++) {
//			cout << obj[i][j] << " ";
//		}
//		cout << "\n";
//
//	}
//	return 0;
//}
//
