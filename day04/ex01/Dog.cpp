//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	myBrain = new Brain("Woof");

	this->type = "Dog";
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;

	this->type = src.getType();

	myBrain = new Brain("Woof");
	*myBrain = *(src.getBrain());
}

Dog & Dog::operator = (const Dog &src)
{
	std::cout << "Dog copy assignment operator called" << std::endl;

	this->type = src.getType();

	myBrain = new Brain("Woof");
	*myBrain = *(src.getBrain());

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete myBrain;
}

Brain	*Dog::getBrain() const
{
	return this->myBrain;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
