#include "Zombie.hpp"

int main() {

	Zombie	*Zombies;
	int		num = 4;

	Zombies = zombieHorde(num, "Tom");
	if (Zombies == nullptr)
		return 1;

	for (int i = 0; i < num; i++)
	{
		std::cout << i << ": ";
		Zombies[i].announce();
	}

	std::cout << std::endl;

	delete [] Zombies;

	return 0;
}
