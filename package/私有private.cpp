////desc:private属性
// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
// 优点2：对于写权限，我们可以检测数据的有效性
////creator: 20210319
//#include<iostream>
//#include<string>
//using namespace std;
//class Person {
//public:
//	//姓名可读可写
//	//写
//	void setName(string name) {
//		m_name = name;
//	}
//	//读
//	void getName() {
//		cout << "姓名为:" << m_name << endl;
//	}
//
//	//年龄只读  改为可读可写，并且判断数据正确性
//	int  getAge() {
//		//int m_age = 10;
//		return  m_age;
//	}
//	void  setAge(int age) {
//		//可以在这里对数据进行校验
//		if (age > 120 || age < 0) {
//			m_age = 18;
//			cout << "输入的年龄有误，请重新输入" << endl;
//			return; //这里返回了年龄如果不返回就还是121,用return是退出这个程序
//		}
//		m_age = age;
//	}
//
//	//身高只写
//	void setHeight(string height) {
//		m_height = height;
//	}
//
//
//private:
//	string m_name;
//	int m_age;
//	string m_height;
//};
//int main() {
//	Person p;
//	//p.name = "";
//	p.setName("张三");
//	p.getName();
//
//	//p.setAge();
//	p.getAge();
//
//	p.setAge(121);
//	cout << "年龄为：" << p.getAge() << endl;
//
//	p.setHeight("180");
//	//p.getHeight();
//	return 0;
//}