#include <iostream>
const int DAY_PER_HOUR = 24;
const int HOUR_PER_MINUTE = 60;
const int MINUTE_PER_SECOND = 60;

int main()
{
	using namespace std;
	long total_seconds;
	int d, h, m, s;
	cout << "Enter the number of seconds: ";
	cin >> total_seconds;
	d = total_seconds / DAY_PER_HOUR / HOUR_PER_MINUTE / MINUTE_PER_SECOND;
	h = total_seconds % (DAY_PER_HOUR * HOUR_PER_MINUTE * MINUTE_PER_SECOND) / (HOUR_PER_MINUTE * MINUTE_PER_SECOND);
	m = total_seconds % (HOUR_PER_MINUTE * MINUTE_PER_SECOND) / MINUTE_PER_SECOND;
	s = total_seconds % MINUTE_PER_SECOND;
	cout << total_seconds << " seconds = " 
	     << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds";
	return 0;
}