////desc：设计立方体类，求出立方体的面积和体积
////分别用全局函数和成员函数判断这两个立方体是否相等
//#include<iostream>
//using namespace std;
////立方体类
//class Cube {
//public:
//	void setHeight(int height) {
//		m_height = height;
//	}
//	void setWidth(int width) {
//		m_width = width;
//	}
//	void setLongth(int longth) {
//		m_longth = longth;
//	}
//	//表面积
//	int   getCubearea() {	
//		m_area = 2 * (m_height*m_longth + m_height * m_width + m_width * m_longth);
//		return m_area;
//	}
//	//体积
//	int  getCubeVolume() {
//		m_volume= m_height * m_width*m_longth;
//		return  m_volume;
//	}
//
//	//成员函数判断两个立方体是否相等
//	//传入一个立方体的信息与已有的数据进行对比
//	//这里用的地址传递，其实引用也是可以的。
//	void Compare(Cube *c) {
//		if ((c->getCubearea() == m_area) && (c->getCubeVolume() == c->m_volume)) {
//			cout << "这两个立方体相等" << endl;
//		}
//		else {
//			cout << "这两个立方体不相等" << endl;
//		}
//	}
//	
//private:
//	int  m_height; //高
//	int  m_width;  //宽
//	int  m_longth; //长
//	//新增属性,用来比较
//	int  m_area;
//	int  m_volume;
//};
//
////全局函数比较两个立方体是否相等
////这里用的地址传递，其实引用也是可以的。
//void compareTwoCube(Cube *c1,Cube *c2) {
//	if ((c1->getCubearea() == c2->getCubearea()) && (c1 ->getCubeVolume() == c2->getCubeVolume())) {
//		cout << "这两个立方体相等" << endl;
//	}
//	else{
//		cout << "这两个立方体不相等" << endl;
//	}
//}
//int main() {
//	Cube c,c1,c2;
//	c1.setHeight(3);
//	c1.setLongth(4);
//	c1.setWidth(5);
//
//	c2.setHeight(1);
//	c2.setLongth(12);
//	c2.setWidth(5);
//	//调用全局函数
//	compareTwoCube(&c1, &c2);
//	
//	//调用局部函数
//	//利用一个对象得到了数据，再传入一个数据进行对比
//	c1.Compare(&c2);
//		
//	//cout << "表面积为:" << c.getCubearea() << endl;
//	//cout << "体积为:" << c.getCubeVolume() << endl;
//	
//	return 0;
//}