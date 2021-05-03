#include <iostream>
#include <string>
#include <iomanip>
#include <math.h> 

using namespace std;

/*
logan Feltz
CIS 1202 502
5/2/21
*/

int half(int cut)
{
	double dubcut = cut;
	double halved = dubcut / 2;
	halved = round(halved);
	cut = (int)halved;

	return cut;
}

double half(double cut)
{
	cut = cut / 2;

	return cut;
}

float half(float cut)
{
	cut = cut / 2.0f;

	return cut;
}

int main()
{
	double a = 7;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
};