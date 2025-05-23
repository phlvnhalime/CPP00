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

string truncateStr(const string &str) {

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
    cout << right; // Left is better than right !
    cout << setw(10) << "Index" << "|";
    cout << setw(10) << "First Name" << "|";
    cout << setw(10) << "Last Name" << "|";
    cout << setw(10) << "Nick Name" << endl;

    for(int i = 0; i < count ; i++)
    {
        cout << setw(10) << i << "|";
        cout << setw(10) << truncateStr(people[i].getFirstName()) << "|";
        cout << setw(10) << truncateStr(people[i].getLastName()) << "|";
        cout << setw(10) << truncateStr(people[i].getNickName()) << endl;
    }
}

void PhoneBook::displayContacts(int index) const {

    if(index < 0 ||  index >= count)
    {
        cout << "Invalid index!" << endl;
        return;
    }

    cout << "First Name: " << people[index].getFirstName() << endl;
    cout << "Last Name: " << people[index].getLastName() << endl;
    cout << "Nick Name: " << people[index].getNickName() << endl;
    cout << "Phone Number: " << people[index].getPhoneNumber() << endl;
    cout << "Darkest Secret: " << people[index].getDarkestSecret() << endl;

}

int PhoneBook::CountIt() const {
    return count;
}

