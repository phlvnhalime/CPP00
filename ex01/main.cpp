#include "phonebook.hpp"
#include "contact.hpp"
#include <string>
#include <iostream>

using namespace std;

string enterInput(const string &dot)
{
    string input;
    do
    {
        cout << dot;
        getline(cin, input);
        if(cin.eof())
        {
            cout << "\nEnd of line! Program is closed!" << endl;
            exit(0);
        }
        if(input.empty())
        {
            cout << "\nInput is empty. Please try again!" << endl;
            exit(0);
        }
    } while (input.empty());

    return (input);    
}

void addContact(PhoneBook &phoneBook)
{
    Contact new_person;
    string firstName, lastName, nickName, phoneNumber, darkestSecret;

    firstName = enterInput("Enter the first name: ");
    lastName = enterInput("Enter the last name: ");
    nickName = enterInput("Enter the nick name: ");
    phoneNumber = enterInput("Enter the phone number: ");
    darkestSecret = enterInput("Enter the darkest secret: ");

    new_person.Info(firstName,lastName,nickName,phoneNumber,darkestSecret);
    phoneBook.addPeople(new_person);

    cout << "Added Successfully!" << endl;
}

void searchContact(PhoneBook &phoneBook)
{
    if (phoneBook.CountIt() == 0)
    {
        cout << "There is nobody in my phonebook!" << endl;
        exit(0);
    }

    phoneBook.displayTable();

    cout << "Who do you want to call: " << endl;
    string strIndex;
    getline(cin,strIndex);

    if(cin.eof())
    {
        cout << "Back to phonebook!" << endl;
        exit(0);
    }

    for(size_t i = 0; i < strIndex.length(); i++)
    {
        if (!isdigit(strIndex[i]))
        {
            cout << "Invalid index!" << endl;
            return;
        }
    }

    int index;
    if(strIndex.empty())
    {
        index = -1;
    }
    else
    {
        index = stoi(strIndex); //string to integer
    }

    phoneBook.displayContacts(index);
}

int main()
{
    PhoneBook phoneBook;
    string command;

    cout << "Welcome to Halime's PhoneBook!" << endl;

    while(1)
    {
        cout << "\n Enter a command (ADD, SEARCH, EXIT): ";
        getline(cin, command);

        if(cin.eof()) // Affective to use for control-C and control D 
        {
            cout << "\nEnd of file!" << endl;
            break;
        }

        if(command == "ADD")
        {
            addContact(phoneBook);
        }
        else if(command == "SEARCH")
        {
            searchContact(phoneBook);
        }
        else if (command == "EXIT")
        {
            cout << "You will lost all contact forever! Good Bye :)" << endl;
            break;
        }
    }

    return (0);
}