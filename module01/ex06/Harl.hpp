#include <iostream>
#pragma once

class Harl
{
private:
    void debug(void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Harl();
    ~Harl();
    void complain( std::string level );
};


