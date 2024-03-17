
#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string operation;

    while (operation != "EXIT")
    {
        std::cout << "what do u want ? ADD || SEARCH || EXIT !!"<< std::endl;
        if (!std::getline(std::cin ,operation))
            exit(0);
        if(operation == "ADD")
            PhoneBook.add_contact();
        else if(operation == "SEARCH")
                PhoneBook.search_contact();
    }
    return(0); 
}
