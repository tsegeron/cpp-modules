#include <iostream>

#include "Zombie.hpp"

int main() {

	{
		Zombie *newZombPtr1;
		Zombie *newZombPtr2;

		newZombPtr1 = newZombie("Putin");
		newZombPtr1->announce();

		newZombPtr2 = newZombie("Biden");
		newZombPtr2->announce();

		delete newZombPtr1;
		delete newZombPtr2;
	}

	std::cout << std::endl;

	{
		randomChump("Bill");
		randomChump("Gates");
	}

	return 0;
}
