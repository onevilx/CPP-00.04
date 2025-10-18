#include "Fixed.hpp"

const int    Fixed::frac_bits = 8;

Fixed::Fixed() : num(0)
{
    std::cout << "Default constructor called" << std::endl;
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

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->num;
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->num = raw;
}