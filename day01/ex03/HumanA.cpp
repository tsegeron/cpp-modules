//
// Created by Ural Shagiziganov on 18.03.2022.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &gun) : Name(name), Gun(gun)
{
	std::cout << this->Name << " spawned" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->Name << " died" << std::endl;
}

void	HumanA::attack() const
{
	std::cout << this->Name << " attacks with their " << this->Gun.getType() << std::endl;
}
