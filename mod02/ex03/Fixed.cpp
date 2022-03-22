//
// Created by Grubbly Ernesto on 3/19/22.
//

#include "Fixed.h"

//	------------------------------------------------------------------------

Fixed::Fixed() : fpNumber(0)
{
}

Fixed::Fixed(int const &a)
{
	this->fpNumber = a << this->bits;
}

Fixed::Fixed(float const &a)
{
	this->fpNumber = (int) roundf(a * (1 << this->bits));
}

Fixed::Fixed(Fixed const &a)
{
	this->fpNumber = a.getRawBits();
}

Fixed::~Fixed()
{
}

//	------------------------------------------------------------------------

const	Fixed & Fixed::operator = (Fixed const &cp)
{
	this->fpNumber = cp.getRawBits();

	return *this;
}

//	------------------------------------------------------------------------

int Fixed::getRawBits() const
{
	return (this->fpNumber);
}

void	Fixed::setRawBits(const int raw)
{
	this->fpNumber = raw;
}

//	------------------------------------------------------------------------

float	Fixed::toFloat() const
{
	return ((float)(this->fpNumber) / (1 << this->bits));
}

int		Fixed::toInt() const
{
	return (this->fpNumber >> this->bits);
}

//	------------------------------------------------------------------------

bool	Fixed::operator > (Fixed const &cp)	const
{
	return (this->getRawBits() > cp.getRawBits());
}

bool	Fixed::operator < (Fixed const &cp)	const
{
	return (this->getRawBits() < cp.getRawBits());
}

bool	Fixed::operator >= (Fixed const &cp)	const
{
	return (this->getRawBits() >= cp.getRawBits());
}

bool	Fixed::operator <= (Fixed const &cp)	const
{
	return (this->getRawBits() <= cp.getRawBits());
}

bool	Fixed::operator == (Fixed const &cp)	const
{
	return (this->getRawBits() == cp.getRawBits());
}

bool	Fixed::operator != (Fixed const &cp)	const
{
	return (this->getRawBits() != cp.getRawBits());
}

//	------------------------------------------------------------------------

Fixed Fixed::operator + (Fixed const &cp)
{
	Fixed	temp;

	temp.setRawBits(this->getRawBits() + cp.getRawBits());

	return temp;
}

Fixed Fixed::operator - (Fixed const &cp)
{
	Fixed	temp;

	temp.setRawBits(this->getRawBits() - cp.getRawBits());

	return temp;
}

Fixed Fixed::operator * (Fixed const &cp)
{
	Fixed		temp;
	long long	res;

	res = this->getRawBits() * cp.getRawBits();
	temp.setRawBits(res >> this->bits);

	return temp;
}

Fixed Fixed::operator / (Fixed const &cp)
{
	Fixed	temp;

	long long	res;

	res = this->getRawBits() / (cp.getRawBits() >> this->bits);
	temp.setRawBits(res);

	return temp;
}

//	------------------------------------------------------------------------

const	Fixed & Fixed::operator -- ()
{
	this->fpNumber--;

	return *this;
}

const	Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);

	operator--();

	return (tmp);
}

const	Fixed & Fixed::operator ++ ()
{
	this->fpNumber++;

	return *this;
}

const	Fixed Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	this->fpNumber++;

	return (tmp);
}

//	------------------------------------------------------------------------

Fixed & Fixed::max(Fixed &one, Fixed &two)
{
	if (one > two)
		return one;
	return two;
}

Fixed const & Fixed::max(Fixed const &one, Fixed const &two)
{
	if (one > two)
		return one;
	return two;
}

Fixed & Fixed::min(Fixed &one, Fixed &two)
{
	if (one < two)
		return one;
	return two;
}

Fixed const & Fixed::min(Fixed const &one, Fixed const &two)
{
	if (one < two)
		return one;
	return two;
}

//	------------------------------------------------------------------------

std::ostream & operator << (std::ostream & o, Fixed const &cp)
{
	o << cp.toFloat();

	return o;
}
