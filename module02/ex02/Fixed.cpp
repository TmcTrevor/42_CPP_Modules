#include "Fixed.hpp"

const int Fixed::nb_bits = 8;

Fixed::Fixed()
{
	fixed_v = 0;
	Cout << GREEN << "Default constuctor called" <<DEFAULT << Endl;
}

Fixed::~Fixed()
{
	Cout << RED << "Fixed object destroyed" << DEFAULT << Endl;
}

Fixed::Fixed(const Fixed &f)
{
	this->fixed_v = f.fixed_v;
	Cout << BLUE << "Copy constuctor called" << DEFAULT << Endl;
}

Fixed Fixed::operator=(const Fixed &f)
{
	this->fixed_v = f.fixed_v;
	Cout << PURPLE << "Assignment operator called" << DEFAULT << Endl;
}

int Fixed::getRawBits(void) const
{
	Cout << WHITE << "getRawBits member function called" << DEFAULT << Endl;
	return (fixed_v);
}

void Fixed::setRawBits(int const raw)
{
	Cout << WHITE << "setRawBits member function called" << DEFAULT << Endl;
	this->fixed_v = raw;
}