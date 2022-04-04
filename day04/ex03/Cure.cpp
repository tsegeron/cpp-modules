//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
//	std::cout << this->type << " constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	std::cout << this->type << " copy constructor called" << std::endl;
}

Cure & Cure::operator = (const Cure &src)
{
	std::cout << this->type << " copy assignment operator called" << std::endl;
	return *this;
}

Cure::~Cure()
{
	std::cout << this->type << " destructor called" << std::endl;
}

AMateria * Cure::clone()	const
{
	Cure *copy = new Cure(*this);

	return copy;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals ";
	AMateria::use(target);
	std::cout << "'s wounds *" << std::endl;
}
