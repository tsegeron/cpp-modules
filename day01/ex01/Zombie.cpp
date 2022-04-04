#include "Zombie.hpp"

Zombie::Zombie() : Name(std::string())	{
	std::cout << "Constructor called" << std::endl;
}


Zombie::~Zombie()	{
	std::cout << "Destructor for " << this->Name << " called" << std::endl;
}

void	Zombie::giveName(std::string const &name)	{
	this->Name = name;
}

void	Zombie::announce() const	{
	std::cout << this->Name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}
