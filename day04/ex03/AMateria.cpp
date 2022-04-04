//
// Created by Grubbly Ernesto on 3/23/22.
//

# include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria "<< this->type << " constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	this->type = src.getType();
	std::cout << "AMateria "<< this->type << " copy constructor called" << std::endl;

}

AMateria & AMateria::operator = (const AMateria &src)
{
//	this->type = src.getType();
	std::cout << "AMateria "<< this->type << " copy assignment operator called" << std::endl;

	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria " << this->type << " destructor called" << std::endl;
}

std::string	const & AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << target.getName();
}
