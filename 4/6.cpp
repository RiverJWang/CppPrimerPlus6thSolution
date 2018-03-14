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
	Oiu candybar[Arsize] =
	{
		{"Mocha Munch", 2.3, 350}
	};
	cout << "Name: " << candybar[0].name << endl;
	cout << "weight: " << candybar[0].weight << endl;
	cout << "calorie: " << candybar[0].cal << endl;
	return 0;
}