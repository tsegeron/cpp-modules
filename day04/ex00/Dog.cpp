//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;

	this->type = "Dog";
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;

	this->type = src.getType();
}

Dog & Dog::operator = (const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	this->type = src.getType();

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
