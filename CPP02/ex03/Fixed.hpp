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
    ~Fixed();

    Fixed &operator=(const Fixed& srcfxd);
    Fixed operator*(const Fixed& number) const;
    Fixed operator+(const Fixed& number) const;
    Fixed operator-(const Fixed& number) const;
    Fixed operator/(const Fixed& number) const;
    
    bool operator>(const Fixed& smtg) const;
    bool operator<(const Fixed& smtg) const;
    bool operator>=(const Fixed& smtg) const;
    bool operator<=(const Fixed& smtg) const;
    bool operator==(const Fixed& smtg) const;
    bool operator!=(const Fixed& smtg) const;

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    int toInt( void ) const;
    float toFloat( void ) const;

    static Fixed& min(Fixed& i, Fixed& j);
    static const Fixed& min(const Fixed& i, const Fixed& j);
    static Fixed& max(Fixed& i, Fixed& j);
    static const Fixed& max(const Fixed& i,const Fixed& j);

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
};

std::ostream &operator<<(std::ostream &out, const Fixed &num);

#endif