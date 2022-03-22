#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class	Zombie	{
private:
		std::string const	&Name;


public:
		explicit	Zombie(std::string const &name);
		virtual		~Zombie();

		void	announce() const;

};

Zombie*	newZombie(std::string const &name);
void	randomChump(std::string const &name);

#endif //ZOMBIE_HPP
