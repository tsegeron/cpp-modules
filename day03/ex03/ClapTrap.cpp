//
// Created by Grubbly Ernesto on 3/21/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_healthPoints = 10;
	this->_energyPoints = 10;
	this->_attackDmg = 0;
	std::cout << this->_name << ": ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src.getName();
	this->_healthPoints = src.getNum("_healthPoints");
	this->_energyPoints = src.getNum("_energyPoints");
	this->_attackDmg = src.getNum("_attackDmg");

	std::cout << this->_name << ": ClapTrap copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, size_t hp, size_t energy, size_t dmg)
	: _healthPoints(hp), _energyPoints(energy), _attackDmg(dmg)
{
	this->_name = name;
	std::cout << this->_name << ": ClapTrap full constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{

	this->_name = src.getName();
	this->_healthPoints = src.getNum("_healthPoints");
	this->_energyPoints = src.getNum("_energyPoints");
	this->_attackDmg = src.getNum("_attackDmg");

	std::cout << this->_name << ": ClapTrap copy assignment operator called" << std::endl;

	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << ": ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_healthPoints > 0)
	{
		this->_energyPoints -= 1;
		std::cout	<< this->getName() << ": attacks " << target << ", causing "
					<< this->_attackDmg << " points of damage" << std::endl;
	}
	else
		std::cout << this->_name << ": no energy or health to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << ": takes " << amount << " of damage" << std::endl;

	if (amount >= this->_healthPoints)
		this->_healthPoints = 0;
	else
		this->_healthPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_healthPoints > 0)
	{
		this->_energyPoints -= 1;
		this->_healthPoints += amount;
		std::cout << this->_name << ": repaires " << amount << " health points" << std::endl;
	}
	else
		std::cout << this->_name << ": no energy or health to be repaired" << std::endl;
}

std::string ClapTrap::getName() const
{
	return this->_name;
}

size_t	ClapTrap::getNum(std::string const &what) const
{
	if (what == "_healthPoints")
		return this->_healthPoints;
	else if (what == "_energyPoints")
		return this->_energyPoints;
	else if (what == "_attackDmg")
		return this->_attackDmg;
	else
		return 0;
}

void	ClapTrap::setNum(std::string const &what, size_t const &newVal)
{
	if (what == "_healthPoints")
		this->_healthPoints = newVal;
	else if (what == "_energyPoints")
		this->_energyPoints = newVal;
	else if (what == "_attackDmg")
		this->_attackDmg = newVal;
}

std::ostream & operator << (std::ostream &o, const ClapTrap &src)
{
	o	<< src.getName() << ":  HP [" << src.getNum("_healthPoints") << "] energy ["
		<< src.getNum("_energyPoints") << "] Dmg [" << src.getNum("_attackDmg")
		<< "]" << std::endl;

	return o;
}
