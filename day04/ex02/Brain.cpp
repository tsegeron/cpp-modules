//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Brain.hpp"

Brain::Brain(std::string const &word)
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = word;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;

	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain & Brain::operator = (const Brain &src)
{
	std::cout << "Brain copy assignment operator called" << std::endl;

	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];

	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
