//
// Created by Grubbly Ernesto on 3/19/22.
//

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>
# include <cmath>

class	Fixed	{
private:
	int					fpNumber;
	static const int	bits = 8;

public:
	Fixed();
	Fixed(int const &src);
	Fixed(float const &src);
	Fixed(Fixed const &src);
	virtual	~Fixed();

	Fixed const &operator=(Fixed const &src);

	int		getRawBits(void) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator > (Fixed const &src)	const;
	bool	operator < (Fixed const &src)	const;
	bool	operator >= (Fixed const &src)	const;
	bool	operator <= (Fixed const &src)	const;
	bool	operator == (Fixed const &src)	const;
	bool	operator != (Fixed const &src)	const;

	Fixed operator + (Fixed const &src);
	Fixed operator - (Fixed const &src);
	Fixed operator * (Fixed const &src);
	Fixed operator / (Fixed const &src);

	const Fixed & operator -- ();
	const Fixed operator -- (int);
	const Fixed & operator ++ ();
	const Fixed operator ++ (int);

	static Fixed & max(Fixed &one, Fixed &two);
	static Fixed const & max(Fixed const &one, Fixed const &two);
	static Fixed & min(Fixed &one, Fixed &two);
	static Fixed const & min(Fixed const &one, Fixed const &two);

};

Fixed & max(Fixed &one, Fixed &two);
Fixed const & max(Fixed const &one, Fixed const &two);
Fixed & min(Fixed &one, Fixed &two);
Fixed const & min(Fixed const &one, Fixed const &two);

std::ostream & operator << (std::ostream & o, Fixed const &src);

#endif //FIXED_H

