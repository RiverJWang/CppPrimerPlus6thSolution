#include <iostream>
double LightyearsToAstronomicalunits(double);

int main()
{
	using namespace std;
	int light_years, astronomical_units;
	cout << "Enter the number of light years: ";
	cin >> light_years;
	astronomical_units = LightyearsToAstronomicalunits(light_years);
	cout << light_years << " light years = " << astronomical_units << " astronomical units.";
	return 0;
}

double LightyearsToAstronomicalunits(double LY)
{
	double AU = LY * 63240;
	return AU;
}