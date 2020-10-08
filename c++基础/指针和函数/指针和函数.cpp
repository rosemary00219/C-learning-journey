// 指针和函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
// 实现两个数字交换
void swap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}
void swap02(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main()
{
    // 值传递 形参并不会改变实参
    int a = 1;
    int b = 2;
    swap01(a,b);
    std::cout << a << endl;
    std::cout << b << endl;
    // 地址传递 形参的改变会导致实参的改变
    swap02(&a, &b);
    std::cout << a << endl;
    std::cout << b << endl;;
}
