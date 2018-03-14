#include <iostream>
#include <string>

struct Pissa
{
	std::string name;
    double diameter;
	double weight;
};

int main()
{
	using namespace std;
	Pissa jonny;//Pissa jonny = {};
	cout << "Name: " ;
	getline(cin, jonny.name);//cin >> jonny.name;
	cout << "Diameter: ";
	cin >> jonny.diameter;
	cout << "Weight: ";
	cin >> jonny.weight;
	cout << jonny.name << jonny.diameter << jonny.weight;
	return 0;
}