////desc:vector���������������
//#include<iostream>
//#include<vector>
//
//#include<algorithm>
//using namespace std;
// 
//void MyPrint(int val) {
//	cout << val << endl;
//}
//
//void test01() {	
//	vector <int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ÿһ�����������Լ��ĵ����������������������������е� Ԫ��
//	//v.begin�������ص����������������ָ�������е�һ������
//	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
//	//vector<int>::iterator �õ�vector<int>��������ĵ���������
//
//	//��һ�ֱ�����ʽ
//	/*
//	vector<int> ::iterator pBegin = v.begin();
//	vector<int> ::iterator pEnd = v.end();
//	while (pBegin != pEnd) {
//		cout << * pBegin << endl;
//		pBegin++;
//	}
//    */
//	//�ڶ��ֱ�����ʽ
//	/*
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//   */	
//	//�����ֱ�����ʽ,����STL�ṩ�����㷨
//	for_each(v.begin(),v.end(),MyPrint);  
//}
//int main() {
//	test01();
//	return 0;
//}