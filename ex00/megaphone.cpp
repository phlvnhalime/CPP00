#include <iostream>
#include <string>
#include <cctype>

char ft_toupper(char c);

int main(int ac, char *av[])
{
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for(int i = 1 ; i < ac ; i++)
        {

            std::string arg(av[i]);
            size_t j = 0;
            while(j < arg.length()) // It is write everything without space
            {
                std::cout << ft_toupper(arg[j]);
                j++;
            }
            // If i want to add space in here i have to add space
            /*
                if(i < ac -1)
                {
                    cout << " "; 
                } // after the each arguments

                BUTT FOR evey space i can see

            */
        }
        std::cout << std::endl;
    }
    return 0;
}


char ft_toupper(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return (c - 32);
    }
    return (c);
}