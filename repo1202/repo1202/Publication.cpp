#include <iostream>
#include <string>
#include "Publication.h"
using namespace std;

/*
logan Feltz
CIS 1202 502
4/1/21
*/


void Publication :: storePublication(string itemTitle, string itemPublisher, double itemPrice,
	int itemYear, PublicationType itemType, int itemStock)
{
	title = itemTitle; publisher = itemPublisher; price = itemPrice;
	year = itemYear; pubtype = itemType;
	stock = itemStock;

} // end store publication

void Publication :: displayInfo()
{

	cout << "Title: " << title << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Price: " << price << endl;
	cout << "1. Book / 2. Magazine / 3. Newspaper / 4. Audio / 5. Video" << endl; // not sure if enum will display a
	cout << "Type: " << PublicationType(); // number or a value yet
	cout << "Stock: " << stock << endl;


}



void Publication :: checkOut()
{
	if (stock > 0)
	{
		stock--;
	}
	else
	{
		cout << endl << "Stock is empty" << endl;
	}
}

void Publication :: checkIn()
{
	stock++;
}


string Publication :: getTitle()
{
	return title;
}

int Publication :: getStock()
{
	return stock;
}