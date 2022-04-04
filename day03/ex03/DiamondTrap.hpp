//
// Created by Grubbly Ernesto on 3/22/22.
//

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap	{
private:
		std::string _name;

public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap & operator = (DiamondTrap const &src);
		virtual	~DiamondTrap();

		void	whoAmI() const;
		void	attack(const std::string& target);
		std::string	getMyName() const;

};

#endif //DIAMONDTRAP_HPP
