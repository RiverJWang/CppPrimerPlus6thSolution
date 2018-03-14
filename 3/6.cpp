#include <iostream>
double SpecificFuelConsuptionMile(double miles, double gallon);
double SpecificFuelConsuptionKM(double km,double litre);


int main()
{
	using namespace std;
	double distance, gas;
	cout << "miles?";
	cin >> distance;
	cout << "gas?";
	cin >> gas;
	cout << "Miles per gallon: " << distance / gas << endl;
	return 0;
}