//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

//# pragma once
class	AMateria;
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class	AMateria	{
protected:
		std::string	type;

public:
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		AMateria & operator = (AMateria const &src);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif //AMATERIA_HPP
