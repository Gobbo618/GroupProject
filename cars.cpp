#include "cars.h"
#include "vehicles.h"
#include <iostream>
using namespace std;

cars::cars()
{
	convertable = "";
	rented = "";
}

cars::cars(string a, string o, double p, int k, int n, int d, string t, string m) : vehicles(a, o, p, k, n, d)
{
	convertable = t;
	rented = m;
}
cars::~cars()
{

}

void cars::SetTop(string t)
{
	convertable = t;
}
void cars::SetA(string m)
{
	rented = m;
}

string cars::GetTop()
{
	return convertable;
}
string cars::GetA()
{
	return rented;
}

void cars::Print()
{
	cout << "Car information : " << endl <<
		"Vehicle Number: " << number << endl <<
		"Make: " << make << endl <<
		"Model: " << model << endl <<
		"Price: " << price << endl <<
		"Kilometers: " << kilometers << endl <<
		"Convertable: " << convertable << endl <<
		"Rented: " << rented << endl <<
		"Days rented: " << days << endl;

}
void cars::Edit()
{
	int editSelection = 0;
	cout << "Welcome to the car edit menu" << endl <<
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