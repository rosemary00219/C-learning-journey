#include<iostream>
using namespace std;

void main()
{

	int arr[] = {1,2,3,4,5};
	/*指针访问第一个元素*/
	int* p = arr;

	//cout << *p << endl;

	/*指针访问第二个元素，只需让p++ 偏移4个字节*/
	//p++;
	//cout << *p << endl;

	/*利用指针循环访问数组*/
	for (int i = 0; i < 5; i++)
	{
		cout << *p << endl;
		p++;
	}

}