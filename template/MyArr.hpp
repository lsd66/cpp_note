#pragma once
//desc:通用的数组类
#include<iostream>
using namespace std;

template<class T>
class MyArr {


public:

	//有参构造 参数 容量
	MyArr(int capcaity) {
		cout << "MyArr的有参构造函数调用" << endl;
		this->m_capacity = capcaity;
		this->m_size = 0;
		this->pAddress = new T[this->m_capacity];
	}

	//拷贝构造
	MyArr(const MyArr& arr) {
		cout << "MyArr的拷贝构造函数调用" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//this->pAddress = arr.pAddress; 浅拷贝

		//深拷贝
		this->pAddress = new T[arr.m_capacity];
		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator=防止浅拷贝  a=b=c;
	MyArr& operator=(const MyArr& arr) {
		cout << "MyArr的operator=函数调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL) {
			delete[]this->pAddress;
			this->pAddress = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		//深拷贝
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->pAddress = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void Push_Back(const T& val) {
		//判断容量是否等于大小
		if (this->m_capacity == this->m_size) {
			return;
		}
		this->pAddress[this->m_size] = val; //在数组末尾插入数据
		this->m_size++; //更新数组大小
	}


	//尾删法
	void Pop_Back() {
		//让用户访问不到最后一个元素，即为尾删，逻辑删除
		if (this->m_size == 0) {
			return ;
		}
		this->m_size--;
	}

	//通过下标方式访问数组中的元素
	T& operator[](int index) {   //如果这里operator写错了，那么getSize()调用不了
		return this->pAddress[index];
	}

    //返回数组的容量
	int getCapacity() {
		return this->m_capacity;
	}

	//返回数组大小
	int getSize() {
		return this->m_size;
	}

	//析构函数
	~MyArr() {		
		if (this->pAddress!= NULL) {
			cout << "MyArr的析构函数调用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
	//属性
private:
	T * pAddress;//指针指向堆区开辟的真实数组
	int m_size; //数组大小  已经存储了多少数据
	int m_capacity;//数组容量  能够存储多少的数据
};
