#include "Zombie.hpp"

Zombie*	newZombie(std::string const &name)	{
	Zombie *newZombPtr = new Zombie(name);
	if (newZombPtr == nullptr)
	{
		std::cout << "Insufficient memory" << std::endl;
		exit(1);
	}

	return newZombPtr;
}