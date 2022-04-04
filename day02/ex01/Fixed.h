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
		const Fixed & operator = (Fixed const &src);
		virtual	~Fixed();

		int		getRawBits(void) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator << (std::ostream & o, Fixed const &src);

#endif //FIXED_H
