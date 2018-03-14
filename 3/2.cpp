#include <iostream>
const int FOOT_PER_INCH = 12;
const float INCH_PER_METER = 0.0254;
const float KG_PER_POUND = 2.2;

int main()
{
	int inches, feet;
	float pounds;
	float height_meter, weight_kg;
	using namespace std;
	cout << "your height is : __feet __inches?";
	cin >> feet >> inches; //input use space KEY
	cout << "your weight is : __pounds";
	cin >> pounds;
	height_meter = (FOOT_PER_INCH * feet + inches) * INCH_PER_METER;
	weight_kg = pounds * KG_PER_POUND;
	cout << "your BMI is " << weight_kg / (height_meter * height_meter);
	return 0;
}
