//Carson Soers
#include "trailers.h"
#include "vehicles.h"
#include <iostream>
using namespace std;

trailers::trailers()
{
	size = "";
	rented = "";
}

trailers::trailers(string a, string o, double p, int k, int n, int d, string s, string c) : vehicles(a, o, p, k, n, d)
{
	size = s;
	rented = c;
}

trailers::~trailers()
{

}

void trailers::SetS(string s)
{
	size = s;
}
void trailers::SetC(string c)
{
	rented = c;
}

string trailers::GetS()
{
	return size;
}
string trailers::GetC()
{
	return rented;
}

void trailers::Print()
{
	cout << "Trailer information : " << endl <<
		"Vehicle Number: " << number << endl <<
		"Make: " << make << endl <<
		"Model: " << model << endl <<
		"Price: " << price << endl <<
		"Kilometers: " << kilometers << endl <<
		"Size : " << size << endl <<
		"Rented: " << rented << endl <<
		"Days rented: " << days << endl;
}

void trailers::Edit()
{
	int editSelection = 0;
	cout << "Welcome to the trailer edit menu" << endl <<
		"to increment the kilometers Press 1" << endl <<
		"to change the rental status Press 2" << endl <<
		"to change the price of the rental press 3 " << endl;
	cin >> editSelection;
	switch (editSelection)
	{
	case 1:
		cout << "Enter the new kilometers of the vehicle: " << endl;
		cin >> kilometers;
		break;
	case 2:
		cout << "Enter the rental status" << endl;
		cin >> rented;
	case 3:
		cout << "Enter the new price: " << endl;
		cin >> price;
	default:
		break;
	}
}
