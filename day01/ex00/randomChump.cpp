#include "Zombie.hpp"

void	randomChump(std::string const &name)	{
	Zombie newZomb = Zombie(name);
	newZomb.announce();
}