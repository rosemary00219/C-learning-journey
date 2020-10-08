#include<iostream>
using namespace std;
int main()
{

	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;

	cout << "请输入第一只小猪的体重\n";

	cin >> pig1;

	cout << "请输入第二只小猪的体重\n";

	cin >> pig2;

	cout << "请输入第三只小猪的体重\n";

	cin >> pig3;

	cout << "第一只小猪的体重：" << pig1 << endl;
	cout << "第二只小猪的体重：" << pig2 << endl;
	cout << "第三只小猪的体重：" << pig3 << endl;

	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "第一只小猪最重" << endl;
		}
		else 
		{
			cout << "第三只小猪最重" << endl;
		}
	}

	else
	{
		if (pig2 > pig3)
		{
			cout << "第二只小猪最重" << endl;
		}
		else
		{
			cout << "第三只小猪最重" << endl;
		}
	}

	system("pause");

	return 0;

}