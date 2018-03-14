#include <array>
#include <string>
using namespace std;

char actor[30];
short betsie[100];
float chuck[13];
long double dipsea[64];

array<char, 30>actor;
array<short, 100>betsie;
array<float, 13>chuck;
array<long double, 64>dipsea; 

int odds[5] = {1, 3, 5, 7, 9};

int even;
even = odds[0]+odds[4];

float ideas[5] = {};
std::cout << ideas[1];

char ik[] = "cheeseburger";
string str1 = "Waldorf Salad";

struct fish
{
	string variety;
    int weight_ounce;
    double lenth_inch;
};

fish carp =
{
	"grass carp",
	12,
	12.33
};

enum Response(Yes = 1, No = 0, Maybe = 2);

double ted;
p =  &ted;
cout << *p;

float treacle[10];
float* pt = &treacle[0];
cout << *pt << *(pt + 9);






























