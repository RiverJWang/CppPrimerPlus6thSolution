#include <iostream>
void Time(int hours, int minutes);

int main()
{
	using namespace std;
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	Time(hours, minutes);
	return 0;
}

void Time(int hours, int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes;
	return;
}