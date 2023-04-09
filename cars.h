//Carson Soers
#pragma once
#ifndef CARS_H_
#define CARS_H_
#include "vehicles.h"
#include <string>
using namespace std;

class cars : public vehicles
{
private:
	string convertable;
	string rented;

public:
	cars();
	cars(string, string, double, int, int, int, string, string);
	~cars();
	void SetTop(string);
	string GetTop();
	void SetA(string);
	string GetA();
	void Print() override;
	virtual void Edit() override;


};
#endif // !CARS_H_

