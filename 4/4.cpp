#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string fname, lname, name;
	cout << "fname: ";
	cin >> fname;
	cout << "lname: ";
	cin >> lname;
	name = fname + ", " + lname;
	cout << name;
	return 0;
}