//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef ICE_HPP
# define ICE_HPP

//# pragma once
class	Ice;
# include "AMateria.hpp"

class	Ice : public AMateria	{
public:
		Ice();
		Ice(Ice const &src);
		Ice & operator = (Ice const &src);
		virtual	~Ice();

		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif //ICE_HPP
