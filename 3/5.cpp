#include <iostream>

int main()
{
	using namespace std;
	long long world_population, us_population;
	double percent;
	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> us_population;
	percent = double(us_population) / double(world_population) * 100;
	cout << "The populaiton of the US is " << percent << "% of the world population.";
	return 0;
}