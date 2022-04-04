//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

//# pragma once

class	ICharacter;
# include "AMateria.hpp"
# include <iostream>
# include <string>

class	ICharacter	{
public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif //ICHARACTER_HPP
