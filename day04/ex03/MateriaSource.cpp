//
// Created by Grubbly Ernesto on 3/24/22.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : count(0)
{
	for(int i = 0; i < 4; i++)
		Materias[i] = nullptr;
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	this->count = 0;
	for(; this->count < src.getCount(); this->count++)
		this->learnMateria(src.Materias[this->count]->clone());
	for(int i = this->count; i < 4; i++)
		this->Materias[i] = nullptr;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src)
{
	for(int i = 0; i < this->count; i++)
		delete this->Materias[i];

	this->count = 0;
	for(; this->count < src.getCount(); this->count++)
		this->learnMateria(src.Materias[this->count]->clone());
	for(int i = this->count; i < 4; i++)
		this->Materias[i] = nullptr;

	return *this;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < this->count; i++)
		delete this->Materias[i];
	std::cout << "Character destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *src)
{
	if (src == nullptr)
		return;
	if (count > 3)
	{
		std::cout << "MateriaSource is full" << std::endl;
		return;
	}
	for(int i = 0; i < this->count; i++)
		if (this->Materias[i] == src)
			return;

	this->Materias[this->count++] = src;
}

AMateria * MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < 4; i++)
		if (Materias[i] && Materias[i]->getType() == type)
			return Materias[i]->clone();
	return nullptr;
}

size_t	MateriaSource::getCount() const
{
	return this->count;
}
