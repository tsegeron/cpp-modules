//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << this->type << " constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << this->type << " copy constructor called" << std::endl;
}

Ice & Ice::operator = (const Ice &src)
{
	std::cout << this->type << " copy assignment operator called" << std::endl;

	return *this;
}

Ice::~Ice()
{
	std::cout << this->type << " destructor called" << std::endl;
}

AMateria * Ice::clone()	const
{
	Ice *copy = new Ice(*this);

	return copy;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoot an ice bolt at ";
	AMateria::use(target);
	std::cout << " *" << std::endl;
}
