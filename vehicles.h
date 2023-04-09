//Carson Soers
#pragma once
#ifndef VEHICLES_H_
#define VEHICLES_H_
#include <string>
using namespace std;

class vehicles
{
protected:
	string make;
	string model;
	double price;
	int kilometers;
	int number;
	int days;

public:
	vehicles();
	vehicles(string, string, double, int, int, int);
	vehicles(string, string, double);
	virtual ~vehicles();
	void SetMake(string);
	string GetMake();
	void SetModel(string);
	string GetModel();
	void SetPrice(double);
	double GetPrice();
	void SetKilo(int);
	int GetKilo();
	void SetNumber(int);
	int GetNumber();
	void SetDays(int);
	int GetDays();
	virtual void Print();
	virtual void Edit() = 0;
	//void bubblesort(vehicles* arr[], int count);


};
#endif // !VEHICLES_H_
