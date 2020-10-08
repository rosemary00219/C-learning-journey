#include<iostream>
using namespace std;
#include<ctime>
int main()
{

	srand(((unsigned int) time(NULL)));

	int num = rand() % 100 + 1;

	int val = 0;

	

	

	while (true)
	{
		cout << "请输入你猜测的数字\n";
		cin >> val;

		if (num > val)
		{
			cout << "猜的数字太小了\n";
		}
		else if (num < val)
		{
			cout << "猜的数字太大了\n";
		}
		else
		{
			cout << "恭喜你猜对了\n";
			break;
		}
	}

	system("pause");
	return 0;
}