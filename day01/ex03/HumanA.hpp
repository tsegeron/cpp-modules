//
// Created by Ural Shagiziganov on 18.03.2022.
//

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA	{
private:
		std::string		Name;
		const Weapon	&Gun;


public:
		HumanA(std::string const &name, const Weapon &gun);
		virtual	~HumanA();

		void	attack(void)	const;


};

#endif //HUMANA_HPP
