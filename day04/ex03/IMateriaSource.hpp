//
// Created by Grubbly Ernesto on 3/23/22.
//

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

//# pragma once

class IMateriaSource;
# include "AMateria.hpp"
# include <iostream>
# include <string>

class IMateriaSource
{
public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //IMATERIASOURCE_HPP
