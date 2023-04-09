#include "trucks.h"
#include "vehicles.h"
#include <iostream>
using namespace std;

trucks::trucks()
{
	fourWheelDrive = "";
	rented = "";
}

trucks::trucks(string a, string o, double p, int k, int n, int d, string f, string r) : vehicles(a, o, p, k, n, d)
{
	fourWheelDrive = f;
	rented = r;
}

trucks::~trucks()
{

}

void trucks::SetF(string f)
{
	fourWheelDrive = f;
}

string trucks::GetF()
{
	return fourWheelDrive;
}

void trucks::SetR(string r)
{
	 rented = r;
}
string trucks::GetR()
{
	return rented;
}

void trucks::Print()
{
	cout << "Truck information : " << endl <<
		"Vehicle Number: " << number << endl <<
		"Make: " << make << endl <<
		"Model: " << model << endl <<
		"Price: " << price << endl <<
		"Kilometers: " << kilometers << endl <<
		"Four wheel drive: " << fourWheelDrive << endl << 
		"Rented: " << rented << endl <<
		"Days rented: " << days << endl;
}
void trucks::Edit()
{
	int editSelection = 0;
	cout << "Welcome to the truck edit menu" << endl <<
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