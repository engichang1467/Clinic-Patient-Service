/*
 * Patient.cpp
 * 
 * Class Description: Models a walk-in clinic patient.
 * Class Invariant: Each patient has a unique care card number.
 *                  This care card number must have 10 digits.
 *                  This care card number cannot be modified. 
 *
 * Author: Michael Chang
 * Date: January 22, 2019
 */

// You can add #include statements if you wish.
#include <iostream>
#include <string>
#include "Patient.h"

using namespace std;
// Default Constructor
// Description: Create a patient with a care card number of "0000000000". 
// Postcondition: All data members set to "To be entered", 
//                except the care card number which is set to "0000000000".       
Patient::Patient() 
{
	// You need to complete this method.
	Name = "To be entered";
	Address = "To be entered";
	Phone = "To be entered";
	Email = "To be entered";
	CareCard = "0000000000";
}

// Parameterized Constructor
// Description: Create a patient with the given care card number.
// Postcondition: If aCareCard does not have 10 digits, then care card is set to "0000000000".
//                All other data members set to "To be entered".
Patient::Patient(string aCareCard) 
{
	// You need to complete this method.
	Name = "To be entered";
	Address = "To be entered";
	Phone = "To be entered";
	Email = "To be entered";

	int cardNum = aCareCard.length(); //countLen(aCareCard);

	if (cardNum != 10)
		CareCard = "0000000000";
	else
		CareCard = aCareCard;

}

// Getters and setters -> You need to implement these methods.

// Overloaded Operators
// Description: Comparison operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if both Patient objects have the same care card number.
bool Patient::operator == (const Patient & rhs) {
	
	// Compare both Patient objects
	if (this->CareCard == rhs.getCareCard() ) 
		return true;
	else 
		return false;
	
} // end of operator ==

// Description: Greater than operator. Compares "this" Patient object with "rhs" Patient object.
//              Returns true if the care card number of "this" Patient object is > the care card 
//              number of "rhs" Patient object
bool Patient::operator > (const Patient & rhs) {
	
	// Compare both Patient objects
	if (this->CareCard > rhs.getCareCard() ) 
		return true;
	else 
		return false;
	
} // end of operator >


// Getters and setters
// Description: Returns patient's name.
string Patient::getName() const
{
	return Name;
}

// Description: Returns patient's address.
string Patient::getAddress() const
{
	return Address;
}

// Description: Returns patient's phone.
string Patient::getPhone() const
{
	return Phone;
}

// Description: Returns patient's email.
string Patient::getEmail() const
{
	return Email;
}

// Description: Returns patient's care card.
string Patient::getCareCard() const
{
	return CareCard;
}

// Description: Sets the patient's name.
void Patient::setName(const string aName)
{
	Name = aName;
}

// Description: Sets the patient's address.
void Patient::setAddress(const string anAddress)
{
	Address = anAddress;
}

// Description: Sets the patient's phone.
void Patient::setPhone(const string aPhone)
{
	Phone = aPhone;
}

// Description: Sets the patient's email.
void Patient::setEmail(const string anEmail)
{
	Email = anEmail;
}

// Description: Prints the content of "this".
ostream &operator<<(ostream &os, const Patient &p)
{
	
// You need to complete this method.  
	// 2345678901 - Patient: Marie Lower, 123 A Ave Vancouver, 778-123-1234, marie@somewhere.ca 
	cout << p.CareCard << " - Patient: " << p.Name << ", " << p.Address << ", " << p.Phone << ", " << p.Email << endl;
	return os;

} // end of operator<<

// end of Patient.cpp
