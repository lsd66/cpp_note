////desc:菱形继承或者说钻石继承
////总结：
////1.菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费，以及毫无意义
////2.利用虚继承可以解决菱形继承问题
////creator:  20210322
//#include<iostream>
//using namespace std;
//class Animal {
//public:
//	//属性
//	int m_Age; //子类都继承这个属性，来验证菱形继承
//};
////利用虚继承 解决菱形继承的问题
////继承:这个后面加virtual 变为虚继承
////Animal类称为 虚基类
//class Sheep :virtual public Animal { 
//};
//class Tuo :virtual public Animal {
//};
//class SheepTuo :public Sheep,public Tuo {
//};
//void test01() {
//	SheepTuo st;
//	//当菱形继承，两个父类拥有相同数据，需要加以作用域区分
//	st.Sheep::m_Age = 24;
//	st.Tuo::m_Age = 14;
//	cout << "Sheep的m_Age: " << st.Sheep::m_Age << endl;
//	cout << "Tuo的m_Age: " << st.Tuo::m_Age << endl;
//	cout << "SheepTuo的m_Age: " << st.m_Age << endl;
//
//	//这份数据我们指定，只要有一份就可以，菱形继承导致数据有两份，资源浪费
//	
//}
//int main() {
//	test01();
//	return 0;
//}