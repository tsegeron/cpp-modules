//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;

	this->type = "Cat";
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;

	this->type = src.getType();
}

Cat & Cat::operator = (const Cat &src)
{
	std::cout << "Cat copy assignment operator called" << std::endl;

	this->type = src.getType();

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

