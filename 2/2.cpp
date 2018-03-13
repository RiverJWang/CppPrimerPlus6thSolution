#include <iostream>
int LongToMaFunction(int);

int main()
{
	using namespace std;
	int ma_units, long_units;
	cin >> long_units;
	ma_units = LongToMaFunction(long_units);
	cout << ma_units << "ma" << endl;
	return 0;
}

int LongToMaFunction(int long_units)
{
	int ma_units;
	ma_units = long_units * 220;
	return ma_units;
}