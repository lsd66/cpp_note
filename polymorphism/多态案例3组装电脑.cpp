//#include<iostream>
//#include<string>
//using namespace std;
////creator:  20210324
////desc: 这里没有使用虚析构或者纯虚析构，是因为子类IntelCPU这些并没有在堆区创建属性，所以不需要使用
///*
////电脑主要组成部件为CPU*用于计算),显卡(用于显示)，内存条(用于存储)
////将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，有Intel厂商和Lenovo厂商
////创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
////测试时组装三台不同的电脑进行工作
//*/
//class CPU {
//public:
//	//因为虚函数没有实际意义，可以改为纯虚函数，纯虚函数要求子类必须重写
//	virtual void calcute() = 0;
//};
//class GPU {
//public:
//	virtual void show() = 0;
//};
//class Mem {
//public:
//	virtual void storage() = 0;
//};
//
//class IntelCPU :public CPU {
//public:
//	//因为虚函数没有实际意义，可以改为纯虚函数，纯虚函数要求子类必须重写
//	virtual void calcute() {
//		cout << "IntelCPU正在计算" << endl;
//	}
//};
//class IntelGPU :public GPU {
//public:
//	virtual void show() {
//		cout << "IntelGPU正在显示" << endl;
//	}
//};
//class IntelMem :public Mem {
//public:
//	virtual void storage() {
//		cout << "IntelMem正在存储" << endl;
//	}
//};
//
//class AMDCPU :public CPU {
//public:
//	//因为虚函数没有实际意义，可以改为纯虚函数，纯虚函数要求子类必须重写
//	virtual void calcute() {
//		cout << "AMDCPU正在计算" << endl;
//	}
//};
//class AMDGPU :public GPU {
//public:
//	virtual void show() {
//		cout << "AMDGPU正在显示" << endl;
//	}
//};
//class AMDMem :public Mem {
//public:
//	virtual void storage() {
//		cout << "AMDMem正在存储" << endl;
//	}
//};
//
//class Computer {
//public:
//	//利用构造函数给程序赋初值，属性是指针，需要把指针传进来
//	//这些对象不是string类型的
//	//Computer(string *cpu, string *gpu, string *mem) {
//	Computer(CPU *cpu, GPU *gpu, Mem *mem) {
//		m_cpu = cpu;
//		m_gpu = gpu;
//		m_mem = mem;
//	}
//	void PCWork() {
//		//子类对象调用局部函数
//		m_cpu->calcute();
//		m_gpu->show();
//		m_mem->storage();
//	}
//	//因为delete会调用Computer的析构函数
//	//在这里可以把之前堆区创建的三个零件指针也清理
//	~Computer() {
//		if (m_cpu != NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_gpu != NULL) {
//			delete m_gpu;
//			m_gpu = NULL;
//		}
//		if (m_mem != NULL) {
//			delete m_mem;
//			m_mem = NULL;
//		}
//
//	}
//	//属性不是string类型的
//	//不用引用是引用必须要初始化,CPU是抽象类，无法声明对象。用指针是因为1.只要4个字节，2，方便链接(指向实例的子类)
//	//抽象类（含纯虚函数的类)不能实例化对象，但是可以用它指向子类对象（多态）
//	CPU *m_cpu; //抽象类 子类对象指针
//	GPU *m_gpu;
//	Mem *m_mem;
//};
//void test01() {
//	//创建对象，需要给属性赋初值，走构造函数
//	cout << "第一台电脑:" << endl;
//	//父类指针指向子类对象
//	CPU *cpu1 = new IntelCPU;
//	GPU *gpu1 = new IntelGPU;
//	Mem *mem1 = new IntelMem;
//	Computer *computer1 = new Computer(cpu1, gpu1, mem1);
//	//调用工作的函数
//	computer1->PCWork();
//	delete computer1;//这个delete会调用Computer的析构函数
//
//	cout << "第二台电脑:" << endl;
//	//父类指针指向子类对象
//	Computer *computer2 = new Computer(new AMDCPU,new AMDGPU,new AMDMem);
//	//调用工作的函数
//	computer2->PCWork();
//	delete computer2;//这个delete会调用Computer的析构函数
//
//}
//int main() {
//	test01();
//	return 0;
//}