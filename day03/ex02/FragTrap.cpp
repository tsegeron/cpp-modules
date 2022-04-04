//
// Created by Grubbly Ernesto on 3/22/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name)
		: ClapTrap(Name, 100, 100 , 30)
{
	std::cout << this->_name << ": FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << this->_name << ": FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	ClapTrap::operator=(src);
	std::cout << this->_name << ": FragTrap copy assignment operator called" << std::endl;

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ": FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() const
{
	std::cout << this->getName() << " high fived" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_healthPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout	<< "FragTrap " << this->_name << ": attacks " << target << ", causing "
					 << this->_attackDmg << " points of damage" << std::endl;
	}
	else
		std::cout << this->_name << ": no energy or health to attack" << std::endl;
}
