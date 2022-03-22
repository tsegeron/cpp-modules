//
// Created by Grubbly Ernesto on 3/21/22.
//

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap	{
protected:
		std::string	_name;
		size_t		_healthPoints;
		size_t		_energyPoints;
		size_t		_attackDmg;

		ClapTrap(std::string name, size_t hp, size_t energy, size_t dmg);


public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap & operator = (ClapTrap const &src);
		virtual	~ClapTrap();

		std::string	getName() const;
		size_t		getNum(std::string const &what) const;
		void		setNum(std::string const &what, size_t const &newVal);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};

std::ostream & operator << (std::ostream & o, ClapTrap const &src);

#endif //CLAPTRAP_HPP
