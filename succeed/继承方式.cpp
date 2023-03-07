////desc:继承方式
///*
//a.公共继承:原来的是什么权限继承之后就是什么权限
//b.保护继承:除private之外的，继承之后都是protected权限
//c.私有继承：除private之外继承之后都是private权限
//总结：private不管怎么继承都是不可访问，但是的确继承了(注意类外)
//*/
////creator:20210322
//
//#include<iostream>
//using namespace std;
//class Base {
//	//属性
//public:
//	int m_A;  //类内外都可以
//protected:
//	int m_B;  //类内可以，类外不可以
//private:
//	int m_C;  //类内可以，类外不可以
//};
//
////公共继承
//class Son1 :public Base {
//	void showValue() {
//		m_A = 10; //公共继承，原来的public 继承之后为public
//		m_B = 20; //公共继承，原来的protected 继承之后为protected
//		//m_C = 30; //公共继承，原来的private 继承之后为private
//	}
//};
//void test01() {
//	Son1 son1;
//	son1.m_A = 100;   //public
//	//son1.m_B = 200; //protected
//	//son1.m_C=20;    //private 
//}
//
////保护继承
//class Son2 :protected Base {
//	void showValue() {
//		m_A = 10;//保护继承，原来的public 继承之后为protected
//		m_B = 20;//保护继承，原来的protected 继承之后为protected
//		//m_C = 30;//保护继承，原来的private 继承之后为private
//	}
//};
//void test02() {
//	Son2 son2;
//	//son2.m_A = 10;  //protected
//	//son2.m_B = 200; //protected
//	//son2.m_C=20;   //private 
//}
//class Son3 :private Base {
//	void showValue() {
//		m_A = 10; //私有继承，原来的public 继承之后为private 
//		m_B = 20; //私有继承，原来的protected 继承之后为private 
//		//m_C= 20;//私有继承，原来的private  继承之后为private 
//	}
//};
//void test03() {
//	Son3 son3;
//	//son3.m_A = 100;//可能是protected或者private
//	//son3.m_B = 200;//可能是protected或者private
//	//son3.m_C = 200;//private
//}
//class GrandSon3:public Son3{
//	//m_A = 10; //证明是private
//
//};
//int main() {
//	return 0;
//}