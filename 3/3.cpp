#include <iostream>
const int DEGREE_PER_MINUTE = 60;
const int MINUTE_PER_SECOND = 60;

int main()
{
	using namespace std;
	double degrees, minutes, seconds;
	double latitude_degrees;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degree: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Fanally, enter the seconds of arc: ";
	cin >> seconds;
	latitude_degrees = degrees + minutes / DEGREE_PER_MINUTE + seconds / MINUTE_PER_SECOND / DEGREE_PER_MINUTE;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
	     << latitude_degrees << " degrees";
	return 0;
}