#include "FragTrap.hpp"

int main( void )
{
	FragTrap	dude("Donald");
	std::cout << std::endl;

	dude.attack("Whatever");
	std::cout << dude << std::endl;

	std::cout << dude;
	dude.takeDamage(30);
	std::cout << dude << std::endl;

	dude.beRepaired(20);
	std::cout << dude << std::endl;

	dude.highFivesGuys();
	std::cout << std::endl;

	
	FragTrap	copy(dude);
	std::cout << copy << std::endl;

	FragTrap	equal("Whatever");
	equal = dude;
	std::cout << equal << std::endl;

	return 0;
}
