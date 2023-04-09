#include <iostream>
#include <string>
#include "vehicles.h"
#include "cars.h"
#include "trailers.h"
#include "trucks.h"
#include "Client.h"
#include "Orderlist.h"
using namespace std;

int main()
{
	//Carson Soers

	client* Carr[100];
	vehicles* arr[100];
	Order** Oarr[100][100];
	static int count = 0;
	static int Ccount = 0;
	int clientNumber = 1000;

	arr[count] = new cars("Ford", "Focus", 99.99, 123321, count, 30, "yes", "no");
	count++;
	arr[count] = new trailers("Wind", "Mach 1", 49.99, 23422, count, 4, "small", "no");
	count++;
	arr[count] = new trucks("Dodge", "Ram", 129.99, 9876, count, 21, "yes", "no");
	count++;

	int firstSelection = 0;
	int secondSelection = 0;
	do {
		cout << "Welcome to Aspire rentals" << endl
			<< "1 for the owner portal" << endl << 
			"2 for the customer portal" << endl <<
			"3 to exit" << endl;
		cin >> firstSelection;

		if (firstSelection == 1)
		do{
			
			cout << "Welcome to the owner portal" << endl <<
				"Please select an operation to perform or return to the main menu" << endl <<
				"1: Display a full list of inventory" << endl <<
				"2: Search for a specfic rental by make or model" << endl <<
				"3: Sort and display rental inventroy" << endl <<
				"4: Add a rental to the inventory" << endl <<
				"5: Edit a rental" << endl <<
				"6: Add a client profile" << endl <<
				"7: Edit a client profile" << endl <<
				"8: View Profits" << endl <<
				"9: Return to main menu" << endl;
			cin >> secondSelection;



			switch (secondSelection)
			{
			case 1:
				for (int i = 0; i < count; i++)
				{
					arr[i]->Print();
					cout << endl;
				}
				break;
			case 2: 
			{
				cout << "Type in the make or model you would like to search" << endl;
				string search = "";
				bool found = false;
				cin >> search;
				cout << "Displaying results for: " << search << endl;
				for (int i = 0; i < count; i++)
				{

					if (arr[i]->GetMake() == search || arr[i]->GetModel() == search)
					{
						arr[i]->Print();
					}
				}
			}
				break;
			case 3:
				cout << "sort by" << endl;
				
				
				break;
			case 4:
			{
				int thirdSelection = 0;
				cout << "What type of vehicle would you like to add?" << endl <<
					"1 for a Car" << endl <<
					"2 for a Trailer" << endl <<
					"3 for a Truck" << endl;
				cin >> thirdSelection;

				switch (thirdSelection)
				{
				case 1:
				{
					arr[count] = new cars();
					string make = "";
					string model = "";
					double price = 0;
					int kilometers = 0;
					string convertable = "";
					cars* convPtr = dynamic_cast<cars*>(arr[count]);
					//string rented = "";
					//cars* renPtr = dynamic_cast<cars*>(arr[count]);
					cout << "Enter the make" << endl;
					cin >> make;
					arr[count]->SetMake(make);
					cout << "Enter the model" << endl;
					cin >> model;
					arr[count]->SetModel(model);
					cout << "Enter the price to rent" << endl;
					cin >> price;
					arr[count]->SetPrice(price);
					cout << "Enter the kilometers" << endl;
					cin >> kilometers;
					arr[count]->SetKilo(kilometers);
					cout << "Is the vehicle a convertable?" << endl;
					cin >> convertable;
					convPtr->SetTop(convertable);
					arr[count]->SetNumber(count);
					//cin >> rented;
					//renPtr->SetA(convertable);
					count++;




				}
					break;
				case 2:
				{
					arr[count] = new trailers();
					string make = "";
					string model = "";
					double price = 0;
					int kilometers = 0;
					string size = "";
					trailers* covPtr = dynamic_cast<trailers*>(arr[count]);
					cout << "Enter the make" << endl;
					cin >> make;
					arr[count]->SetMake(make);
					cout << "Enter the model" << endl;
					cin >> model;
					arr[count]->SetModel(model);
					cout << "Enter the price to rent" << endl;
					cin >> price;
					arr[count]->SetPrice(price);
					cout << "Enter the kilometers" << endl;
					cin >> kilometers;
					arr[count]->SetKilo(kilometers);
					cout << "Enter the size" << endl;
					cin >> size;
					arr[count]->SetNumber(count);
					covPtr->SetS(size);
					count++;
				}
					break;
				case 3:
				{
					arr[count] = new trucks();
					string make = "";
					string model = "";
					double price = 0;
					int kilometers = 0;
					string fourWheelDrive = "";
					trucks* forPtr = dynamic_cast<trucks*>(arr[count]);
					cout << "Enter the make" << endl;
					cin >> make;
					arr[count]->SetMake(make);
					cout << "Enter the model" << endl;
					cin >> model;
					arr[count]->SetModel(model);
					cout << "Enter the price to rent" << endl;
					cin >> price;
					arr[count]->SetPrice(price);
					cout << "Enter the kilometers" << endl;
					cin >> kilometers;
					arr[count]->SetKilo(kilometers);
					cout << "Is the truck four wheel drive?" << endl;
					cin >> fourWheelDrive;
					forPtr->SetF(fourWheelDrive);
					arr[count]->SetNumber(count);
					count++;
				}
					break;
				default:
					break;
				}
			}
				break;
			case 5:
			{
				int vNumber = 0;
				cout << "Enter the vehicle number you wish to edit " << endl;
				cin >> vNumber;
				bool found = false;
				for (int i = 0; i < count; i++)
				{
					if (arr[i]->GetNumber() == vNumber)
					{
						found = true;
						arr[i]->Edit();
					}
				}
				if (!found)
				{
					cout << "vehicle does not exist" << endl;
				}
			}
				break;
			case 6:
			{
				cout << "add a client" << endl;
				string fisrtName = "";
				string lastName = "";
				string phoneNUM = "";
				string DriverLicense = "";

				cout << "Plaease enter the first name." << endl;
				cin >> fisrtName;
				cout << "Please enter the last name." << endl;
				cin >> lastName;
				cout << "Please enter the phone number." << endl;
				cin >> phoneNUM;
				cout << "Please enter the driver license." << endl;
				cin >> DriverLicense;
				Carr[Ccount] = new client(fisrtName, lastName, phoneNUM, clientNumber, DriverLicense);
				Carr[Ccount]->print();
				cout << "client added successfully" << endl;
				clientNumber++;
				Ccount++;

			}
			break;

			case 7:
				cout << "edit a client profile" << endl;
				break;
			case 8:
				cout << "view revenue" << endl;
				break;
			case 9:
				cout << "Thank you" << endl;
				break;
			default:
				cout << "Invalid input" << endl;
				break;
			}
		} while (secondSelection != 9);

		if (firstSelection == 2)
		{
				int searchnumber = 0;
				int selectedNumber = 0;//the selected client number.
				cout << "Welcome to the customer portal" << endl
					<< "please enter your client number or enter 1 to creat new account." << endl;
				cin >> searchnumber;
				if (searchnumber == 1) {
					string fisrtName = "";
					string lastName = "";
					string phoneNUM = "";
					string DriverLicense = "";

					cout << "Plaease enter your first name." << endl;
					cin >> fisrtName;
					cout << "Please enter your last name." << endl;
					cin >> lastName;
					cout << "Please enter your phone number." << endl;
					cin >> phoneNUM;
					cout << "Please enter your driver license." << endl;
					cin >> DriverLicense;
					Carr[Ccount] = new client(fisrtName, lastName, phoneNUM, clientNumber, DriverLicense);
					Carr[Ccount]->print();
					cout << endl << "client added successfully" << endl;
					clientNumber++;
					Ccount++;
				}
				for (int i; i = 0; i++) {
					if (Carr[i]->getCN() == searchnumber) {
						Carr[i]->print();
						selectedNumber = i;
					}
				}
				int selection = 0;
				cout << "Please select an operation to perform or return to the main menu" << endl
					<< "1.rental a vehical" << endl
					<< "2: Search for a specfic rental by make or model" << endl
					<< "3: Sort and display rental inventroy" << endl
					<< "4: return to main menu" << endl;
				cin >> selection;
				switch (selection) {
				case 1: {

					break;
				}
				case 2: {

					break;
				}
				case 3: {

					break;
				}
				case 4: {

					break;
				}

				}

			}
		

	} while (firstSelection != 3);

	for (int i = 0; i < count; i++)// delete the dynamic memory
	{
		delete arr[i];
	}


	return 0;
}