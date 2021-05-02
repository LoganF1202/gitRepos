#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
logan Feltz
CIS 1202 502
5/2/21
*/


char character(char start, int offset)
{
	char output;


	output = (start + offset);


	return output;
}


int main()
{

	cout << character('a', 7);

}