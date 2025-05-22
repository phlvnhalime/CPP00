#pragma once

#include <iomanip> // This library for ordering the phonebook size.
#include <iostream>
#include "contact.hpp"

class PhoneBook {
    private:
    Contact people[8]; // Max number of the phonebook list.
    int count;
    int oldPeople;
    public:
    PhoneBook(); // I will declare it count and old people.
    void addPeople(const Contact& whoAreYou);
    void displayTable() const;
    void displayContacts() const;
}
