#include <iostream>
#include<cstring>
using namespace std;
class Owner {
private:
int ownerID;
char ownerName[20];
char ownerEmail[20];
public:
Owner(int Oid, const char Oname[], const char Oemail[]);
void displayOwnerdetails();
~Owner();
//void controllhotelmanagement();
//void checkingVIParrivel();
};
//Implementation of Owner Class
Owner::Owner(int Oid, const char Oname[], const char Oemail[]) {

 ownerID = Oid;
strcpy_s(ownerName, Oname);
strcpy_s(ownerEmail, Oemail);
}
void Owner::displayOwnerdetails()
{
cout << "OwnerID = " << ownerID << endl;
cout << "OwnerName = " << ownerName << endl;
cout << "OwnerEmail = " << ownerEmail << endl;
}
Owner::~Owner()
{
cout << "Destructor" << endl;

}
#define SIZE 2
class Hotel {
private:
Owner* owner[SIZE];

public:
Hotel();
void addOwner(Owner* owner1, Owner* owner2);
void displayHotel();
~Hotel();
};
Hotel::Hotel()
{
//error
}
void Hotel::addOwner(Owner* owner1, Owner* owner2)
{
owner[0] = owner1;
owner[1] = owner2;
}
void Hotel::displayHotel()
{
for (int i = 0; i < SIZE; i++)
owner[i]->displayOwnerdetails();
}
Hotel::~Hotel()
{
cout << "Hotel down" << endl;
}

int main() {

 Hotel* kings = new Hotel();
Owner* ow1 = new Owner(542256, "Sandakelum", "sandakelum@email.com");
Owner* ow2 = new Owner(578738, "Damitha", "Damitha@email.com");

 kings->addOwner(ow1, ow2);
kings->displayHotel();

 delete kings;

 return 0;
}
