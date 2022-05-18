#include<iostream>
#include<cstring>
using namespace std;

class reservationPayment { //resarvationpayment class

public:
	reservationPayment();
	~reservationPayment();
	void displayPaymentDetails();
};

reservationPayment::reservationPayment()
{

}
reservationPayment::~reservationPayment()
{

}
void reservationPayment::displayPaymentDetails()
{

}
class Customer { //customer class
	
protected:
	reservationPayment* reservePayment;
	int customerID;
	char customerName[40]; 

public:
	Customer() {
		customerID = 2001;
		strcpy(customerName, "Nimal");
	}
	void display();
	void displaycustomerdetails();
	~Customer();
};

//implement Customer class function
void Customer::display() {

	cout << "Customer" << endl;
}

void Customer::displaycustomerdetails() {

	cout << customerID << " " << customerName << " " << endl;
	
}
Customer::~Customer()
{

}

int main()//main program
{
	Customer* cus1 = new Customer();//create dynamic object
	reservationPayment* repay1 = new reservationPayment();

	cus1->displaycustomerdetails();

	delete cus1;//delete dynamic object
	
}

