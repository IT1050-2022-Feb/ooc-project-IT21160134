#include<iostream>
#include<cstring>
using namespace std;
class Hotelmanager //Hotelmanager class
{
private:
	int hotelmanagerID;
	char hotelmanagerName[20];
	char hotelmanagerEmail[20];

public: //public methods
	Hotelmanager();
	Hotelmanager(int hmID, const char hmName[]);
	void receiveComplains();
	void display();
	~Hotelmanager();
};

Hotelmanager::Hotelmanager() //constructor
{
	//cout << "Constructor created" << endl;

	hotelmanagerID = 13455;
	strcpy(hotelmanagerName, "");
	strcpy(hotelmanagerEmail, "");
}
void Hotelmanager::receiveComplains() 
{
	//cout << "Receive complains! by Hotelmanager";
}
Hotelmanager::Hotelmanager(int hmID, const char hmName[])
{
	hotelmanagerID = hmID;
	strcpy(hotelmanagerName, hmName);
}

void Hotelmanager::display()
{
	cout << "Hotelmanager ID number : " << hotelmanagerID << endl;
	cout << "Hotelmanager Name : " << hotelmanagerName << endl << endl;
}

Hotelmanager::~Hotelmanager() //Destructor
{
	cout << "Deleting Hotelmanager ID : " << hotelmanagerID << endl;
	cout << "Deleting Hotelmanager Name : " << hotelmanagerName << endl << endl;
}
#define SIZE 2
class Hotel { //Hotel class
private:
	Hotelmanager* hm[SIZE];
	int hotelRegisterNo;
	char hotelName[20];
	char hotelAddres[45];
public: //public methods
	Hotel();
	Hotel(int hmID1, int hmID2, const char mName1[], const char mName2[]);
	void hotelDetails(int hregNo, const char hName[], const char hAddress[]);
	void updateHotelDetails();
	void displayHotelDetails();
	void displayHotelmanagerDetails();
	~Hotel();
};

Hotel::Hotel()  //constructor
{
	hm[0] = new Hotelmanager(11234, "");
	hm[1] = new Hotelmanager(11235, "");
}
Hotel::Hotel(int hmID1, int hmID2, const char mName1[], const char mName2[])
{
	hm[0] = new Hotelmanager(hmID1, mName1);
	hm[1] = new Hotelmanager(hmID2, mName2);
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
	
}
void Hotel::displayHotelmanagerDetails()
{
	for(int i = 0; i < SIZE; i++) //for loop
		hm[i]->display();
}

Hotel::~Hotel() //destructor
	{
		for (int i = 0; i < SIZE; i++) {  //for loop
			delete hm[i];
		}
		
	};

int main() //main program
{
	Hotel* hotel;//object Hotel class
	hotel = new Hotel(10059, 10056, "kalum", "Raveen");

	hotel->displayHotelmanagerDetails();// display hotelmanager details

	delete hotel;//delete dynamic objects

	return 0;
}