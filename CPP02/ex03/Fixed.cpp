#include "Fixed.hpp"

#include "Fixed.hpp"

const int   Fixed::frac_bits = 8;

Fixed::Fixed() : num(0) {}

Fixed::Fixed(const int nb)
{
        num = nb << frac_bits;
}

Fixed::Fixed(const float tonb)
{
    num = roundf(tonb * (1 << frac_bits));
}

Fixed::Fixed(const Fixed& cpyfxd)
{
    *this = cpyfxd;
}

int Fixed::toInt( void ) const
{
    return num >> frac_bits;
}

float Fixed::toFloat( void ) const
{
    return (float)num / (1 << frac_bits);
}

int Fixed::getRawBits( void ) const
{
    return this->num;
}

void    Fixed::setRawBits( int const raw )
{
    this->num = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &num)
{
    out << num.toFloat();
    return out;
}

Fixed &Fixed::operator=(const Fixed& srcfxd)
{
    if (this != &srcfxd)
    this->num = srcfxd.getRawBits();
    return *this;
}

Fixed Fixed::operator*(const Fixed& number) const
{
    Fixed result;
    result.setRawBits((this->num * number.num) >> frac_bits);
    return result;
}

Fixed Fixed::operator+(const Fixed& number) const
{
    Fixed result;
    result.setRawBits(this->num + number.num);
    return result;
}

Fixed Fixed::operator-(const Fixed& number) const
{
    Fixed result;
    result.setRawBits(this->num - number.num);
    return result;
}

Fixed Fixed::operator/(const Fixed& number) const
{
    Fixed result;
    result.setRawBits((this->num << frac_bits) / number.num);
    return result;
}

bool   Fixed::operator>(const Fixed& smtg) const
{
    return (this->num > smtg.num);
}

bool   Fixed::operator<(const Fixed& smtg) const
{
    return (this->num < smtg.num);
}

bool   Fixed::operator>=(const Fixed& smtg) const
{
    return (this->num >= smtg.num);
}

bool   Fixed::operator<=(const Fixed& smtg) const
{
    return (this->num <= smtg.num);
}

bool   Fixed::operator==(const Fixed& smtg) const
{
    return (this->num == smtg.num);
}

bool   Fixed::operator!=(const Fixed& smtg) const
{
    return (this->num != smtg.num);
}

Fixed& Fixed::min(Fixed& i, Fixed& j)
{
    if (i < j)
        return i;
    else
        return j;
}

const Fixed& Fixed::min(const Fixed& i, const Fixed& j)
{
    if ( i < j)
        return i;
    else
        return j;
}

Fixed& Fixed::max(Fixed& i, Fixed& j)
{
    if (i > j)
        return i;
    else
        return j;
}

const Fixed& Fixed::max(const Fixed& i, const Fixed& j)
{
    if (i > j)
        return i;
    else
        return j;
}

Fixed& Fixed::operator++()
{
    ++this->num;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed& Fixed::operator--()
{
    --this->num;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --*this;
    return tmp;
}

Fixed::~Fixed() {}
