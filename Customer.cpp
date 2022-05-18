#include <iostream>
#include <cstring>
using namespace std;

//implement Customer Class
class Customer {
	protected:
		int customerID;
		char customerName[50];

	public:
		Customer(){
			customerID=2001;
			strcpy(customerName,"Pasan");
		}
		void display();
    void displaycustomerdetails();
};

//implement Customer class function
void Customer::display(){
		cout<<"Customer"<<endl;
}

void Customer::displaycustomerdetails(){
			cout<<customerID<<"  "<<customerName<<" "<<endl;
		}


//implement Registered Customer class
class RegisteredCustomer : public Customer{
	protected:
		int registeredCustomerPhone;
		char registeredCustomerEmail[60];
		
	public:
		RegisteredCustomer(){
			customerID=2002;
			strcpy(customerName,"Dilrukshi");
			registeredCustomerPhone=0711025600;
			strcpy(registeredCustomerEmail,"dilrukshi@gmail.com");
		}
		void display();
	  void setpayment();
		void updateprofile();
		void dispalyregisteredCustomerditails();
};

//implement Register Customer class function
void RegisteredCustomer::display(){
			cout<<"Registered Customer"<<endl;
}

void RegisteredCustomer::dispalyregisteredCustomerditails(){
			cout<<customerID<<"  "<<customerName<<"  "      
      <<registeredCustomerPhone<<"  "<<registeredCustomerEmail<<" "<<endl;
}

void RegisteredCustomer::setpayment(){
  
}

void RegisteredCustomer::updateprofile(){
  
}

//implement Unregistered Customer class
class UnregisteredCustomer : public Customer {
	protected:
		int unregisteredCustomerPhone;
		char unregisteredCustomerEmail[60];

	public:
		UnregisteredCustomer(){
			customerID=2003;
			strcpy(customerName,"Umangana");
			unregisteredCustomerPhone=0764163022;
			strcpy(unregisteredCustomerEmail,"umangana@gmail.com");
		}
		
		void display();
	  void setpayment();
		void registration();
		void dispalyunregisteredCustomerditails();
};

//implement Unregistered Customer class function
void UnregisteredCustomer::display(){
			cout<<"Unregistered Customer"<<endl;
}	

void UnregisteredCustomer::dispalyunregisteredCustomerditails(){
			cout<<customerID<<"  "<<customerName<<"  " 
      <<unregisteredCustomerPhone<<"  "<<unregisteredCustomerEmail<<" "<<endl;
}

void UnregisteredCustomer::setpayment(){
  
}

void UnregisteredCustomer::registration(){
  
}

//Main Program
int main(){
	
	Customer C1;
	RegisteredCustomer Recus1;
	UnregisteredCustomer Unrecus1;
	
	C1.display();
  C1.displaycustomerdetails();
  cout<<endl;
  
	Recus1.display();
  Recus1.dispalyregisteredCustomerditails();
  cout<<endl;
  
	Unrecus1.display();
	Unrecus1.dispalyunregisteredCustomerditails();
	
	return 0;
}		
		
		
		
		
		
		
		
		
			
