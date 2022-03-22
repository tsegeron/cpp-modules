//
// Created by Ural Shagiziganov on 18.03.2022.
//

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB	{
private:
		std::string		Name;
		const Weapon	*Gun;


public:
		HumanB(std::string const &name);
		virtual	~HumanB();

		void	attack(void)	const;
		void	setWeapon(const Weapon &gun);

};



#endif //HUMANB_HPP
