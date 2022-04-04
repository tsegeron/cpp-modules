//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef CURE_HPP
# define CURE_HPP

//# pragma once
class	Cure;
# include "AMateria.hpp"

class	Cure : public AMateria	{
public:
		Cure();
		Cure(Cure const &src);
		Cure & operator = (Cure const &src);
		virtual	~Cure();

		AMateria* clone() const;
		void	use(ICharacter& target);
};

#endif //CURE_HPP
