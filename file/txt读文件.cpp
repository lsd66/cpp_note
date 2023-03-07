////desc:读文件
////creator： 20210324
////包含头文件
//#include<fstream>
//#include<iostream>
//#include<string>
//using namespace std;
//void test01() {
//	//2.创建流对象
//	ifstream ifs;
//	//3.打开文件并判断文件是否打开成功
//	ifs.open("test01.txt",ios::in);
//	//判断是否打开成功，一般加！
//	if (!ifs.is_open()){
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//4.读数据
//	//第一种
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf<<endl;
//	}*/
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}*/
//
//	//第三种
//	/*string buf;
//	while (getline(ifs,buf)) {
//		cout << buf << endl;
//	}*/
//	//第四种
//	char c; //按一个字符读取
//	while ((c=ifs.get())!=EOF) { //eof end of file
//		cout << c;
//
//	}
//	//5.关闭文件
//	ifs.close();
//}
//int main() {
//	test01();
//	return 0;
//}