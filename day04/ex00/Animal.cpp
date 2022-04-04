//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;

	this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;

	this->type = src.getType();
}

Animal & Animal::operator = (const Animal &src)
{
	std::cout << "Animal copy assignment operator called" << std::endl;

	this->type = src.getType();

	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
//	std::cout << "Animal getType function called" << std::endl;

	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Why are you Gay?" << std::endl;
}
