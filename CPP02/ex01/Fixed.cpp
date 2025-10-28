#include "Fixed.hpp"

const int    Fixed::frac_bits = 8;

Fixed::Fixed() : num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int Constructor called" << std::endl;
    num = nb << frac_bits;
}

Fixed::Fixed(const float tonb)
{
    std::cout << "Float constructor called" << std::endl;
    num = roundf(tonb * (1 << frac_bits));
}

Fixed::Fixed(const Fixed& cpyfxd)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpyfxd;
}

Fixed &Fixed::operator=(const Fixed& srcfxd)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &srcfxd)
        this->num = srcfxd.getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt( void ) const
{
    return num >> frac_bits;
}

float Fixed::toFloat( void ) const
{
    return (float)num / (1 << frac_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &num)
{
    out << num.toFloat();
    return out;
}

int     Fixed::getRawBits( void ) const
{
    return this->num;
}

void    Fixed::setRawBits( int const raw )
{
    this->num = raw;
}