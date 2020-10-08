/*
    设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。

    通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/

#include <iostream>
using namespace std;

struct Hero
{

    string name;
    int age;
    string sex;

};

void bubbleSort(Hero hero[], int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (hero[j].age > hero[j + 1].age)
            {
                Hero temp = hero[j];
                hero[j] = hero[j + 1];
                hero[j + 1] = temp;
            }
        }
    }

}

void printInfo(Hero hero[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << "\t姓名：" << hero[i].name << "\t年龄" << hero[i].age << "\t性别" << hero[i].sex << endl;
    }

}

int main()
{
    
    Hero hero[5] = 
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    int len = sizeof(hero) / sizeof(hero[0]);
    bubbleSort(hero, len);
    printInfo(hero, len);

    system("pause");
    return 0;

}


