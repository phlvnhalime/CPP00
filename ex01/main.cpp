#include "phonebook.hpp"
#include "contact.hpp"
#include <string>
#include <iostream>

std::string enterInput(const std::string &dot)
{
    std::string input;
    do
    {
        std::cout << dot;
        std::getline(std::cin, input);
        if(std::cin.eof())
        {
            std::cout << "\nEnd of line! Program is closed!" << std::endl;
            exit(0);
        }
        if(input.empty())
        {
            std::cout << "\nInput is empty. Please try again!" << std::endl;
            exit(0);
        }
    } while (input.empty());

    return (input);    
}

void addContact(PhoneBook &phoneBook)
{
    Contact new_person;
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    firstName = enterInput("Enter the first name: ");
    lastName = enterInput("Enter the last name: ");
    nickName = enterInput("Enter the nick name: ");
    phoneNumber = enterInput("Enter the phone number: ");
    darkestSecret = enterInput("Enter the darkest secret: ");

    new_person.Info(firstName,lastName,nickName,phoneNumber,darkestSecret);
    phoneBook.addPeople(new_person);

    std::cout << "Added Successfully!" << std::endl;
}

void searchContact(PhoneBook &phoneBook)
{
    if (phoneBook.CountIt() == 0)
    {
        std::cout << "There is nobody in my phonebook!" << std::endl;
        exit(0);
    }

    phoneBook.displayTable();

    std::cout << "Who do you want to call: " << std::endl;
    std::string strIndex;
    std::getline(std::cin,strIndex);

    if(std::cin.eof())
    {
        std::cout << "Back to phonebook!" << std::endl;
        exit(0);
    }

    for(size_t i = 0; i < strIndex.length(); i++)
    {
        if (!isdigit(strIndex[i]))
        {
            std::cout << "Invalid index!" << std::endl;
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
    std::string command;

    std::cout << "Welcome to Halime's PhoneBook!" << std::endl;

    while(1)
    {
        std::cout << "\n Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if(std::cin.eof()) // Affective to use for control-C and control D 
        {
            std::cout << "\nEnd of file!" << std::endl;
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
            std::cout << "You will lost all contact forever! Good Bye :)" << std::endl;
            break;
        }
    }

    return (0);
}