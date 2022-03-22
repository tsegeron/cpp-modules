//
// Created by Grubbly Ernesto on 3/21/22.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name)
	: ClapTrap(Name, 100, 50 , 20)
{
	std::cout << this->_name << ": ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << this->_name << ": ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
	ClapTrap::operator=(src);
	std::cout << this->_name << ": ScavTrap copy assignment operator called" << std::endl;

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << this->getName() << " is now on Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_healthPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout	<< "ScavTrap " << this->_name << ": attacks " << target << ", causing "
					 << this->_attackDmg << " points of damage" << std::endl;
	}
	else
		std::cout << this->_name << ": no energy or health to attack" << std::endl;
}
