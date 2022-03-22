//
// Created by Grubbly Ernesto on 3/21/22.
//

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap	{
public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		ScavTrap & operator = (ScavTrap const &src);
		virtual	~ScavTrap();

		void	guardGate() const;
		void	attack(const std::string &target);
};

#endif //SCAVTRAP_HPP
