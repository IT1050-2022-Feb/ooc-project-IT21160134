#include <iostream>
#include <cstring>
 
 using namespace std;
 
//Declaring Driver Class
 class Driver{
  	private:
  		char driverID[20];
  		char driverName[20];
  		char licenceNumber[20];
  		
  	public:
  	Driver(const char Did[], const char Dname[], const char Lnumber[]);
  	void displaydriverdetails();
  	~Driver();
  };
  
  //Implementation of Driver Class
   Driver::Driver(const char Did[], const char Dname[], const char Lnumber[]){
   	strcpy(driverID,Did);
    strcpy(driverName,Dname);
   	strcpy(licenceNumber,Lnumber);
   }

   void Driver::displaydriverdetails()
   {
   	 cout << "DriverID = " << driverID << endl;
     cout << "DriverName = " << driverName << endl;
     cout << "LicenceNumber = " << licenceNumber << endl;
   }
 	Driver::~Driver()
 	{
 		cout << "Destructor" << endl;
	 }
 
 #define SIZE 2
 //class hotel guide
 class Hotelguide{
  	private:
  		Driver* driver[2];
  	public:
  	Hotelguide();

	void addDriver(Driver *driver1, Driver *driver2);
	void displayHotelguide();
  	~Hotelguide();
  };
  

   Hotelguide::Hotelguide()
   {
   		
   }
   void Hotelguide::addDriver(Driver*driver1, Driver*driver2)
   {
   	driver[0] = driver1;
	driver[1] = driver2;
   }
   
   void Hotelguide::displayHotelguide()
   {
	for (int i = 0; i < SIZE; i++)
	driver[i]-> displaydriverdetails();
   }
   
   	Hotelguide::~Hotelguide()
   
   {
	cout << "Hotel down" << endl;
   }
   //main program 
   int main() {
   	Hotelguide* guide = new Hotelguide();
   	Driver* driver1 = new Driver("D234567", "Saman", "B264947");
   	Driver* driver2 = new Driver("D369725", "Thilin", "V304753");
   	
   	guide->addDriver(driver1, driver2);
    guide->displayHotelguide();



    delete guide;//delete dynamic object 

    return 0;
   }
	
   
   
   