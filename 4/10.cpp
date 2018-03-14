#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<double, 5> a = {};
	cout << "input your time: ";
	cin >> a[1] >> a[2] >> a[0];
	cout << "your average is : " << (a[1] + a[2] + a[0])/3 << endl;
	
	return 0;
}