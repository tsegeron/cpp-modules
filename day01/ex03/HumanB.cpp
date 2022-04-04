//
// Created by Ural Shagiziganov on 18.03.2022.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : Name(name), Gun(nullptr)
{
	std::cout << this->Name << " spawned" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->Name << " died" << std::endl;
}

void	HumanB::setWeapon(const Weapon &gun)
{
	this->Gun = &gun;
}

void	HumanB::attack() const
{
	if (this->Gun == nullptr)
		std::cout << this->Name << " has no gun" << std::endl;
	else
		std::cout << this->Name << " attacks with their " << this->Gun->getType() << std::endl;
}
