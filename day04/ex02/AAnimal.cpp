//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructor called" << std::endl;

	this->type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;

	this->type = src.getType();
}

AAnimal & AAnimal::operator = (const AAnimal &src)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;

	this->type = src.getType();

	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
//	std::cout << "AAnimal getType function called" << std::endl;

	return this->type;
}

void	AAnimal::makeSound() const
{
	std::cout << "I like it, Picasso" << std::endl;
}
