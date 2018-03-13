#include <iostream>
void ThreeBlindMice();
void SeeHowTheyRun();

int main()
{
	int i;
	for( i = 0; i < 2; i++)
		ThreeBlindMice();
	for( i = 0; i < 2; i++)
		SeeHowTheyRun();
	return 0;
}

void ThreeBlindMice()
{
	std::cout << "Three Blind Mice" << std::endl;
}

void SeeHowTheyRun()
{
	std::cout << "See How They Run" << std::endl;
}