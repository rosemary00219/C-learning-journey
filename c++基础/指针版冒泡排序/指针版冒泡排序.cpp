// 指针版冒泡排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void bubleSort(int* arr, int len)
{
	

	for (int i = 0; i < len - 1; i++)
	{

		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

}

void printArray(int* arr, int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
		//arr++;
	}

}

int main()
{
   
	int arr[3] = { 2,3,1 };
	int len = sizeof(arr) / sizeof(int);
	bubleSort(arr, len);
	printArray(arr, len);

}

