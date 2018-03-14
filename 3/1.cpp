#include <iostream>
const float RATIO = 12;

int main()
{
	using namespace std;
	int height, inches, feet;
	cout << "How tall are you?_";
	cin >> height;
	
	feet = height / RATIO;
	//inches = ???
	cout << "Your height is equal to " << feet;
	return 0;
}