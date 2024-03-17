#include"Brain.hpp"

Brain::Brain()
{
    std::cout << "default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &Ba)
{
    std::cout <<"copy Brain constructor called"<<std::endl;
    *this = Ba;
}

Brain &Brain::operator=(const Brain &Ba)
{
    for(int i = 0; i < 100 ; i++ )
        this->Ideas[i] = Ba.Ideas[i]; 
    std::cout <<"Brain assignation operator called"<<std::endl;
    return(*this);
}
Brain::~Brain()
{
    std::cout <<"default Brain destructor called"<<std::endl;
}
