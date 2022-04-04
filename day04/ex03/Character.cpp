//
// Created by Grubbly Ernesto on 3/23/22.
//

#include "Character.hpp"

Character::Character(std::string const &name) : inv_count(0)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character &src)
{
	this->name = src.getName();
	this->inv_count = 0;

	for(int i = 0; i < this->inv_count; i++)
		this->equip(src.inventory[i]->clone());
	for(int i = this->inv_count; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character & Character::operator = (const Character &src)
{
	this->name = src.getName();

	for(int i = 0; i < this->inv_count; i++)
		delete this->inventory[i];

	this->inv_count = 0;
	for(int i = 0; i < this->inv_count; i++)
		this->equip(src.inventory[i]->clone());
	for(int i = this->inv_count; i < 4; i++)
		this->inventory[i] = nullptr;

	return *this;
}

Character::~Character()
{
	std::cout << this->name << " Character destructor called" << std::endl;

	for(int i = 0; i < this->inv_count; i++)
		delete this->inventory[i];
}

size_t	Character::getInvCount() const
{
	return this->inv_count;
}

std::string const & Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	if (m == nullptr)
		return;
	if (this->inv_count > 3)
	{
		std::cout << "Inventory is full" << std::endl;
		return ;
	}
	this->inventory[this->inv_count++] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || idx > this->inv_count || this->inventory[idx] == nullptr)
	{
		std::cout << "Inventory " << idx << " wasn't found" << std::endl;
		return;
	}
	for(int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	this->inv_count--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || idx > this->inv_count || this->inventory[idx] == nullptr)
	{
		std::cout << "Inventory " << idx << " wasn't found" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
}
