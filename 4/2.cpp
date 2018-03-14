#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name, dessert;
	cout << "Enter your name" << endl;
	cin >> name;
	cout << "Enter your favorite dessert" << endl;
	cin >> dessert;
	cout << dessert << " for " << name;
	return 0;
}