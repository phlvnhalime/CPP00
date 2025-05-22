#include "Contact.hpp"

/*
    I can do this in the library but this is more readable and understand the connection between in the class.
*/

using namespace std;

Contact::Contact(){
    //Default function.
}

void    Contact::Info(const string &first, const string &last,const string &nick,const string &phone, const string &darkest)
{
    firstName = first;
    lastName = last;
    nickName = nick;
    phoneNumber = phone;
    darkestSecret = darkest;
}

string Contact::getFirstName() const {
    return firstName;
}

string Contact::getLastName() const {
    return lastName;
}

string Contact::getNickName() const {
    return nickName;
}


string Contact::getPhoneNumber() const {
    return phoneNumber;
}

string Contact::getDarkestSecret() const {
    return darkestSecret;
}