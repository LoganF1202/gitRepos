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

	if ((start == NULL) || (offset == NULL))
	{
		throw "NULL variable";
	}

	if ((!isalpha(start)) || (!isalnum(offset)))
	{
		throw "invalid input";
	}

	if (!(start < 123 && start > 98) || !(start < 91 && start > 64)) // A-Z 65-90, a-z 97-122
	{
		throw "invalid character";
	}

	output = (start + offset);

	if (!isalpha(output))
	{
		throw "invalid range";
	}


	return output;
}


int main()
{
	cout << character('a', 7);

}