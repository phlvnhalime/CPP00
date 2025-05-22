#pragma once

#include <string>
using namespace std;
class Contact
{
    private:
        string firstName;
        string lastName;
        string nickName;
        string phoneNumber;
        string darkestSecret;
    public:
        Contact(); // I don't need to declare it but it want to see all off thinks now.
        void    Info(const string &first, const string &last,const string &nick,const string &phone, const string &darkest);

        string getFirstName() const;
        string getLastName() const;
        string getNickName() const;
        string getPhoneNumber() const;
        string getDarkestSecret() const;
        
};
