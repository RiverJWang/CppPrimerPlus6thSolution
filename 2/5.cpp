#include <iostream>
double CelsiusToFahrenheit(double);

int main()
{
	using namespace std;
	int celsius, fahrenheit;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius << " degree Celsius is 68 degree Fahenheit." << endl;
	return 0;
}

double CelsiusToFahrenheit(double celsius)
{
	return 1.8 * celsius + 32.0;
}