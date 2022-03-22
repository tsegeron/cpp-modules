//
// Created by Grubbly Ernesto on 3/19/22.
//

#include "Fixed.h"

Fixed::Fixed() : fpNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const &a)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpNumber = a << this->bits;
//	24(before dot):8(after dot)
}

Fixed::Fixed(float const &a)
{
	std::cout << "Float constructor called" << std::endl;

	this->fpNumber = (int) roundf(a * (1 << this->bits));
}

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

const	Fixed & Fixed::operator = (Fixed const &cp)
{
	std::cout << "Copy assignment operator called" << std::endl;

	this->fpNumber = cp.getRawBits();

	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}



int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->fpNumber);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->fpNumber = raw;
}



float	Fixed::toFloat() const
{
	return ((float)(this->fpNumber) / (1 << this->bits));
}

int		Fixed::toInt() const
{
	return (this->fpNumber >> this->bits);
}


std::ostream & operator << (std::ostream & o, Fixed const &cp)
{
	o << cp.toFloat();

	return o;
}
