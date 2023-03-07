////desc:
////关于this指针
////场景：非静态成员函数是所有对象共享的，给不同对象调用，如何区分是哪个对象在调用?
////使用this指针，this指针是隐含在非静态成员中的，谁调用非静态成员函数，this就指向谁
////creator:  20210320
///*
//关于this指针的理解：
//因为在结构体中：
//		//通过指针指向结构体变量 写为：
//		//struct student stu = { "张三",18.100 };
//		//struct student *p = &stu;
//所以： this指针指向 被调用的成员函数所属的对象
//等价于 struct Person * this=& 调用函数的对象； //this是指向对象的指针说明this存放对象的地址
////又因为结构体中：操作符->在结构体中访问结构体属性
////通过指针访问结构体变量中的数据
////cout<<"年龄："<<p->name << endl;
//所以：成员函数中this->age获取这个this指向的对象的age属性
//*/
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	//行为
//	Person(int age) {
//		//this使用场景1:this指针指向 被调用的成员函数所属的对象
//		//age=age;//用this避免变量名字冲突
//		this->age = age;   //获取这个this指向的对象的age属性
//	}
//	//this使用场景2：作为函数的返回值
//	Person& PersonAddAge(Person &p) {
//
//		this->age += p.age;
//		//this是指向p2的指针，而*this指向就是p2这个对象本身
//		return *this;
//	}
//
//	//属性
//	int age;
//};
//void test01() {
//	//这里是没有具体赋值的，因为上面的名字冲突，导致这个返回的还是属性那的age，导致未初始化
//	Person p(18);
//	cout << "p的年龄为：" << p.age << endl;
//}
//
//
//void test02() {
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1);//这个时候p2对象的年龄已经是20了
//	cout << "p2的年龄为：" << p2.age << endl; //20
//	//下面相当于返回的p2又调用了一次add
//	p2.PersonAddAge(p1);//30
//	cout << "p2的年龄为：" << p2.PersonAddAge(p1).age << endl; //40
//
//}
//
//int main() {
//	test02();
//	return 0;
//}





////desc:
///*
//谁调用成员函数，this就指向谁
//this指针的用途：this指针指向被调用的成员函数所属的对象
//1.当形参和成员变量同名时，可用this指针来区分
//2.在类的非静态成员函数中返回对象本身，可使用return* this
//*/
//#include<iostream>
//using namespace std;
//class Person {
//public:
//	Person(int age) {
//		this->age = age;
//	}
//	int age;
//	//下面的引用如果改成值，则调用拷贝构造函数，多次拷贝副本，值不变，是20
//  //改成Person PersonAddd...的话,拷贝函数调用时机:如果类对象在函数中做返回值和参数(值返回和值传递),那么就会调用拷贝构造函数
//  void PersonAddAge(Person &p){
//	Person &  PersonAddAge(Person &p) {
//		this->age += p.age;
//		return *this;
//	}
//};
////1.当形参和成员变量同名时，可用this指针来区分
//  void test01() {
//	Person p1(18);
//	cout << "p1的年龄为:" <<p1.age<< endl;
//}
//
//
////2.在类的非静态成员函数中返回对象本身，可使用return* this
//void test02() {
//	Person p1(10);
//	Person p2(10); 
//  p2.PersonAddAge(p1);
   //链式编程
//	p2.PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄为:"<<p2.age<< endl;
//}
//int main() {
//	test02();
//	return 0;
//}



