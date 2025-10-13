#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    int                 num;
    static const int    frac_bits;

    public:
    Fixed();
    Fixed(const Fixed& cpyfxd);
    Fixed &operator=(const Fixed& srcfxd);
    ~Fixed(void);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};

#endif