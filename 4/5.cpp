#include <iostream>
#include <string>

int main()
{
	using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int calorie;
};

CandyBar snack = {"Moncha Munch", 2.3, 350};

cout << "Name: " << snack.brand << endl;
cout << "Weight: " << snack.weight << endl;
cout << "Calorie: " << snack.calorie << endl;

return 0;
}