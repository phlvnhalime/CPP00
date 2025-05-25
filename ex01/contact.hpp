#pragma once

#include <string>

class Contact
{
    private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    public:
        Contact(); // I don't need to declare it but it want to see all off thinks now.
        void    Info(const string &first, const string &last,const string &nick,const string &phone, const string &darkest);

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkestSecret() const;
        
};
