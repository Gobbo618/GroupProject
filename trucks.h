//Carson Soers
#pragma once
#ifndef TRUCKS_H_
#define TRUCKS_H_
#include "vehicles.h"
#include <string>
using namespace std;

class trucks : public vehicles
{
private:
	string fourWheelDrive;
	string rented;
public:
	trucks();
	trucks(string, string, double, int, int, int, string, string);
	~trucks();
	void SetF(string);
	string GetF();
	void SetR(string);
	string GetR();
	void Print();
	void Edit();
};
#endif // !TRUCKS_H_

