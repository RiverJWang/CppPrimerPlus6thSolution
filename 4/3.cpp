#include <iostream>


int main()
{
	using namespace std;
	const int Arsize = 20;
	char fname[Arsize], lname[Arsize];
	cout << "Enter your first name: " << endl;
	cin.getline(fname, Arsize);
	cout << "Enter your last name: " << endl;
	cin.getline(lname, Arsize);
	cout << "Here's the information in a single string: "
	     << fname << ", " << lname << endl;
    return 0;
}