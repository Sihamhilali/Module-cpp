
#pragma once
#include <iostream>

class Fixed{

    private:

        int value;
        static const int bits = 8;
    
    public:
    
        Fixed();
        Fixed(const Fixed &fx);
        Fixed(const int inInt);
        Fixed(const float inFloat);
        Fixed& operator=(const Fixed &fx);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        float toFloat(void) const;
        int toInt(void) const;
        
        ~Fixed();
};
std::ostream &operator<<(std::ostream &stream, const Fixed &nbr);

