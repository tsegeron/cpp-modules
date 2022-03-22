//
// Created by Grubbly Ernesto on 3/19/22.
//

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
//# include <iomanip>
# include <string>

class	Harl	{
private:
		void	debug(void)	const;
		void	info(void)	const;
		void	warning(void)	const;
		void	error(void)	const;
		void	(Harl::*f[4])(void) const;


public:
		Harl();
		virtual	~Harl();

		void complain(std::string const &level)	const;

};

#endif //HARL_HPP
