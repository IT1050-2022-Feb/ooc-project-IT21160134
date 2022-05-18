#include<iostream>
#include<cstring>
using namespace std;
class Receptionist
{
private:
	int receptionistID;
	char receptionistName[20];
	char receptionistEmail[20];
	int numberOfDays;
	int hotelFeePerDay;

public:
	Receptionist();
	Receptionist(int recepID, const char recepName[]);
	void confirmReservation();
	void display();
	~Receptionist();
};

Receptionist::Receptionist()
{
	//cout << "Constructor created" << endl;

	receptionistID = 10025;
	strcpy(receptionistName, "");
	strcpy(receptionistEmail, "");
}
void Receptionist::confirmReservation() 
{
	cout << "Reservation confirmed! by Receptionist";
}
Receptionist::Receptionist(int recepID, const char recepName[])
{
	receptionistID = recepID;
	strcpy(receptionistName, recepName);
}

void Receptionist::display()
{
	cout << "Receptionist ID number : " << receptionistID << endl;
	cout << "Receptionist Name : " << receptionistName << endl << endl;
}

Receptionist::~Receptionist()//Destructor
{
	cout << "Deleting Receptionist ID " << receptionistID << "- " << receptionistName << endl << endl;
}

//implement Registered Customer class
class RegisteredCustomer {//: public Customer 
protected:
	int regCustomerPhone;
	char regCustomerEmail[60];
	int regCustomerID;
	char regCustomerName[30];

public:
	RegisteredCustomer() {
		regCustomerID = 2002;
		strcpy(regCustomerName, "");
		regCustomerPhone = 0;
		strcpy(regCustomerEmail, "");
	}
	RegisteredCustomer(int regCustID, const char rcustName[], int rcustPhone, const char rcustEmail[]);
	void display();
	void setpayment();
	void updateprofile();
	void dispalyregisteredCustomerdetails();
	~RegisteredCustomer();
};

//implement Register Customer class function
RegisteredCustomer::RegisteredCustomer(int regCustID, const char rcustName[], int rcustPhone, const char rcustEmail[])
{
	regCustomerID = regCustID;
	strcpy(regCustomerName, rcustName);
	regCustomerPhone = rcustPhone;
	strcpy(regCustomerEmail, rcustEmail);
}
void RegisteredCustomer::display() {
	cout << "Registered Customer" << endl;
}

void RegisteredCustomer::dispalyregisteredCustomerdetails() {
	
	cout << "Registered customer ID : " << regCustomerID << endl;
	cout << "Registered customer name : " << regCustomerName << endl;
	cout << "Registered customer phone : " << regCustomerPhone << endl;
	cout << "Registered customer email : " << regCustomerEmail << endl << endl;
}

void RegisteredCustomer::setpayment() {

}

void RegisteredCustomer::updateprofile() {

}
RegisteredCustomer::~RegisteredCustomer()
{
	cout << "Deleting RegisteredCustomer : " << regCustomerID << "- " << regCustomerName << endl << endl;
}


#define SIZE1 2
#define SIZE2 2
class Hotel {
private:
	Receptionist* recep[SIZE1];
	RegisteredCustomer* regcust[SIZE2];
	int hotelRegisterNo;
	char hotelName[20];
	char hotelAddres[40];
public:
	Hotel();
	Hotel(int recepID1, int recepID2, const char rName1[], const char rName2[]);
	void hotelDetails(int hregNo, const char hName[], const char hAddress[]);
	void updateHotelDetails();
	void displayHotelDetails();
	void displayHotel();
	void displayReceptionistDetails();
	void addRegisteredCustomers(RegisteredCustomer *regCustm1, RegisteredCustomer* regCustm2);
	~Hotel();
};

Hotel::Hotel()
{
	//cout << "Constructor created" << endl;

	recep[0] = new Receptionist(10026, "");
	recep[1] = new Receptionist(10027, "");
}
Hotel::Hotel(int recepID1, int recepID2, const char rName1[], const char rName2[])
{
	recep[0] = new Receptionist(recepID1, rName1);
	recep[1] = new Receptionist(recepID2, rName2);
}
void Hotel::hotelDetails(int hregNo, const char hName[], const char hAddress[])
{
	hotelRegisterNo = hregNo;
	strcpy(hotelName, hName);
	strcpy(hotelAddres, hAddress);
}
void Hotel::updateHotelDetails()
{

}
void Hotel::displayHotelDetails()
{
	cout << "Hotel registration number : " << hotelRegisterNo << endl;
	cout << "Hotel Name: " << hotelName << endl;
	cout << "Hotel Address : " << hotelAddres << endl;
}
void Hotel::displayReceptionistDetails()
{
	for(int i = 0; i < SIZE1; i++)
		recep[i]->display();
}
void Hotel::addRegisteredCustomers(RegisteredCustomer* regCustm1, RegisteredCustomer* regCustm2)
{
	regcust[0] = regCustm1;
	regcust[1] = regCustm2;
}

Hotel::~Hotel()
{
	//cout << "Hotel shutting down" << endl;
		for (int i = 0; i < SIZE1; i++) {
			delete recep[i];
		}	
}
void Hotel::displayHotel()
{
	for (int i = 0; i < SIZE2; i++)
		regcust[i]->dispalyregisteredCustomerdetails();
}
//------------------------------------------------------------------------------------------------
int main()
{
	Hotel* hotelr;//object Hotel class
	hotelr = new Hotel(10080, 10081, "Ajith", "Harsha");
	Receptionist* recep = new Receptionist();//object Receptionist class

	hotelr->displayReceptionistDetails();

	delete hotelr;//delete dynamic objects

	Hotel* king = new Hotel();
	RegisteredCustomer* regc1 = new RegisteredCustomer(1600, "Amila", 0777564, "Amila@gmail.com");
	RegisteredCustomer* regc2 = new RegisteredCustomer(1700, "Supun", 0744875, "Supun@gmail.com");

	king->addRegisteredCustomers(regc1, regc2);
	king->displayHotel();

	delete regc1;
	delete regc2;

	RegisteredCustomer* regc3 = new RegisteredCustomer(1800, "Pathum", 0773232, "Pathum@gmail.com");
	RegisteredCustomer* regc4 = new RegisteredCustomer(1900, "Dilshan", 07575746, "Dilshan@gmail.com");

	king->addRegisteredCustomers(regc3, regc4);
	king->displayHotel();

	delete regc3;
	delete regc4;

	return 0;
}