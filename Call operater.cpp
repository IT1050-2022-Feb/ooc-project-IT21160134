#include<iostream>
#include<cstring>
using namespace std;
class Calloperater
{
private:
	int calloperaterID;
	char calloperaterName[15];
	int calloperaterPhoneNo;

public:
	Calloperater();
	Calloperater(int coID, const char coName[], int coPhoneNo);
	void veiwcustomerdetails();
	void display();
	~Calloperater();
};
//--------------------------------------------------------------------------------------------
Calloperater::Calloperater ()
{
	cout << "Constructor created" << endl;

	calloperaterID = 1201200;
	strcpy_s(calloperaterName, "");
	strcpy_s(calloperaterPhoneNo, "");
}
void Calloperater::veiwcustomerdetails()
{
	cout << "Customer details are correct! by Call operater";
}
Calloperater::Calloperater(int coID, const char coName[], int coPhoneNo)
{
	calloperaterID = coID;
	strcpy_s(calloperaterName, coName);
}

void Calloperater::display()
{
	cout << "Call operater ID number : " << calloperaterID << endl;
	cout << "Call operater Name : " << calloperaterName << endl;
}

Calloperater::~Calloperater()//Destructor
{
	//cout << "Deleting Call operater ID " << calloperaterID << endl;
	//cout << "Deleting Call operater Name " << calloperaterName << endl;
	//cout << "Deleting Call operater PhoneNo " << calloperaterPhoneNo << endl;
}
#define SIZE 2
class Hotel {
private:
	Calloperater* calloperater[SIZE];
	int hotelRegisterNo;
	char hotelName[15];
	char hotelAddres[35];
public:
	Hotel();
	Hotel(int calloperaterID1, int calloperaterID2, const char calloperaterName1[], const char calloperaterName2[]);
	void hotelDetails(int hregNo, const char hName[], const char hAddress[]);
	void updateHotelDetails();
	void displayHotelDetails();
	void displayCalloperaterDetails();
	~Hotel();
};
//------------------------------------------------------------------------------------------------------
Hotel::Hotel()
{
	//cout << "Constructor created" << endl;

	calloperater[0] = new Calloperater(10546, "");
	calloperater[1] = new Calloperater(10578, "");
}
Hotel::Hotel(int calloperaterID1, int calloperaterID2, const char calloperaterName1[], const char calloperaterName2[])
{
	calloperater[0] = new Calloperater(calloperaterID1, calloperaterName1);
	calloperater[1] = new Calloperater(calloperaterID2, calloperaterName2);
}
void Hotel::hotelDetails(int hregNo, const char hName[], const char hAddress[])
{
	hotelRegisterNo = hregNo;
	strcpy_s(hotelName, hName);
	strcpy_s(hotelAddres, hAddress);
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
void Hotel::displayCalloperaterDetails()
{
	for(int i = 0; i < SIZE; i++)
		calloperater[i]->display();
}

Hotel::~Hotel()
	{
	//cout << "Hotel shutting down" << endl;
		for (int i = 0; i < SIZE; i++) {
			delete calloperater[i];
		}
		
	};
//------------------------------------------------------------------------------------------------
int main()
{
	Hotel* hotel;//object Hotel class
	hotel = new Hotel(10096, 10058, "Sanath", "Pasan");
	//Calloperater* calloperater = new Calloperater();//object Calloperater class

	hotel->displayCalloperaterDetails();
	//hotel->getcustomerdetails();

	//calloperater->veiwcustomerdetails();
	//calloperater->displayCalloperaterDetails();

	delete hotel;//delete dynamic objects
	//delete recep;


	return 0;
}
//--------------------------------------------------------------------------------------------------