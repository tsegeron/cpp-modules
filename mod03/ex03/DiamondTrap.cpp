//
// Created by Grubbly Ernesto on 3/22/22.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name)
	: ClapTrap(Name + "_clap_name"), FragTrap(100, 30), ScavTrap(50)
{
	this->_name = Name;
	this->_healthPoints = this->FragTrap::_healthPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDmg = this->FragTrap::_attackDmg;

	std::cout << this->_name << ": DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
	: ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	operator=(src);
	std::cout << this->_name << ": DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
	ClapTrap::operator=(src);
	this->_name = src.getMyName();
	std::cout << this->_name << ": DiamondTrap copy assignment operator called" << std::endl;

	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << ": DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "I am " << this->getName() << " aka " << this->_name << std::endl;
}

std::string DiamondTrap::getMyName() const
{
	return this->_name;
}
