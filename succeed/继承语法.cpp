////desc:继承的语法 class A:public B;
////A类称为子类或者派生类
////B类称为父类或基类
////派生类中的成员，包含两大部分:
////一类是从基类继承过来的，一类是自己增加的成员
////从基类继承过来的表现其共性，而新增的成员体现了其个性
//creator:  20210322
//#include<iostream>
//using namespace std;
//class BasePage {
//public:
//	//行为
//	void header() {
//		cout << "首页，公开课，登录，注册...公共头部" << endl;
//	}
//	void footer() {
//		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
//	}
//	void left() {
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content() {
//		cout << "Java学科视频" << endl;
//	}
//};
//class Java :public BasePage {
//public:
//	void showJava() {
//		cout << "Java相关" << endl;
//	}
//};
//class Python :public BasePage {
//public:
//	void showPython() {
//		cout << "Python相关" << endl;
//	}
//};
//class Cpp :public BasePage {
//public:
//	void showCpp() {
//		cout << "Cpp相关" << endl;
//	}
//};
//void test01() {
//	Java ja;
//	ja.showJava();
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	
//	Python py;
//	py.showPython();
//	py.header();
//	py.footer();
//	py.left();
//
//	Cpp cpp;
//	cpp.showCpp();
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//}
//int main() {
//	test01();
//	return 0;
//}
