#include <iostream>
int YearsToMonths(int);

int main()
{
	using namespace std;
	int age,months;
	cout << "Enter your age:";
	cin >> age;
	months = YearsToMonths(age);
	cout << months;
	return 0;
}

int YearsToMonths(int years)
{
	return years * 12;
}