#include "phonebook.hpp"

using namespace std;

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

void PhoneBook::displayTable() const {
    cout << right;
    cout << setw(10) << "Index" << "|";
    cout << setw(10) << "First Name" << "|";
    cout << setw(10) << "Last Name" << "|";
    cout << setw(10) << "Nick Name" << endl;

    for(int i; i < count ; i++)
    {
        cout << setw(10) << i << "|";
        cout << setw(10) << people[i].getFirstName() << "|";
        cout << setw(10) << people[i].getLastName() << "|";
        cout << setw(10) << people[i].getNickName() << endl;
    }
}

// void PhoneBook::displayContacts() const {

// }

int PhoneBook::CountIt() const {
    return count;
}

