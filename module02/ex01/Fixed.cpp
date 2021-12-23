#include "Fixed.hpp"

const int Fixed::nb_bits = 8;

Fixed::Fixed()
{
	fixed_v = 0;
	Cout << GREEN << "[ Default ] constuctor called" <<DEFAULT << Endl;
}

Fixed::~Fixed()
{
	Cout << RED << *this <<" Fixed object destroyed" << DEFAULT << Endl;
}

Fixed::Fixed(Fixed const &f)
{
	this->fixed_v = f.fixed_v;
	Cout << BLUE << "[ Copy ] constuctor called" << DEFAULT << Endl;
}

Fixed::Fixed(const int a)
{
	this->fixed_v = (a << nb_bits);
	Cout << GREEN << "[ int ] constuctor called" <<DEFAULT << Endl;
}

Fixed::Fixed(const float a)
{
	this->fixed_v = roundf(a * (1 << nb_bits));
	Cout << GREEN << "[ float ] constuctor called" <<DEFAULT << Endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	this->fixed_v = f.fixed_v;
	Cout << PURPLE << "Assignment operator called" << DEFAULT << Endl;
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->fixed_v >> nb_bits);
}

float	Fixed::toFloat(void) const
{
	// f
	return (this->fixed_v / (float)( 1 << nb_bits));
}

int Fixed::getRawBits(void) const
{
	Cout << WHITE << "getRawBits member function called : " << DEFAULT;
	return (fixed_v);
}

void Fixed::setRawBits(int const raw)
{

	Cout << WHITE << "setRawBits member function called" << DEFAULT << Endl;
	this->fixed_v = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}