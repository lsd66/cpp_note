////desc:多态初识
////creator:  20210323
//#include<iostream>
//using namespace std;
//class Animal {
//public:
//	//行为
//	//如果要实现动物在说话，加virtual.称这个函数为虚函数
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了
//	virtual void speak() {
//		cout << "Aniaml在说话" << endl;
//	}
//};
//class Cat :public Animal {
//public:
//	//行为
//	//重写： 函数返回值类型，函数名，参数列表，完全相同
//	void  speak() {
//		cout << "Cat在说话" << endl;
//	}
//};
//class Dog :public Animal {
//public:
//	//行为
//	void speak() {
//		cout << "Dog在说话" << endl;
//	}
//};
//
////执行说话的函数
////地址早绑定，在编译阶段确定函数地址
////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//
////动态多态满足关系
////1.有继承关系
////2.子类重写父类的虚函数
//
////动态多态使用
////父类的指针或者引用，指向子类对象
//void doSpeak(Animal &animal) { //Animal &animal =cat;
//	animal.speak();
//}
//void test01() {
//	Cat c;
//	doSpeak(c);
//	Dog d;
//	doSpeak(d); //再加一个狗对象的函数调用doSpeak(),输出狗在说话
//}
//int main() {
//	//如果doSpeak(c)，这里是动物在说话
//	//如果speak()变成虚函数，则这里是猫在说话
//	test01(); 
//	return 0;
//}