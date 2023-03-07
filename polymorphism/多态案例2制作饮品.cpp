////desc：多态案例 制作饮品
///*
//案例描述：制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
//*/
////creator:  20210323
//#include<iostream>
//using namespace std;
//class DrinkBase {
//public:
//	//行为
//	//煮水
//	virtual void BoilingWater() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中 Pour into the cup
//	virtual void PourCup() = 0;
//	//加入辅料 即纯虚函数
//	virtual void AddMaterial() = 0;
//
//	//类里面集中实现行为的函数，给类外直接调用这个成员函数
//	void doDrink() {
//		BoilingWater();
//		Brew();
//		PourCup();
//		AddMaterial();
//	}
//};
////制作咖啡
//class Coffee :public DrinkBase {
//public:
//	//重写纯虚函数
//	//煮水
//	virtual void BoilingWater() {
//		cout << "煮农夫山泉" << endl;
//	}
//	//冲泡
//	 void Brew() {
//		cout << "冲泡咖啡粉" << endl;
//	}
//	 virtual void PourCup() {
//		 cout << "导入杯中" << endl;
//	 }
//	//加辅料
//	 void AddMaterial() {
//		cout << "加入牛奶和糖" << endl;
//	}
//};
////制作茶
//class Tea :public DrinkBase {
//public:
//	//重写纯虚函数
//	//煮水
//	virtual void BoilingWater() {
//		cout << "煮百岁山" << endl;
//	}
//	//冲泡
//	void Brew() {
//		cout << "冲泡茶叶" << endl;
//	}
//	//倒入杯中 Pour into the cup
//	virtual void PourCup() {
//		cout << "导入杯中" << endl;
//	}
//	//加材料
//	void AddMaterial() {
//		cout << "加入柠檬" << endl;
//	}
//};
//// 多个函数调用集合在一个类里面实现，全部调用父类的虚函数
////全局函数实现
///*
//// 多态使用条件：父类指针或引用指向子类对象
//void doDrink(DrinkBase *db) {
//	db->BoilingWater();
//	db->Brew();
//	db->PourCup();
//	db->AddMaterial();
//}*/
////类里面实现局部函数的集合，在类外调用局部函数
//// 多态使用条件：父类指针或引用指向子类对象
////指针
//void MakeDrink(DrinkBase *db) { //DrinkBase *db=new Coffee
//	db->doDrink();
//	delete db; //堆区数据手动开辟，手动释放
//}
//void test01() {
//	cout << "制作咖啡的教程： " << endl;
//	MakeDrink(new Coffee);
//
//	cout << endl;
//
//	cout << "制作茶的教程： " << endl;
//	MakeDrink(new Tea);
//}
//
//
//// 多态使用条件：父类指针或引用指向子类对象
////引用
//void MakeDrink2(DrinkBase &db) { //DrinkBase *db=new Coffee
//	db.doDrink();
//}
//void test02() {
//	cout << "制作咖啡的教程： " << endl;
//	Coffee c;
//	MakeDrink2(c);
//
//	cout << endl;
//
//	cout << "制作茶的教程： " << endl;
//	Tea t;
//	MakeDrink2(t);
//}
//
//int main() {
//	//test01();
//	test02();
//	return 0;
//}