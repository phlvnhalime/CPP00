#include "contact.hpp"

/*
    I can do this in the library but this is more readable and understand the connection between in the class.
*/


Contact::Contact(){
    //Default function.
}

void    Contact::Info(const std::string &first, const std::string &last,const std::string &nick,const std::string &phone, const std::string &darkest)
{
    firstName = first;
    lastName = last;
    nickName = nick;
    phoneNumber = phone;
    darkestSecret = darkest;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickName() const {
    return nickName;
}


std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}