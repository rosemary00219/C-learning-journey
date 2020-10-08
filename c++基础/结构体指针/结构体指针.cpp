// 结构体指针.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct student
{

    string name;
    int age;
    int score;

};
int main()
{
    
    // 1. 创建结构体变量
    student s1 = { "jack", 19, 80 };
    // 2. 让指针指向结构体变量
    student* p = &s1;
    // 3. 通过指针访问结构体成员变量
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;


}
