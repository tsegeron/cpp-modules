#include "Zombie.hpp"

Zombie::Zombie(std::string const &name) : Name(name) {
	std::cout << "Constructor for " << this->Name << " called" << std::endl;
}

Zombie::~Zombie()	{
	std::cout << "Destructor for " << this->Name << " called" << std::endl;
}

void	Zombie::announce() const	{
	std::cout << this->Name << ": " << " BraiiiiiiinnnzzzZ..." << std::endl;
}
