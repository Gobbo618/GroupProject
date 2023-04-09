//Carson Soers
#pragma once
#ifndef TRAILERS_H_
#define TRAILER_H_
#include "vehicles.h"
#include <string>
using namespace std;

class trailers : public vehicles
{
private:
	string size;
	string rented;

public:
	trailers();
	trailers(string, string, double, int, int, int, string, string);
	~trailers();
	void SetS(string);
	string GetS();
	void SetC(string);
	string GetC();
	void Print()override;
	void Edit()override;

};
#endif // !TRAILERS_H_


