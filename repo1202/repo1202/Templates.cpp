#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
logan Feltz
CIS 1202 502
5/2/21
*/

int half(int cut)
{
	double halved = cut / 2;
	round(halved);
	cut = halved;

	return cut;
}

int half(double cut)
{
	cut = cut / 2;

	return cut;
}

int half(float cut)
{
	cut = cut / 2.0f;

	return cut;
}

int main()
{



};