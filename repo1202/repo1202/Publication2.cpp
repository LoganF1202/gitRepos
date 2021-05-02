#include <iostream>
#include <string>
#include "Publication.h"

using namespace std;

// lf 4/2/21

void Publication :: getPublicationInfo(Publication pubclass)
{
	string titlep2, publisherp2;
	float pricep2;
	int yearp2, stockp2, type;
	PublicationType pub;

	cout << "Enter publication title: "; cin >> titlep2;
	cout << "Enter publisher: "; cin >> publisherp2;
	cout << "Enter year published: "; cin >> yearp2;

	while (type > 5 || type < 1) // loop to get valid input number for type
	{
		cout << "Enter publication type - " << endl;
		cout << "1. Book / 2. Magazine / 3. Newspaper / 4. Audio / 5. Video"; cin >> type;

		if (type > 5 || type < 1)
		{
			cout << "!! Type not valid !!" << endl;
		}

	} // end valid loop


	switch (type) // switch to assign type to enum
	{
	case 1: pub = BOOK; break;
	case 2: pub = MAGAZINE; break;
	case 3: pub = NEWSPAPER; break;
	case 4: pub = AUDIO; break;
	case 5: pub = VIDEO; break;
	}

	cout << "Enter price: $"; cin >> pricep2;
	cout << "Enter item stock: "; cin >> stockp2;


	storePublication(titlep2, publisherp2, pricep2, yearp2, pub, stockp2);


} // end get publication info


int main()
{
	Publication pubClass;

	pubClass.getPublicationInfo(pubClass);

	pubClass.getTitle();
	pubClass.checkOut();
	pubClass.getStock(); // -
	pubClass.checkIn();
	pubClass.getStock();
}