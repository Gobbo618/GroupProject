#include"Client.h"
#include<iostream>


client::client() {
	firstName = "0";
	lastName = "0";
	//rentalNumber = 0;
	phoneNUM = "";
	DriverLicense = "";
	rentaltimes = 0;
}
client::client(string FN, string LN, string PN, int CN, string DL) {
	setFN(FN);
	setLN(LN);
	setpNum(PN);
	setDL(DL);
	setCN(CN);
}
client::client(string FN, string LN) {
	setFN(FN);
	setLN(LN);
;
}
client::~client() {

}
void client::setFN(string inp) {
	firstName = inp;
}
string client::getFN() {
	return firstName;
}
void client::setLN(string inp) {
	lastName = inp;
}
string client::getLN() {
	return lastName;
}
//void client::setRenum(int a) {
//	rentalNumber = a;
//}
//int client::getRnum() {
//	return rentalNumber;
//}
void client::setpNum(string a) {
	phoneNUM = a;
}
string client::getpNum() {
	return phoneNUM;
}
void client::setDL(string b) {
	DriverLicense = b;
}
string client::getDL() {
	return DriverLicense;
}
void client::setRT() {
	rentaltimes += 1;
}
int client::getRT() {
	return rentaltimes;
}
void client::setCN(int b) {
	clientNum = b;
}
int client::getCN() {
	return clientNum;
}
void client::print() {
	cout << "Client info" << endl
		<< "Client Number" << clientNum << endl
		<< "Client Name: " << firstName << " " << lastName << endl
		<< "Dirver license number: " << DriverLicense << endl
		<< "Phone Number: " << phoneNUM << endl;
}