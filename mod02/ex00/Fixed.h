//
// Created by Grubbly Ernesto on 3/19/22.
//

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>


class	Fixed	{
private:
		int					fpNumber;
		static const int	bits = 8;

public:
		Fixed();
		Fixed(Fixed const &src);
		const Fixed & operator = (Fixed const &cp);
		virtual	~Fixed();

		int		getRawBits(void) const;
		void	setRawBits( int const raw );
};

#endif //FIXED_H
