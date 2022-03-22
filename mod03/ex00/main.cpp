#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	dude1("Billy");
	ClapTrap	dude2("Villy");
	ClapTrap	dude3("Dilly");
	ClapTrap	DUDE("Donald");
	std::cout << std::endl;

	ClapTrap	other1(dude1);
	ClapTrap	other2("Whatever");
	other2 = dude2;
	std::cout << std::endl;

	dude1.attack(DUDE.getName());
	std::cout << dude1 << std::endl;

	dude2.takeDamage(3);
	std::cout << dude2 << std::endl;

	dude3.takeDamage(11);
	std::cout << dude3;
	dude3.attack("Whatever");
	dude3.beRepaired(2);
	std::cout << std::endl;

	std::cout << dude1;
	for (int i = 1; dude1.getNum("_energyPoints") > 3;)
	{
		std::cout << i++ << ". ";
		dude1.attack(DUDE.getName());
	}
	std::cout << dude1 << std::endl;

	for (int i = 1; dude1.getNum("_energyPoints");)
	{
		std::cout << i++ << ". ";
		dude1.beRepaired(1);
	}
	std::cout << dude1;
	dude1.attack("Whatever");
	dude1.beRepaired(2);
	std::cout << std::endl;

	return 0;
}
