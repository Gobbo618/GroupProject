#pragma once
//Guanchen Li
#ifndef Orderlist_H_
#define Orderlist_H_
//#include "Client.h"
//#include "vehicles.h"
#include "Client.h"
#include "vehicles.h"

class Order :public client, public vehicles {
private:
	int orderNum;
	int rentalperiod;//the period of the order.
	int Estcost;//the estimate price.
public:
	Order();
	Order(string, string, string, string, double, int, int);
	~Order();
	void setON(int);//orderNum
	int getON();
	void setRP(int);//rentalperiod
	int getRP();
	void setEst();//Estcost
	int getEst();
	void Print();
};
#endif
