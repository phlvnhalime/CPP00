#include "phonebook.hpp"

PhoneBook::PhoneBook() : count(0), oldPeople(0){

}

void PhoneBook::addPeople(const Contact& whoAreYou){
    if(count < 8)
    {
        people[count] = whoAreYou;
        count++;
    }
    else
    {
        people[oldPeople] = whoAreYou;
        oldPeople = (oldPeople + 1) % 8;
    }
}

std::string truncateStr(const std::string &str) {

    if(str.length() > 10)
    {
        return (str.substr(0,9) + ".");
    }
    return str;
}

/*
    If the text is longer than the column,
    it must be truncated and the last displayable character must be replaced by a
    dot (’.’).

*/

void PhoneBook::displayTable() const {
    std::cout << std::right; // Left is better than right !
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nick Name" << std::endl;

    for(int i = 0; i < count ; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncateStr(people[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncateStr(people[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncateStr(people[i].getNickName()) << std::endl;
    }
}

void PhoneBook::displayContacts(int index) const {

    if(index < 0 ||  index >= count)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    std::cout << "First Name: " << people[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << people[index].getLastName() << std::endl;
    std::cout << "Nick Name: " << people[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << people[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << people[index].getDarkestSecret() << std::endl;

}

int PhoneBook::CountIt() const {
    return count;
}

