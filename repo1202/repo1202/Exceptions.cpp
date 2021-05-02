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


	if (!(isalpha(start)) || isalpha(offset))
	{
		throw "invalid input";
	}

	int startint = start;
	if (!(startint < 123 && startint > 98) && !(startint < 91 && startint > 64)) // A-Z 65-90, a-z 97-122
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
	try // test one should return 'o'
	{
		cout << character('h', 7) << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}

	try // test two should throw invalid input
	{
		cout << character(9, 7) << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}

	try // test three should throw invalid input
	{
		cout << character('h', 'y') << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}

	try // test four should throw null variable
	{
		cout << character(NULL, 12) << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}

	try // test five should throw invalid range
	{
		cout << character('Z', 1) << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}

	try // test six should return U
	{
		cout << character('Z', -5) << endl;
	}
	catch (const char* msg)
	{
		cerr << msg << endl;
	}
}