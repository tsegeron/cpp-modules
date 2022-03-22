//
// Created by Ural Shagiziganov on 18.03.2022.
//

#include "Weapon.hpp"

Weapon::Weapon() : Type(std::string())
{
}

Weapon::Weapon(std::string const &type) : Type(type)
{
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType(void) const
{
	return this->Type;
}

void	Weapon::setType(const std::string &type)
{
	this->Type = type;
}
