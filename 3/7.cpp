#include <iostream>

int main()
{
	using namespace std;
	double SFC, gas_gallon, gas_litre, distance_mile, distance_meter;
	cout << "Specific fuel consumption(gas/100km): ";
	cin >> SFC;
	SFC = 1 / SFC * 100; // km/L
	SFC = SFC * 0.6214; // mile/L
	SFC = SFC * 3.875; // mile/gallon
	cout << SFC;
	return 0;
}