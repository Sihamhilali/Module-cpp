#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
};

PhoneBook::~PhoneBook()
{};

 void PhoneBook::add_contact()
 {
    std::string name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
    std::cout << "Enter first name: ";
    if(!std::getline(std::cin ,name))
        exit(0);
    std::cout << "Enter last name: ";
    if(!std::getline(std::cin ,last_name))
        exit(0);
    std::cout << "Enter nickname: ";
    if(!std::getline(std::cin ,nickname))
        exit(0);
    std::cout << "Enter phone number: ";
    if(!std::getline(std::cin ,phone_number))
        exit(0);
    std::cout << "Enter darkest secret: ";
    if(!std::getline(std::cin ,darkest_secret))
        exit(0);
    if (!name.empty() && name.c_str()[0] != ' ' && !last_name.empty() && last_name.c_str()[0] != ' ' && !nickname.empty() && nickname.c_str()[0] != ' ' && !phone_number.empty() && phone_number.c_str()[0] != ' ' && !darkest_secret.empty() && darkest_secret.c_str()[0] != ' ') 
    {
        contact[index].set_first_name(name);
        contact[index].set_last_name(last_name);
        contact[index].set_nickname(nickname);
        contact[index].set_phone_number(phone_number);
        contact[index].set_darkest_secret(darkest_secret);
        this->index++;
        if (this->index > 7)
            this->index = 0;
    }
    else
    {
        std::cout << "Error: empty" << std::endl;
        return ;
    }
 }

void PhoneBook::search_contact()
{
    int i;
    std::string index;
    i = 0;
    std::cout << std::setw(10) <<"index"<< "|" << std::setw(10) << "first_name" << "|" << std::setw(10) << "last_name" << "|" << std::setw(10) << "nickname" << std::endl;
   
    while(i < 8)
    {
        if(this->contact[i].get_first_name().empty() == false)
        {

            std::cout << std::setw(10) << "---------" << "|" << std::setw(10) << "----------" << "|" << std::setw(10) << "----------" << "|" << std::setw(10) << "----------" << std::endl;
            std::cout << std::setw(10) << i << "|" << std::setw(10) << ((this->contact[i].get_first_name().length() > 10) ? (this->contact[i].get_first_name().substr(0, 9) + ".") : this->contact[i].get_first_name());
            std::cout << "|"  << std::setw(10) <<((this->contact[i].get_last_name().length() > 10) ? (this->contact[i].get_last_name().substr(0, 9) + ".") : this->contact[i].get_last_name()) << "|";
            std::cout << std::setw(10) << ((this->contact[i].get_nickname().length() > 10 ) ? (this->contact[i].get_nickname().substr(0, 9) + ".") : this->contact[i].get_nickname()) << std::endl;
        }else 
            break;
        i++;
    }
    if(contact[0].get_first_name().empty())
        std::cout << "no contacts ..."<< std::endl;
    else
    {
        std::cout << "index "<<std::endl;
        if (!std::getline(std::cin, index))
            exit(0);
        if(index.empty() || index == " ")
            std::cout << "index is empty ....." << std::endl;
        else
        {
            i = index[0] - 48;
            if(i < 0 || i > 7)
                std::cout<< "this index is invalide"<< std::endl;
            else if (!contact[i].get_first_name().empty())
            {
                std::cout << "first_name: "<<this->contact[i].get_first_name() << std::endl;
                std::cout << "last_name:  "<<this->contact[i].get_last_name() << std::endl;
                std::cout << "nickname: "<< this->contact[i].get_nickname() << std::endl;
                std::cout << "phone_number: " << this->contact[i].get_phone_number() << std::endl;
                std::cout << "darkest_secret: " << this->contact[i].get_darkest_secret() << std::endl;
                
            }
            else 
                std::cout << "there's no contact with the giving index" << std::endl;
        }
    } 
}
