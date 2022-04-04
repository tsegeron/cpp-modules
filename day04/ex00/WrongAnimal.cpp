//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;

	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;

	this->type = src.getType();
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;

	this->type = src.getType();

	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
//	std::cout << "WrongAnimal getType function called" << std::endl;

	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Why are you Gay?" << std::endl;
}

