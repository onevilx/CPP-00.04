#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
    private:
    int     num;
    static const int    frac_bits;

    public:
    Fixed();
    Fixed(const int nb);
    Fixed(const float tonb);
    Fixed(const Fixed &cpyfxd);
    Fixed &operator=(const Fixed& srcfxd);
    ~Fixed();
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    int toInt( void ) const;
    float toFloat( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &num);

#endif