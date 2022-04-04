//
// Created by Grubbly Ernesto on 3/19/22.
//

#include "Fixed.h"

Fixed::Fixed() : fpNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
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

	return this->fpNumber;
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->fpNumber = raw;
}
