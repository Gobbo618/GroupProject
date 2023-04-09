//Guanchen Li


#ifndef Client_H_
#define Client_H_
#include <string>
using namespace std;
class client
{
protected:
	string firstName;
	string lastName;
	int clientNum;
	string phoneNUM;
	string DriverLicense;
	int rentaltimes = 0;//keep track on the time of this client rentaled;
public:
	client();
	client(string, string, string, int, string);
	client(string, string);
	~client();
	void setFN(string);
	string getFN();
	void setLN(string);
	string getLN();
	void setRenum(int);
	int getRnum();
	void setpNum(string);
	string getpNum();
	void setDL(string);
	string getDL();
	void setRT();
	int getRT();
	void setCN(int);
	int getCN();
	void print();
};
#endif // !Client_H_
