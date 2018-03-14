#include <iostream>

int main()
{
	using namespace std;
	int* pt = new int [10];
	*pt = 5;
	cout << *pt << endl;
	cout << pt[0] << endl << pt[1] << endl << pt[2] << endl << pt[3] << endl;
	delete [] pt;
	return 0;
}