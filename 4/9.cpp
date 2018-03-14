#include <iostream>
#include <string>

struct Oiu
{
	std::string name;
	double weight;
	int cal;
};

int main()
{
	using namespace std;
	const int Arsize = 1;
	Oiu* candybar = new Oiu [Arsize] ;
	candybar[0] = {"Mocha Munch", 2.3, 350};
	cout << "Name: " << candybar[0].name << endl;
	cout << "weight: " << candybar[0].weight << endl;
	cout << "calorie: " << candybar[0].cal << endl;
	delete [] candybar;
	return 0;
}