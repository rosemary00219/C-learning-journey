#include<iostream>
using namespace std;

int main()
{

	// 1. 创建五只小猪的体重
	int arr[] = {300,350,200,400,250};
	int max = 0;
	for (int  i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	cout << "最重的猪体重为" << max << endl;

	system("pause");
	return 0;
}