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

/********************** Comparison operators ********************/
bool Fixed::operator==(Fixed const &f)
{
	if (f.toInt() == this->toInt())
		return true;
	return (false);
}

bool Fixed::operator>(Fixed const &f)
{
	if (f.toInt() > this->toInt())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &f)
{
	if (f.toInt() < this->toInt())
		return (true);
	return (false);
}
bool Fixed::operator>=(Fixed const &f)
{
	if (f.toInt() >= this->toInt())
		return (true);
	return (false);
}
bool Fixed::operator<=(Fixed const &f)
{
	if (f.toInt() <= this->toInt())
		return (true);
	return (false);
}
bool Fixed::operator!=(Fixed const &f)
{
	if (f.toInt() != this->toInt())
		return (true);
	return (false);
}
 /************* Arethmetic operators ********************/
Fixed Fixed::operator+(Fixed const &f)
{
	return (this->toFloat() + f.toFloat());
}

Fixed Fixed::operator-(Fixed const &f)
{
	return (this->toFloat() - f.toFloat());
}

Fixed Fixed::operator*(Fixed const &f)
{
	return (this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(Fixed const &f)
{
	return (this->toFloat() / f.toFloat());
}

/***************** inc/dec ****************/

Fixed Fixed::operator++()
{
	++fixed_v;
	return (*this);
}

Fixed Fixed::operator--()
{
	--fixed_v;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed a;
	
	a = *this;
	fixed_v++;
	return (a);
}

Fixed Fixed::operator--(int)
{
	Fixed a;

	a = *this;
	fixed_v--;
	return (*this);
}

/****************** min /max function **************/

Fixed &Fixed::min(Fixed &a, Fixed& b)
{
	if (a > b) 
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed& b)
{
	if (a < b) 
		return a;
	return b;
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.fixed_v > b.fixed_v) 
		return a;
	return b;
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.fixed_v < b.fixed_v)
		return a;
	return b;
}
