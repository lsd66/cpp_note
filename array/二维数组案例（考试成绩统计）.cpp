//desc:考试成绩统计

#include<iostream>
using namespace std;
int main() {
	int scores[3][3] = {
		{100,100,100},
	    {90,50,100},
	    {60,70,80}
	};

	//统计每个人总分
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		//分别去遍历内层循环相加之后输出
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
		}
		cout <<"第"<<i+1<<"个人总分为: "<< sum << endl;
	}

	//统计全部人加起来的总分
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		//分别去遍历内层循环相加之后输出
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
		}
	}
	cout<< "全部人总分为: "<<sum << endl;

	return 0;
}