#include<iostream>
using namespace std;

int main()
{

	// 1. 定义指针
	int a = 10;
	int* p = &a;
	// 2. 打印地址值
	cout << "a的地址为：" << &a << endl;

	cout << "指针p为：" << p << endl;

	// 2. 使用指针
	// 通过解引用的方式来找到指针指向的内存
	*p = 1000;
	cout << "a的值为：" << a << endl;
	cout << "*p的值为：" << *p << endl;

}