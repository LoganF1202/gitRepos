#pragma once

// LF 4/1/21

class Publication
{
	private:
	string title = "temp", publisher = "temp";
	float price = 1;
	int year = 1, stock = 1;
	enum PublicationType { BOOK = 1, MAGAZINE = 2, NEWSPAPER = 3, AUDIO = 4, VIDEO = 5 } pubtype = BOOK;

	public:
	// prototypes

	void storePublication(string, string, double, int, PublicationType, int);
	void displayInfo();
	void checkOut();
	void checkIn();
	string getTitle();
	int getStock();
	void getPublicationInfo(Publication);
};

