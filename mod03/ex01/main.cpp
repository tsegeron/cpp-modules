#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap	dude1("Dude");
	ScavTrap	dude2("Donald");
	std::cout << std::endl;

	dude1.attack("Whatever");
	std::cout << dude1;
	dude2.attack("Whatever");
	std::cout << dude2 << std::endl;

	std::cout << dude2;
	dude2.takeDamage(30);
	std::cout << dude2 << std::endl;

	dude2.beRepaired(20);
	std::cout << dude2 << std::endl;

	dude2.guardGate();
	std::cout << std::endl;


//	ClapTrap	dude1("Billy");
//	std::cout << std::endl;
//	dude1.attack(dude2.getName());
//	std::cout << dude1 << std::endl;

	ScavTrap	copy(dude2);
	std::cout << copy << std::endl;

	ScavTrap	equal("Whatever");
	equal = dude2;
	std::cout << equal << std::endl;

	return 0;
}
