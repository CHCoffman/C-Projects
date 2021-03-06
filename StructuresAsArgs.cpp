// This program has functions that accept structure vairbles 
// as arguments
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
	int partNum;			// Part number
	string description;		// Item description
	int onHand;			// Units on hand
	double price;			// Unit Price
};

// Function prototypes
void getItem(InventoryItem&);		// Argument passed by reference
void showItem(InventoryItem);		// Argument passed by value

int main()
{
	InventoryItem part;

	getItem(part);
	showItem(part);
	return 0;
}

//***************************************************************
// Definition of function getItem. This function uses		*
// a structure reference variable as its parameter. It asks the *
// user for information to store in the structure.		*
//***************************************************************

void getItem(InventoryItem &p)		// Uses a reference parameter
{
	// Get the part number.
	cout << "Enter the part number: ";
	cin >> p.partNum;

	// Get the part description.
	cout << "Enter the part description: ";
	cin.ignore();	// Ignore the repaining newline character
	getline(cin, p.description);

	// Get the quantity on hand.
	cout << "Enter the quantity on hand: ";
	cin >> p.onHand;

	// Get the unit price.
	cout << "Enter the price per unit: ";
	cin >> p.price;
}
//***************************************************************
// Definition of function showItem. This function accepts       *
// an argument of hte InventoryItem structure type. The	        *
// contents of the structure are displayed		        *
//***************************************************************

void showItem(InventoryItem p)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Part number: " << p.partNum << endl;
	cout << "Description: " << p.description << endl;
	cout << "Units on hand: " << p.onHand << endl;
	cout << "Price: " << p.price << endl;
}
