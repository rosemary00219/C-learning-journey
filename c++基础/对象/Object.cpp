#include<iostream>
using namespace std;

class Person {
public:
	int age;
	float height;
};

int main()
{

	Person person;

	person.age = 5;
	person.height = 6;

	int sum = person.age + person.height;

	cout << sum << endl;

	system("pause");

	return 0;

}