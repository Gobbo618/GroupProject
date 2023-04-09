//Carson Soers
#include"vehicles.h"
#include <iostream>
using namespace std;

vehicles::vehicles()
{
	make = "";
	model = "";
	price = 0;
	kilometers = 0;
	number = 0;
	days = 0;
}

vehicles::vehicles(string a, string o , double p, int k, int n, int d)
{
	make = a;
	model = o;
	price = p;
	kilometers = k;
	number = n;
	days = d;
}

vehicles::vehicles(string a, string o, double p)
{
	make = a;
	model = o;
	price = p;
}

vehicles::~vehicles()
{

}

void vehicles::SetMake(string a)
{
	make = a;
}
void vehicles::SetModel(string o)
{
	model = o;
}
void vehicles::SetPrice(double p)
{
	price = p;
}
void vehicles::SetKilo(int k)
{
	kilometers = k;
}

void vehicles::SetNumber(int n)
{
	number = n;
}

void vehicles::SetDays(int d)
{
	days = d;
}

string vehicles::GetMake()
{
	return make;
}
string vehicles::GetModel()
{
	return model;
}
double vehicles::GetPrice()
{
	return price;
}
int vehicles::GetKilo()
{
	return kilometers;
}

int vehicles::GetNumber()
{
	return number;
}

int vehicles::GetDays()
{
	return days;
}


void vehicles::Print()
{

}

void vehicles::Edit()
{

}


