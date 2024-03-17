
#include"Harl.hpp"

void Harl::debug()
{
    std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;

}
void Harl::warning( void )
{
    std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now."<<std::endl;
}
Harl::Harl()
{

}
Harl::~Harl()
{

}

void Harl::complain( std::string level)
{
    int i = 0;
    std::string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (i = 0; i < 4; i++)
    {
        if (table[i] == level)
        {
            (this->*f[i])();
            break;
        }
    }
    if(i >= 4)
        std::cout << "Wrong level" << std::endl;
}