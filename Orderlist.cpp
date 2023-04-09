#include<iostream>
#include"Orderlist.h"
Order::Order() {
	orderNum = 0;
	rentalperiod = 0;
	Estcost = 0;
}

Order::Order(string FN, string LN, string a, string o, double p, int on, int rd) : client(FN, LN), vehicles(a,o,p)
{
	setON(on);
	setRP(rd);
	setEst();
}
Order::~Order() {

}
void Order::setON(int a) {
	orderNum = a;
}
int Order::getON() {
	return orderNum;
}
void Order::setRP(int a) {
	rentalperiod = a;
}
int Order::getRP() {
	return rentalperiod;
}
void Order::setEst() {
	Estcost = rentalperiod * price * 1.13;
}
int Order::getEst() {
	return Estcost;
}
void Order::Print() {
	cout << "Order number: " << orderNum << endl
		<< "Name: " << firstName << " " << lastName << endl
		<< "Vehical: " << make << " " << model << endl
		<< "Lease time: " << rentalperiod << endl
		<< "Estimate price: " << Estcost << endl;
}