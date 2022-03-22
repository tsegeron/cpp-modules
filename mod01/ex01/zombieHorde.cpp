#include "Zombie.hpp"

Zombie*	zombieHorde(int const N, std::string const &name)	{

	Zombie *Zombies = new Zombie[N];

	if (Zombies == nullptr)
	{
		std::cout << "Insufficient memory" << std::endl;
		return nullptr;
	}
	std::cout << std::endl << "Memory allocated" << std::endl;

	for (int i = 0; i < N; i++)
		Zombies[i].giveName(name);

	std::cout << "Names given" << std::endl << std::endl;

	return Zombies;
}
