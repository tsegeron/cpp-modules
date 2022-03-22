//
// Created by Grubbly Ernesto on 3/22/22.
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap	: public ClapTrap	{
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap & operator = (FragTrap const &src);
	virtual	~FragTrap();

	void	highFivesGuys(void) const;
	void	attack(const std::string &target);

};

#endif //FRAGTRAP_HPP
