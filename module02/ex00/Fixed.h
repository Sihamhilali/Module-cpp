#pragma once

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fx);
        Fixed& operator=(const Fixed& fx);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
