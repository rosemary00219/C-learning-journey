// 结构体定义和使用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

struct student 
{
	// 成员列表
	// 姓名
	string name;
	// 年龄
	int age;
	// 分数
	int scor;
};

int main()
{
	student s1;
	s1.name = "tty";
	s1.age = 20;
	s1.scor = 100;
	cout << s1.name << s1.age;
}

